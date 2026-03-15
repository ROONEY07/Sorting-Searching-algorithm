#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[] = {0, 1, 4, 2, 0, 3, 4, 1, 7, 8, 4, 3, 0};
    // int count[9] = {0};

    // int size = sizeof(a) / sizeof(a[0]);

    // // Counting
    // for (int i = 0; i < size; i++)
    // {
    //     count[a[i]]++;
    // }

    // // Printing
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << i << ": " << count[i] << endl;
    // }

    char a[] = "programming";
    int count[26] = {0};

    for (int i = 0; i < strlen(a); i++)
    {
        int x = a[i] - 'a';
        count[x]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }
}