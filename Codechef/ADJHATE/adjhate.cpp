// https://www.codechef.com/COOK133C/problems/ADJHATE

// Problem Statement
//An array is called lovely if the sum of absolute differences of each adjacent pair of elements is odd; formally, the array S of size m is lovely if ∑m−1i=1 |Si−Si+1| is odd.

// You are given an array A of N integers. You need to reorder the array in any manner such that the array becomes lovely. If there is no reordering operation that makes the array lovely, output -1.

// Input Format

// The first line contains an integer T denoting the number of test cases. The T test cases then follow.
// The first line of each test case contains an integer N.
// The second line of each test case contains N space-separated integers A1,A2,…,AN.
// Output Format

// For each test case, print a single line containing N integers denoting the modified array which is lovely, or -1 if it is not possible.

// Sample Input

// 2
// 6
// 3 7 10 1 2 12
// 2
// 1 3

// Sample Output

// 1 2 3 10 7 12
// -1

// solution

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> v(N);
        vector<int> odd(N);
        vector<int> even(N);
        int x = 0;
        int y = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even[x] = v[i];
                x++;
            }
            else
            {
                odd[y] = v[i];
                y++;
            }
        }

        if (x == 0 || y == 0)
        {
            int n = -1;
            cout << n << endl;
            continue;
        }

        for (int i = 0; i < x; i++)
        {
            cout << even[i] << " ";
        }
        for (int i = 0; i < y; i++)
        {
            cout << odd[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
