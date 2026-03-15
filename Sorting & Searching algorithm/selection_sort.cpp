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

    // selection sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}