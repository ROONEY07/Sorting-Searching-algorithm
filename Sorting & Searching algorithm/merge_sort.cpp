#include <bits/stdc++.h>
using namespace std;
void Merge(vector<int> &a, int st, int mid, int end)
{
    vector<int> tmp;
    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            tmp.push_back(a[i]);
            i++;
        }
        else
        {
            tmp.push_back(a[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        tmp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        tmp.push_back(a[j]);
        j++;
    }

    for (int t = 0; t < tmp.size(); t++)
    {
        a[t + st] = tmp[t];
    }
}

void MergeSort(vector<int> &a, int st, int end)
{
    if (st < end)
    {
        // int mid = (st + end)/2;
        int mid = st + (end - st) / 2;
        // left divide
        MergeSort(a, st, mid);
        // right divide
        MergeSort(a, mid + 1, end);

        Merge(a, st, mid, end);
    }
}
int main()
{
    // vector<int> a = {12, 31, 35, 8, 32, 17};
    vector<int> a = {5, 1, 2, 4, 3};
    MergeSort(a, 0, a.size() - 1);

    for (int x : a)
    {
        cout << x << " ";
    }
}