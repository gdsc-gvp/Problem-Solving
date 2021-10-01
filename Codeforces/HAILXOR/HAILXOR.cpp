// Problem Link: https://www.codechef.com/DEC20B/problems/HXOR

/*
  Description -
  You are given a sequence A1,A2,…,AN and you have to perform the following operation exactly X times:

  Choose two integers i and j such that 1≤i<j≤N.
  Choose a non-negative integer p.
  Change Ai to Ai⊕2p, and change Aj to Aj⊕2p, where ⊕ denotes bitwise XOR.
  Find the lexicographically smallest sequence which can be obtained by performing this operation exactly X times.

  A sequence B1,B2,…,BN is said to be lexicographically smaller than a sequence C1,C2,…,CN if there is
   an index i such that Bi<Ci and for each valid j<i, Bj=Cj.
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  int t;
  cin>>t;
  while(t--)
  {
      long long int n,x;
      cin>>n>>x;
      long long int* arr=new long long int[n];
      
      vector<queue<long long int>>q(30,queue<long long int>());
      set<long long int>s;
      
      long long int ch;
      
     for(long long int i=0;i<n-1;++i)
     {
         cin>>arr[i];
         
         if(arr[i]!=0)
         {
             int j=(int)log2(arr[i]);
             for(;j>=0;--j)
         {
            ch=(1<<j);
             if((arr[i]&ch)!=0)
             { 
                 q[j].push(i);
             }
             
            
         }
             s.insert(i);
         }
     }
     
     cin>>arr[n-1];
     
     long long int index,val;
     int msb;
     
     set<long long int>::iterator it;
     
     while( !s.empty() && x!=0)
     {
           it=s.begin();
           index=*it;
           
              msb=(int)log2(arr[index]);
             
             q[msb].pop();
             
             if(q[msb].empty())
             {
                val=(1<<msb);
                 arr[index]=(arr[index]^val);
                 
                 arr[n-1]=(arr[n-1]^val);
             }
             
             else
             {
                 val=(1<<msb);
                 ch=q[msb].front();
                 q[msb].pop();
                 arr[index]=(arr[index]^val);
                 arr[ch]=(arr[ch]^val);
                 
                 if(arr[ch]==0)
                 {
                     s.erase(s.find(ch));
                 }
             }
             --x;
             if(arr[index]==0)
             {
                s.erase(it);
             }
         
     }

     if(x>0)
     {
         if(n==2&&(x%2)!=0)
         {
             arr[n-2]^=1;
             arr[n-1]^=1;
         }
     }
     
     for(long long int i=0;i<n;++i)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     
  }
   return 0;
}


