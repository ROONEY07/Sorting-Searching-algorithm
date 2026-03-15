#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int fre[26] = {0};

    for (char c : s)
    {
        fre[c - 'a']++;
    }

    vector<pair<int, char>> v;

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            v.push_back({fre[i], char(i + 'a')});
        }
    }

    sort(v.begin(), v.end(), greater<>());

    for (auto p : v)
    {
        for (int j = 0; j < p.first; j++)
        {
            cout << p.second << " ";
        }
    }
}