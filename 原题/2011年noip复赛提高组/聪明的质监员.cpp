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

/*С T ��һ�������ලԱ������������һ������������������������n ����ʯ����1��n ��һ��ţ�ÿ����ʯ�����Լ�������wi �Լ���ֵvi���������������ǣ�
1������m ������[Li��Ri]��
2��ѡ��һ������W��
3������һ������[Li��Ri]�������ʯ����������ϵļ���ֵYi ��Yi=sum*sumv��sumΪ[Li��Ri]֮��Wi>=W�Ŀ�ʯ������sumvΪ���ֵ�͡�
��������ļ�����Y Ϊ��������ļ���ֵ֮�͡� 
����������ļ�������������׼ֵS ���̫�࣬����Ҫ��ȥ������һ�������СT�����ʱ��ȥ������һ�������
��������ͨ����������W ��ֵ���ü����������ܵĿ�����׼ֵS����ʹ��S-Y �ľ���ֵ��С�������æ��������Сֵ��
*/
