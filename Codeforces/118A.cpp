

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    s.erase(remove(s.begin(), s.end(), 'A'), s.end());
    s.erase(remove(s.begin(), s.end(), 'E'), s.end());
    s.erase(remove(s.begin(), s.end(), 'I'), s.end());
    s.erase(remove(s.begin(), s.end(), 'O'), s.end());
    s.erase(remove(s.begin(), s.end(), 'U'), s.end());
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'y'), s.end());
    s.erase(remove(s.begin(), s.end(), 'Y'), s.end());

    int l = s.length();
    for (; i < 2 * l; i = i + 2)
    {
        s.insert(i, ".");
    }

    for (int i = 1; i < 2 * l; i = i + 2)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/118/A
