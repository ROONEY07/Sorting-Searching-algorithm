#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // // binary search => O(logN)
    sort(v.begin(), v.end());

    int x;
    cout << "Enter the value x: ";
    cin >> x;

    bool p = binary_search(v.begin(), v.end(), x);
    if (p)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }

    // // lowerBound => first occurance er soman ba boro value ferot dey.
    // // UpperBound => first occurance er boro value ferot dey
    // auto p2 = lower_bound(v.begin(), v.end(), x);
    // auto p3 = upper_bound(v.begin(), v.end(), x);

    // cout << "lower bound: " << p2 - v.begin() << endl;
    // cout << "Upper bound: " << p3 - v.begin();

    vector<int> v1 = {1, 2, 3, 4, 4, 5};
    auto it = unique(v1.begin(), v1.end());
    v1.erase(it, v1.end());
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
}