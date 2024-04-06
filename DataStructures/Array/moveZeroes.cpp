#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/move-zeroes/

void print(vector<int> ans, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}

int main()
{

    vector<int> nums = {0, 2, 0, 1};

    moveZeroes(nums);
    print(nums, nums.size());

    return 0;
}