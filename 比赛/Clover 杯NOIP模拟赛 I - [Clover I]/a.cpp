#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

const double eps=0.0000001;

int n,lena,lenb,lenc;
int squarex[60],squarey[60],squarel[60],cirx[60],ciry[60],cirr[60],trix1[60],trix2[60],trix3[60],triy1[60],triy2[60],triy3[60];
int ans;

double triarea(double a,double b,double c)
{
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

double dist(int x1,int y1,int x2,int y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

bool judgepoint(int x,int y)
{
	bool flag=false;
	for(int i=1;i<=lena;i++)
	{
		if(squarex[i]<=x && squarex[i]+squarel[i]>=x && squarey[i]<=y && squarey[i]+squarel[i]>=y)
		{
			flag=true;
			break;
		}
	}	
	if(flag) return true;
	for(int i=1;i<=lenb;i++)
	{
		if(dist(cirx[i],ciry[i],x,y)<=cirr[i]+eps)
		{
			flag=true;
			break;
		}
	}
	if(flag) return true;
	for(int i=1;i<=lenc;i++)
	{
		double aa=dist(trix1[i],triy1[i],trix2[i],triy2[i]);
		double bb=dist(trix1[i],triy1[i],trix3[i],triy3[i]);
		double cc=dist(trix2[i],triy2[i],trix3[i],triy3[i]);
		double pa=dist(trix1[i],triy1[i],x,y);
		double pb=dist(trix2[i],triy2[i],x,y);
		double pc=dist(trix3[i],triy3[i],x,y);
		if(triarea(aa,bb,cc)-eps<triarea(aa,pa,pb)+triarea(bb,pa,pc)+triarea(cc,pb,pc) && triarea(aa,pa,pb)+triarea(bb,pa,pc)+triarea(cc,pb,pc)<triarea(aa,bb,cc)+eps)
		{
			flag=true;
			break;
		}
	}
	if(flag) return true;
	return false;
}

int main()
{
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++)
    {
    	cin>>ch;
    	if(ch=='S') cin>>squarex[++lena]>>squarey[lena]>>squarel[lena];
    	else if(ch=='C') cin>>cirx[++lenb]>>ciry[lenb]>>cirr[lenb];
    	else if(ch=='T') cin>>trix1[++lenc]>>triy1[lenc]>>trix2[lenc]>>triy2[lenc]>>trix3[lenc]>>triy3[lenc];
    }
    for(int i=-50;i<=100;i++)
    	for(int j=-50;j<=100;j++) if(judgepoint(i,j)) ans++;
   	cout<<ans<<endl;
    
    return 0;
}
