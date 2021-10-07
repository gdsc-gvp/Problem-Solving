//https://codeforces.com/contest/1560/problem/D
//https://codeforces.com/contest/1560/submission/129920354
#include<bits/stdc++.h>
using namespace std;

long long D(long long a){
    long long i=0;
    while (a>0)
    {
        a/=10;
        i++;
    }
    
    return i;
}

long long P( long long b){
    long long a=1, r=10 ;
    while (b-->0)
    {
        a*=r;
        
    }
    return a;
}

int main(){
    int T;cin>>T;
   
     while (T-->0)
    {
        long long n ;cin>>n;
        long long d = D(n), ans=d+1, t = P(2*d);
        long long p2 = 1;
        if(n==1000000000){
            cout<<"9\n";continue;
        }
        int j=100;
        for (p2; p2 <= t &&j-->0; p2*=2)
        {
            //cout<<p2<<"--";
            stack<char> A ,B;
            long long a=p2,b=n;
            while (a>0)
            {
                A.push(a%10);
                a/=10;
            }
            while (b>0)
            {
                B.push(b%10);
                b/=10;
            }
            int m=0 , z=0;

            while (B.size()>0 && A.size()>0)
            {
                if(m==0 && B.top()==0)z++;
                if(B.top()==A.top() ){
                    A.pop();m++;
                }
                B.pop();
            }
            long long r = d-m;
            long long as = D(p2) - m;
            //cout<<r+as<<"|\t";
            if(r+as< ans){
                ans=r+as;
                //cout<<"\n";
            };
        }
        
        cout<<ans<<"\n";

    }
    
}
