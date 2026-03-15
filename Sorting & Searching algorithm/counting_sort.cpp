#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin >> s;

    // int fre[26] = {0};
    // for (char c : s)
    // {
    //     int val = c - 'a';
    //     fre[val]++;
    // }

    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     for (int j = 0; j < fre[i - 'a']; j++)
    //     {
    //         cout << i << " ";
    //     }
    // }

    int a[] = {0, 1, 3, 4, 4, 0, 1, 3, 6, 7, 0};
    int n = sizeof(a) / sizeof(a[0]);

    int fre[n] = {0};

    for (int i = 0; i < n; i++)
    {
        fre[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        while (fre[i] > 0)
        {
            cout << i << " ";
            fre[i]--;
        }
    }
}