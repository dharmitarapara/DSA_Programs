#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/merge-sorted-array/description/

void print(vector<int> ans, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // removing zeroes
    for (int i = 0; i < nums2.size(); i++)
    {
        nums1.pop_back();
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(), nums1.end());
}

int main()
{

    vector<int> nums1 = {-1, 0, 0, 3, 3, 3, 0, 0, 0};
    vector<int> nums2 = {1, 2, 2};

    merge(nums1, nums1.size(), nums2, nums2.size());
    print(nums1, nums1.size());

    return 0;
}