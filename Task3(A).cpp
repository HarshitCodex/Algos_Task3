#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int sum=0,cnt=0;
    while(s.length()>1)
    {
        sum=0;
        for(int i=0;i<s.length();i++)
        {
            sum+=(s[i]-'0');
        }
        s = to_string(sum);
        cnt++;
    }
    cout<<cnt<<endl;
}
