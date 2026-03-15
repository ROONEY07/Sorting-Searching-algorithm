#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the array values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int tmp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > tmp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}