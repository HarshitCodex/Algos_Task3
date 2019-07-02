#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<long long,vector<long long>,greater<long long> > qmax;
    priority_queue<long long,vector<long long> > qmin;
    vector<long long> vec;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=n-1;i>n-1-m;i--)
    {
    	qmin.push(vec[i]);
    }
    for(int i=0;i<n-m;i++)
    {
    	qmax.push(vec[i]);
    }
    while(!(qmax.empty())
    {
    	long long a=qmax.top();
    	long long b=qmin.top();
    	qmin.pop();
    	qmax.pop();
    	qmin.push(a+b);
    }
    cout<<qmin.top()<<endl;
}
