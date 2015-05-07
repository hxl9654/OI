#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
 FILE *fin,*fout;
 fin=fopen("qc.in","r");
 int n,m,wi,vi,s,q[200000][2]={0},k[50000][2]={0},out=100000,w,sum=0,sumv=0,yi,temp,i,j;
 
 fscanf(fin,"%d %d %d\n",&n,&m,&s);
 for(int t=0;t<n;t++)
    fscanf(fin,"%d %d\n",&k[t][0],&k[t][1]);     
 for(int t=0;t<m;t++)
    fscanf(fin,"%d %d\n",&q[t][0],&q[t][1]);
 fclose(fin);

 for(w=0;w<100000;w++)
     for(i=0;i<m;i++)
         {for(j=q[i][0];j<q[i][1];i++)
              if(k[i][0]>=w){sum++;sumv=sumv+k[i][1];}
          if((temp=(yi=sum*sumv)-s)<0)temp=-temp;
          if(out>temp)out=temp;
         }
 
 

 fout=fopen("qc.out","w");
 fprintf(fout,"%d",out);
 fclose(fout);
 
 return 0;    
}

/*小 T 是一名质量监督员，最近负责检验一批矿产的质量。这批矿产共有n 个矿石，从1到n 逐一编号，每个矿石都有自己的重量wi 以及价值vi。检验矿产的流程是：
1、给定m 个区间[Li，Ri]；
2、选出一个参数W；
3、对于一个区间[Li，Ri]，计算矿石在这个区间上的检验值Yi ：Yi=sum*sumv。sum为[Li，Ri]之间Wi>=W的矿石数量，sumv为其价值和。
这批矿产的检验结果Y 为各个区间的检验值之和。 
若这批矿产的检验结果与所给标准值S 相差太多，就需要再去检验另一批矿产。小T不想费时间去检验另一批矿产，
所以他想通过调整参数W 的值，让检验结果尽可能的靠近标准值S，即使得S-Y 的绝对值最小。请你帮忙求出这个最小值。
*/
