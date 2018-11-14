#include<iostream>
using namespace std;
int main()
{
    int n,m,k,i,j,v,visited[100],cost[100][100],visit[100],top=0,stk[100];
cin>>n;
cin>>m;
for(k=1;k<=m;k++)
{
cin>>i>>j;
cost[i][j]=1;
}
cin>>v;
cout<<v;
visited[v]=1;
k=1;
while(k<n)
{
    for(j=1;j<n;j++)
    {
        if(cost[v][j]!=0&&visited[j]!=1&&visit[j]!=1)
        {
            visit[j]=1;
            stk[top++]=j;

        }
        v=stk[--top];
        cout<<v;
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}
}
