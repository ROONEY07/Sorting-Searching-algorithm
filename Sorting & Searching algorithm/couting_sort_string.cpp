#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "madam";
    int fre[26] = {0};

    for (char c : a)
    {
        fre[c - 'a']++;
    }

    // for (char i = 'a'; i < 'z'; i++)
    // {
    //     if (fre[i - 'a'] > 0)
    //     {
    //         cout << i << ": " << fre[i - 'a'] << endl;
    //     }
    // }

    for (char i = 'a'; i < 'z'; i++)
    {
        for (int j = 0; j < fre[i - 'a']; j++)
        {
            cout << i << " ";
        }
    }
}