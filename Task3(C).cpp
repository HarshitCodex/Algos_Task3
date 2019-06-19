#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool mark[n+1];
    for(int i=0;i<n+1;i++)
    {
        mark[i]=false;
    }
    int cnt=0;
    long long sum=0;
    for(int i=2;i<n+1;i++)
    {
        if(mark[i]==false)
        {
            //cout<<i<<" "<<cnt<<endl;
            cnt++;
            sum+=cnt;
            for(int j=i;j<n+1;j+=i)
            {
                mark[j]=true;
            }
        }
    }
    cout<<sum<<endl;
}
