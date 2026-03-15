#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {0, 1, 4, 2, 0, 3, 4, 1, 7, 8, 4, 3, 0};
    int count[9] = {0};

    int n = sizeof(a) / sizeof(a[0]);
    int output[n];

    // Step 1: Count frequency
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    // Step 2: Prefix sum
    for (int i = 1; i < 9; i++)
    {
        count[i] += count[i - 1];
    }

    // Step 3: Build output array (stable)
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[a[i]]] = a[i];
    }

    // Step 4: Copy back
    for (int i = 0; i < n; i++)
    {
        a[i] = output[i];
    }

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}