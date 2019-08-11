// Problem Link
// https://www.codechef.com/problems/CEQUAL


#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
	int i,n,T,t,x;
	cin>>T;
	for(t=0; t<T; t++)
	{
		cin>>n;
        set<int> st;
		cin>>x;
		st.insert(x);
        int flag=0;
        auto it=st.end();
		for(i=1; i<n; i++)
		{
			cin>>x;
			if(flag==0)
			{
               if(st.find(x)!=st.end())
               {
               	flag=1;
               }

			}

			st.insert(x);
		}
		if(flag==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}

	}

	return 0;
}
