// https://www.codechef.com/LTIME91B/problems/SWAP10HG

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, o1 = 0, z1 = 0, o2 = 0, z2 = 0;
        cin >> n;
        string s, p;
        cin >> s >> p;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
                o1++;
            else if (s[i] == '0')
            {
                z1++;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (p[i] == '1')
                o2++;
            else if (p[i] == '0')
            {
                z2++;
            }
        }
        //cout<<o1<<" "<<o2<<" "<<z1<<" "<<z2<<" ";
        if (o1 == o2 && z1 == z2)
        {
            ll c = 1, val = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i] == '1' && p[i] == '0')
                    val++;
                if (s[i] == '0' && p[i] == '1')
                {
                    if (val == 0)
                    {
                        c = 0;
                        break;
                    }
                    val--;
                }
            }
            c == 0 ? cout << "No\n" : cout << "Yes\n";
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
