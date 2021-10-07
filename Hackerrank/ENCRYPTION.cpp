#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l,i,j,r,c,k=0,p=0;
    remove(s.begin(), s.end(), ' ');
    
    l=s.length();
    r=floor(sqrt(l));
    c=ceil(sqrt(l));
  
    if((r*c)<l)
    {
        if(r<c)
        r++;
        else if(c<r)
        c++;
        else
        {
           r++;
           c++;
        }
    }
  
    char a[r][c];
    char b[r*c];

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(k<l)
                a[i][j]=s[k++];
            }
        }
    
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(a[j][i]>='a' && a[j][i]<='z')
            b[p++]=a[j][i];
        }
        b[p++]=' ';
    }
  
    for(i=0;i<p;i++)
    cout<<b[i];
    
    return 0;
  
}
