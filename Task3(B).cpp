#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<long long,vector<long long>,greater<long long> > q;
    for(int i=0;i<m;i++)
    {
        long long a;
        cin>>a;
        q.push(a);
    }
    int sze=m;
    while(sze>n)
    {
        sze--;
        long long a,b;
        a=q.top();
        q.pop();
        b=q.top();
        q.pop();
        //cout<<"a = "<<a<<" b = "<<b<<endl;
        q.push(a+b);
    }
    cout<<q.top()<<endl;
}
