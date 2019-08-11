#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i,j,n,temp;
	cin>>n;
	vector<int> arr[n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>temp;
		    arr[i].push_back(temp);
		}
		cout<<endl;
	}
	int sum=0;
	if(n%2==0)
	{
		for(i=0; i<n; i++)
		{
			sum=sum+arr[i][i];
		}
		for(i=0,j=n-1; i<n,j>=0; i++,j--)
		{
              sum=sum+arr[i][j];
		}
		
		for(j=1; j<=n-2; j++)
		{
			sum+=arr[0][j];
			sum+=arr[n-1][j];
			sum+=arr[j][0];
			sum+=arr[j][n-1];
		}
	}
	else
	{
		for(i=0; i<n; i++)
		{
			sum+=arr[i][i];
		}
		for(i=0,j=n-1; i<n,j>=0; i++,j--)
		{
			if(i==j)
			{
				continue;
			}
			sum+=arr[i][j];

		}
		for(j=1; j<=n-2; j++)
		{
			sum+=arr[0][j];
			sum+=arr[n-1][j];
			sum+=arr[j][0];
			sum+=arr[j][n-1];
		}
	}

	cout<<sum<<endl;
	
	return 0;

}
