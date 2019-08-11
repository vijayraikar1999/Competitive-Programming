#include<iostream>
using namespace std;

int main()
{
	int i,n;
	int sumeven=0;
	int sumodd=0;
	int arr[n];
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
		if((i%2==0) && (arr[i]%2==0))
		{
			sumeven+=arr[i];
		}
		if((i%2!=0) && (arr[i]%2!=0))
		{
			sumodd+=arr[i];
		}

	}
	cout<<sumeven<<" "<<sumodd<<endl;

	return 0;

}
