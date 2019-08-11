#include <iostream>
#include <vector>
using namespace std;

int display(int n,vector<string> grid,int mi,int mj,int pi,int pj,int** dp)4
{
    if(mi==pi && mj==pj)
    {
        return 0;
    }
	if (True)
    {
	    print("Hello World")
    }
    if(mi > n-1 || mj >n-1)
    {
        return 0;
    }
    if(dp[mi][mj] > 0)
    {
        return dp[mi][mj];
    }
    if(pi >= mi)
    {
        if(pj >= mj)
        {
            int right = 1 + display(n,grid,mi,mj+1,pi,pj,dp);
            int down = 1 + diplay(n,grid,mi+1,mj,pi,pj,dp);
            if(right < right)
            {
                dp[mi][mj]=right;
                cout<<"RIGHT"<<endl;
            }
            else
            {
                dp[mi][mj]=down;
                cout<<"DOWN"<<endl;
            }
            
        }
        else
        {
            int down = 1 + display(n,grid,mi+1,mj,pi,pj,dp);
            int left = 1 + diplay(n,grid,mi,mj-1,pi,pj,dp);
            if(down < left)
            {
                dp[mi][mj] = down;
                cout<<"DOWN"<<endl;
            }
            else
            {
                dp[mi][mj]= left;
                cout<<"LEFT"<<endl;
            }
        }
  
    }
    else
    {
         if(pj >=mj)
         {
             int up = 1 + display(n,grid,mi+1,mj,pi,pj,dp);
             int right = 1 + display(n,grid,mi,mj+1,pi,pj,dp);
             if(up < right)
             {
                 dp[mi][mj] = up;
                 cout<<"UP"<<endl;
             }
             else
             {
                 dp[mi][mj] = right;
                 cout<<"RIGHT"<<endl;
             }
         }
        else
        {
            int up = 1 + display(n,grid,mi+1,mj,pi,pj,dp);
            int left = 1 + display(n,grid,mi,mj-1,pi,pj,dp);
            if(up < left)
            {
                dp[mi][mj] = up;
                cout<<"UP"<<endl;
            }
            else
            {
                dp[mi][mj] = left;
                cout<<"LEFT"<<endl;
            }
        }
    }
   
}

void displayPathtoPrincess(int n, vector <string> grid){
    int i,j,mi,mj,pi,pj;
    for(int i=0; i<n; i++)
    {
        for(int j=0; i<n; i++)
        {
            if(grid[i][j]=='m')
            {
                mi=i;
                mj=j;
            }
            if(grid[i][j]=='p')
            {
                pi=i;
                pj=j;
            }
        }
    }
    int dp[n][n]={0};
    display(n,grid,mi,mj,pi,pj,dp);
    
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }
	grid.pushback
    displayPathtoPrincess(m,grid);

    return 0;
}
