#include <bits/stdc++.h>
using namespace std;

void solve()
{
int n,c=0,bis=0,bac=0;
cin>>n;

int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
{
    if(i%3==0)
    c=c+a[i];
    if(i%3==1)
    bis=bis+a[i];
    if(i%3==2)
    bac=bac+a[i];
}

if(c>bis && c>bac)
cout<<"chest"<<"\n";

if(bis>c && bis>bac)
cout<<"biceps"<<"\n";

if(bac>bis && c<bac)
cout<<"back"<<"\n";



}
int main() {
 
  
    solve();
  
    return 0;
}