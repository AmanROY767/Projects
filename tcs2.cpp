#include<bits/stdc++.h>
using namespace std;
int countpair(int arr[],int n)
{   int count=0;
    map<pair<int,int>,bool> mp; 
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int a=arr[i];
            int b=arr[j];
            int c=a+b;
            pair<int,int> p=make_pair(a,b);
            if( c % 2==0 && mp[p]!=true)
            {
              count++;
              mp[p]=true;
            }
        }
           
     }
     return count;
     }
     int main()
     {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=countpair(arr,n);
        cout<<x;
     }