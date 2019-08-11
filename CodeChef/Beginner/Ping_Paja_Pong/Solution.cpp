// Question Link
// https://github.com/vijayraikar1999/Competitive-Programming/blob/master/CodeChef/Beginner/Ping_Paja_Pong/question.md

#include<iostream>

using namespace std;

int main()
{
	int temp,t,T,x,y,k;
	cin>>T;
	for(t=0; t<T; t++)
	{
		cin>>x>>y>>k;
        temp=(x+y)/k;
        if(temp%2==0)
        {
        	cout<<"Chef"<<endl;
        }
        else
        {
        	cout<<"Paja"<<endl;
        }
	}
	return 0;
}
