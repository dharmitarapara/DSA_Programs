#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout << "find using binary search " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3, b = 5;
    cout << "max " << max(a, b) << endl;
    cout << "min " << min(a, b) << endl;

    swap(a, b);
    cout << "a:" << a << " b:" << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "reverse string of abcd is " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); //behind the seen it use intro sort(it be using three sorting algorithm(quick sort,heap sort,insertion Sort)).
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}