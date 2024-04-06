#include <iostream>
#include <vector>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

int firstOccurrence(vector<int> &arr, int n, int k)
{
    int start = 0, end = n - 1, mid = 0;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            end = mid - 1;
            ans = mid;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int> &arr, int n, int k)
{
    int start = 0, end = n - 1, mid = 0;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            start = mid + 1;
            ans = mid;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);
    return make_pair(first, last);
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    pair<int, int> ans = firstAndLastPosition(arr, 8, 2);
    cout << ans.first << " " << ans.second;
    return 0;
}