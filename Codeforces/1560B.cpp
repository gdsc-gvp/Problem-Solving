#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;cin>>T;
    while (T--)
    {
        int a,b,c;cin>>a>>b>>c;
        int d = a-b;
        if(d<0)d*=-1;
        if(d==0){
            cout<<"-1\n";
            continue;
        }
        if (c>2*d  || a>2*d || b>2*d)
        {
            cout<<"-1\n";continue;
        }
        
        if(c>d){
            cout<<c-d<<"\n";
        }else{
            cout<<c+d<<"\n";
        }
    }
    
}