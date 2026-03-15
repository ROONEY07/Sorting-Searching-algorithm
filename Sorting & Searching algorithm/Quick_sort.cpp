#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int st, int end)
{
    int idx = st - 1;
    int pivot = a[end];
    for (int j = st; j < end; j++)
    {
        if (a[j] <= pivot)
        {
            idx++;
            swap(a[j], a[idx]);
        }
    }
    idx++;
    swap(a[idx], a[end]);
    return idx;
}

void Quicksort(vector<int> &a, int st, int end)
{
    if (st < end)
    {
        int pivot = partition(a, st, end);
        // left partition
        Quicksort(a, st, pivot - 1);
        // right parition
        Quicksort(a, pivot + 1, end);
    }
}
int main()
{
    vector<int> a = {5, 3, 4, 1, 2};
    Quicksort(a, 0, a.size() - 1);
    for (int x : a)
    {
        cout << x << " ";
    }
}