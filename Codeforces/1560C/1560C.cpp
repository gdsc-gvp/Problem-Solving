#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;cin>>T;
    while (T--)
    {
        int n,i=1;cin>>n;
        while (i*i<n)
        {
            i++;
        }i--;
        int d = n-(i*i);
        if (d<=(i+1))
        {
            cout<<d<<" "<<i+1<<"\n";
        }else{
            int t = d-(i+1);
            cout<<i+1<<" "<<i-t+1<<"\n";
        }
        
    }
    
}
