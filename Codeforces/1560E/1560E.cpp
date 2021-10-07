//https://codeforces.com/contest/1560/problem/E
//https://codeforces.com/contest/1560/submission/129953482

#include<bits/stdc++.h>
using namespace std;
string Remove(string ip, char c){
    string ans="";
    for(char d:ip){
        if(c!=d )ans+=d;
    }
    return ans;
}
int main(){
    int T;cin>>T;
    while (T--)
    {
        string ip, o="";cin>>ip;
        map<char,int>s;
        for(int i = ip.size()-1; i>=0;i--){
            if(s.count(ip[i])==0){
                o=ip[i]+o;
                s.insert({ip[i],0});
            }
        }
        for (char c:ip)
        {
            s[c]++;
        }
        int d = 1,ans=0;bool h=true;
        for (char c:o)
        {
            if(s[c]%d!=0){cout<<"-1\n";h=false;break;}
            ans+=s[c]/d;
            d++;
        }
        string fl= ip.substr(0,ans), fk = fl,lr=fk;
        for (char c:o)
        {
            //cout<<lr<<"\n";
            lr= Remove(lr,c);
            fl+=lr;
        }
        if(fl!=ip && h){cout<<"-1\n";h=false;continue;}
        if(h){ 
            cout<<fk<<" "<<o<<" "<<"\n";
        }
        
    }
    
}