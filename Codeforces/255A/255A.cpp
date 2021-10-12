#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int g=1,back=0,chest=0,biceps=0;
    while(n--){
        int a; cin>>a;
        if(g%3==0) back+=a;
        else if(g%3==1) chest+=a;
        else if(g%3==2) biceps+=a;
        g++;
    }
    if(chest>=back && chest>=biceps) cout<<"chest\n";
    else if(back>=chest && back>=biceps) cout<<"back\n";
    else cout<<"biceps\n";
    return 0;
}