// Problem Link
// https://www.codechef.com/problems/MEDIC

#include<iostream>

using namespace std;

int main()
{
	int t,T,y,m,d,ans,ans1;
	int x;
	cin>>T;
	for(t=0; t<T; t++)
	{
		char a,b;
		cin>>y;
		cin>>a;
		cin>>m;
		cin>>b;
		cin>>d;

		
			if(m==9 || m==4 || m==6 || m==11)
			{
                 x=(30-d)/2 + 1;
                 if(d%2==0)
                 {
                 	ans=x+15;
                 }
                 else
                 {
                 	ans=x+16;
                 }
			}
			 if(m==2)
			{

				if(y%400==0 || (y%4==0 && y%100!=0))
				{
					if(d%2==0)
				{
                   x=(d-1)/2;
                   ans=14-x;
				}
				else
				{
					x=(d-1)/2;
					ans=15-x;
				}

				}
				else
				{
					x=(d-1)/2;
                   ans1=14-x;
                   if(d%2==0)
                   {
                        ans=ans1+15;
                   }
                   else
                   {
                   	ans=ans1+16;
                   }
				}

			}

			if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			{
				
				if(d%2==0)
				{
					ans=(31-d)/2+1;

				}
				else
				{
					ans=(31-d)/2+1;
					
				}
				
			}
		   
		cout<<ans<<endl;

	}
	return 0;
}
