#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

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

vector<int> searchRange(vector<int>& nums, int target)
{
    vector<int> ans;
    ans.push_back(firstOccurrence(nums, nums.size(), target));
    ans.push_back(lastOccurrence(nums, nums.size(), target));
    return ans;
}

int main()
{
    vector<int> arr = {5,7,7,8,8,10};
    vector<int> ans = searchRange(arr, 8);
    cout << ans[0] << " " << ans[1];
    return 0;
}