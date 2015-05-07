#include<stdio.h>
#include<stdlib.h>
float num[1000]={0};
char temp[1000]={0},op[1000]={0};
int ni=0,oi=0;
void nin(float a)
{
    num[ni]=a;
    ni++; 
}
void opin(char a)
{
    op[oi]=a;
    oi++; 
}
char look()
{
    return (op[oi-1]); 
}
float nout()
{
    ni--;
    return (num[ni]);  
}
float opout()
{
    oi--;
    return (num[oi]);  
}
