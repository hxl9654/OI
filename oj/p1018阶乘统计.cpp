#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,flag,n,k,lena;
    char a[100]={0};
    a[0]=1;
    scanf("%d%d",&n,&k);
    for(i=0;i<lena+2;i++,lena=(lena>i?lena:i))
		for(j=0;j<n||flag!=0;j++)
		{
			a[j+i]=a[j+i]+(a[i]*(i+1)+flag);
			flag=0;
			if(a[j+i]>=10)
			{
				flag=a[j+i]/10;
				a[j+i]=a[j+i]%10;
			}
		}
    flag=0;
    for(i=1500;i>=0;i--)
        if(a[i]!=0||flag==1){printf("%d",a[i]);flag=1;}
    if(flag==0)printf("0\n");
    system("pause");
    return 0;
}
