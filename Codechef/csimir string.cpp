#include <bits/stdc++.h>
using namespace std;

void solve()
{
string s;
cin>>s;
int a=0,b=0,c=0;

for(int i=0;i<s.length();i++)
{
    if(s[i]=='A')
     a++;
     if(s[i]=='B')
     b++;
     if(s[i]=='C')
     c++;

}
if( a+c==b)
{
    cout<<"YES"<<"\n";
}
else
cout<<"NO"<<"\n";

}
int main() {
   int t;
   cin>>t;
   
    while(t--)
  {
    solve();
  }
    return 0;
}