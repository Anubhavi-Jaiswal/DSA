#include<bits/stdc++.h>
using namespace std;
void print19(int n)
{
    int inis=0;
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        inis+=2;
    }
    inis=2*n-2;
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        print19(n);
    }
}