#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/rotate-array/description/

void print(vector<int> ans, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void rotate(vector<int> &nums, int k)
{
    // just to practice the modulus approach
    int n = nums.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
         nums[i] = temp[i];
    }
}

int main()
{
    vector<int> nums = {-1, -100, 3, 99};

    rotate(nums, 2);
    return 0;
}