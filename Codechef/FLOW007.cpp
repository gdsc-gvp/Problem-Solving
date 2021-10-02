// problem statement: https://www.codechef.com/LRNDSA01/problems/FLOW007

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
   while(t--){
    int n;
    int rem;
    int revnum=0;
    cin >> n;
    while(n!=0){
        
        rem=n%10;
        revnum = revnum*10 + rem;
        n/=10;

    }
    cout<< revnum<< endl;
   }
}
