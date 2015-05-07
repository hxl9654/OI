#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cf(int);
int ov(int, int);
int inf[1000][2] = { 0 },infiv[10][50][50]={0},infov[10][50][50]={0},j=0,j1=0,j2=0,j3=0,k=0,k1=0,k2=0,k3=0,i;
int ostep = 0, mstep = 0;
int iv(int,int);
int main()
{
    //freopen(".ssplog","r",stdin);
    //freopen("q.txt","w",stdout);
	int t = 4,t1 = 4, t2 = 4,f1=0;
	char temp[10] = { '\0' };
	for (i = 0; i < 3; i++)
	{
		puts("paper");
		fflush(stdout);
		inf[i][0] = 2;
		scanf("%s", temp);
		if(i!=2)
       {
        if (strcmp(temp, "stone") == 0)
		{
			inf[i][1] = 1;
			mstep = mstep + 5;
		}

		else if (strcmp(temp, "paper") == 0)
		{
			inf[i][1] = 2;
			mstep++;
			ostep++;
		}
		else if(strcmp(temp, "scissors") == 0)
		{
			ostep = ostep + 2;
			inf[i][1] = 3;
		}
       }
	}
	for (;; i++)
	{

		if (inf[i-1][0] == 1)
		{
            if(ostep>=89){infov[ostep-89][j][j1]=1;j1++;}
            if(mstep>=89){infiv[mstep-89][k][k1]=1;k1++;}
			if (strcmp(temp,"stone") == 0)
			{
				inf[i-1][1] = 1;
				mstep++;
				ostep++;

			}

			else if (strcmp(temp,"paper") == 0)
			{
				inf[i-1][1] = 2;
				ostep = ostep + 5;
			}
			else if(strcmp(temp,"scissors") == 0)
			{
                
				mstep = mstep + 10;
				inf[i-1][1] = 3;
			}
		}
		else if (inf[i-1][0] == 2)
		{
            if(ostep>=89){infov[ostep-89][j][j2]=2;j2++;}
            if(mstep>=89){infiv[mstep-89][k][k1]=2;k1++;}
			if (strcmp(temp,"stone") == 0)
			{
				inf[i-1][1] = 1;
				mstep = mstep + 5;
			}

			else if (strcmp(temp,"paper") == 0)
			{
				inf[i-1][1] = 2;
				mstep++;
				ostep++;
			}
			else if(strcmp(temp,"scissors") == 0)
			{
				ostep = ostep + 2;
				inf[i-1][1] = 3;
			}
		}
		else
		{
            if(ostep>=89){infov[ostep-89][j][j3]=3;j3++;}
            if(mstep>=89){infiv[mstep-89][k][k1]=3;k1++;}
			if (strcmp(temp,"stone") == 0)
			{
				inf[i-1][1] = 1;
				ostep = ostep + 10;
			}

			else if (strcmp(temp,"paper") == 0)
			{
				inf[i-1][1] = 2;
				mstep = mstep + 2;
			}
			else if(strcmp(temp,"scissors") == 0)
			{
				inf[i-1][1] = 3;
				mstep++;
				ostep++;
			}
		}
		if((infov[0][j][0]!=0||infov[1][j][0]!=0||infov[2][j][0]!=0||infov[3][j][0]!=0||infov[4][j][0]!=0||infov[5][j][0]!=0||infov[6][j][0]!=0||infov[7][j][0]!=0||infov[8][j][0]!=0||infov[9][j][0]!=0)&&ostep<89)
            {j++;j1=j2=j3=0;}
        if((infiv[0][j][0]!=0||infiv[1][j][0]!=0||infiv[2][j][0]!=0||infiv[3][j][0]!=0||infiv[4][j][0]!=0||infiv[5][j][0]!=0||infiv[6][j][0]!=0||infiv[7][j][0]!=0||infiv[8][j][0]!=0||infiv[9][j][0]!=0)&&ostep<89)
            {k++;k1=k2=k3=0;}
		if (mstep >= 99)
			mstep = mstep - 99;
		if (ostep >= 99)
			ostep = ostep - 99;
        
			{
				t1 = ov(mstep,ostep);
				if (t1!=0)
				{
                    //f1=0;
					if (t1 == 2)
					{
						{
							inf[i][0] = 2;
							puts("paper");
							fflush(stdout);
						}
						scanf("%s",temp);
						continue;
					}
					else if (t1 == 3)
					{
						{
							inf[i][0] = 3;
							puts("scissors");
							fflush(stdout);
						}
						scanf("%s",temp);
						continue;
					}

					else
					{
						{
							inf[i][0] = 1;
							puts("stone");
							fflush(stdout);
						}
						scanf("%s",temp);
						continue;
					}
				}
			}
			t2 = iv(mstep,ostep);
			if (t2!=0)
			{
                //f1=0;
				if (t2 == 1)
				{
					{
						inf[i][0] = 1;
						puts("stone");
						fflush(stdout);
					}
					scanf("%s",temp);
					continue;
				}
				else if (t2 == 2)
				{
					{
						inf[i][0] = 2;
						puts("paper");
						fflush(stdout);
					}
					scanf("%s",temp);
					continue;
				}
				else
				{
					{
						inf[i][0] = 3;
						puts("scissors");
						fflush(stdout);
					}

					scanf("%s",temp);
					continue;
				}
            }
        t = cf(i);
		if (t != 0)
		{			
			//f1=0;
            if (t == 1)
			{
				if (mstep <= 94)
				{
					inf[i][0] = 2;
					puts("paper");
					fflush(stdout);
				}
				else
				{
					inf[i][0] = 1;
					puts("stone");
					fflush(stdout);
				}
				scanf("%s",temp);
				continue;
			}
			else if (t == 2)
			{
				if (mstep <= 97)
				{
					inf[i][0] = 3;
					puts("scissors");
					fflush(stdout);
				}
				else
				{
					inf[i][0] = 2;
					puts("paper");
					fflush(stdout);
				}
				scanf("%s",temp);
				continue;
			}
			else if (t == 3)
			{
				if (mstep <= 89)
				{
					inf[i][0] = 1;
					puts("stone");
					fflush(stdout);
				}
				else
				{
					inf[i][0] = 3;
					puts("scissors");
					fflush(stdout);
                }	
				scanf("%s",temp);
				continue;
			}
        }
				if(f1==0||f1==1||f1==3||f1==4){puts("stone");f1++;inf[i][0] = 1;}
				else if(f1==5){puts("scissors");f1++;inf[i][0] = 3;}
				else {puts("paper");f1++;if(f1>=10)f1=0;inf[i][0] = 2;}
				//puts("stone");
				fflush(stdout);
				scanf("%s",temp);
    }
}

		int cf(int a)
		{
			if (mstep<=89&&inf[a - 2][1] == inf[a-1][1])return inf[a-1][1];
            else if (inf[a - 3][1] == inf[a - 2][1] && inf[a - 2][1] == inf[a-1][1])return inf[a-1][1];
			else if(inf[a-3][1]==1&&inf[a-2][1]==2&&inf[a-1][1]==3)return 1;
			else if(inf[a-3][1]==1&&inf[a-2][1]==3&&inf[a-1][1]==2)return 1;
			else if(inf[a-3][1]==2&&inf[a-2][1]==1&&inf[a-1][1]==3)return 2;
            else if(inf[a-3][1]==2&&inf[a-2][1]==3&&inf[a-1][1]==1)return 2;
            else if(inf[a-3][1]==3&&inf[a-2][1]==1&&inf[a-1][1]==2)return 3;
            else if(inf[a-3][1]==3&&inf[a-2][1]==2&&inf[a-1][1]==1)return 3;
            	
            else return 0;
		}
