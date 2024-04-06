#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/peak-index-in-a-mountain-array/

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0, e = arr.size();
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> arr = {0, 2, 1, 0};
    cout << peakIndexInMountainArray(arr);
    return 0;
}