int ovf()
{
    if(j==0)return 0;
    int k11,k12,temp=infov[ostep-89][0>j-2?0:j-2][0],flag=0;
    for(k11=0>j-2?0:j-2;k11<=j;k11++)
        for(k12=0;infov[ostep-89][k11][k12]!=0;k12++)
            if(infov[ostep-89][k11][k12]!=temp){flag=1;break;return 0;}
    if(flag==1)return 0;
    if(flag==0)return infov[ostep-89][0][0];
    
}
int ivf()
{
    if(k<1)return 0;
    int j11,j12,temp=infiv[mstep-89][0>k-2?0:k-2][0],flag=0;
    for(j11=0>k-2?0:k-2;j11<=k;j11++)
        {for(j12=0;infiv[mstep-89][j11][j12]!=0;j12++)
            if(infiv[mstep-89][j11][j12]!=temp){flag=1;break;return 0;}}
    if(flag==1)return 0;
    if(flag==0)return infiv[mstep-89][0][0];
    
}
		int ov(int a, int b)
		{
            if(b<89)return 0;
            int temp1=0,temp2=0;
            temp1=ovf();
            temp2=cf(i);
            if (b == 89)
			{
                if(temp1!=0)
                {
                  if(temp1==1&&a<95)return 2;
                  else if(temp1==1)return 1;
                  else if(temp1==2&&a<98)return 3;
                  else if(temp1==2)return 2;
                  else if(temp1==3&&a<90)return 1;
                  else if(temp1==3)return 3;
                }
                if(temp2!=0)
                {
                  if(temp2==1&&a<95)return 2;
                  else if(temp2==1)return 1;
                  else if(temp2==2&&a<98)return 3;
                  else if(temp2==2)return 2;
                  else if(temp2==3&&a<90)return 1;
                  else if(temp2==3)return 3;
                }
				else
				{
                  if (a < 95)
				 	  return 2;
				  else
				  	  return 1;
                }
			}
			else if(b>89&&b<94)
			{
                if(temp1!=0&&temp1!=1)
                {
                  if(temp1==2&&a<98)return 3;
                  else if(temp1==2)return 2;
                  else if(temp1==3&&a<90)return 1; 
                  else if(temp1==3)return 3;  
                }
                if(temp2!=0)
                {
                  if(temp2==2&&a<98)return 3;
                  else if(temp2==2)return 2;
                  else if(temp2==3&&a<90)return 1;   
                  else if(temp2==3)return 3;        
                }
				else
				{
                  if (a < 98)
				 	  return 3;
				  else
				  	  return 2;
                }
			}
			else if (b == 94)
			{
				
                if(temp1!=0&&temp1!=1)
                {
                  if(temp1==2&&a<98)return 3;
                  else if(temp1==2)return 2;
                  else if(temp1==3&&a<90)return 1; 
                  else if(temp1==3)return 3;  
                }
                if(temp2!=0)
                {
                  if(temp2==2&&a<98)return 3;
                  else if(temp2==2)return 2;
                  else if(temp2==3&&a<90)return 1;   
                  else if(temp2==3)return 3;        
                }
				else
				{
                  if (a < 98)
				 	  return 3;
				  else
				  	  return 2;
                }
			
			}
			else if (b>=95&&b<=97)
			
				{
                  if (a < 98)
				 	  return 3;
				  else
				  	  return 2;
                }
			else if(b==98)
            {
                if(temp1!=0)
                {
                  if(temp1==1)return 3;
                  else if(temp1==2)return 1;
                  else if(temp1==3)return 2;
                }
				else
				{
                  if (a < 95)
				 	  return 2;
				  else
				  	  return 1;
                }
			}
			else return 0;
		}

		int iv(int a,int b)
		{
            if(a<89)return 0;
			int t1,t2;
			t1=cf(i);
			t2=ivf();
            if(t1==0&&t2==0)
             {
              if (a == 89)
				return 1;
		   	  else if (a>=90&&a<=94||a==98)
				return 2;
			  else if (a>=95)
				return 3;
			  else
				return 0;
             }
            else if(t1==1||t2==1)
            {
              if(a>=95)
                  return 1;
              else return 0;   
            }
            else if(t1==2||t2==2)
            {
              if(a==98)
                 return 2;
              else return 0;   
            }
            else if(t1==3||t2==3)
            {
              if(a>89)return 3;
              else return 0;
            }
            /*else if(t1==1)
            {
              if(a>=95)
                  return 1;
              else return 0;   
            }
            else if(t1==2)
            {
              if(a==98)
                 return 2;
              else return 0;   
            }
            else if(t1==3)
            {
              if(a>89)return 3;
              else return 0;
            }*/
            else return 0;
		}

