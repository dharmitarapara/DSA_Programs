#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/pair-sum_697295
vector<vector<int>> findTriplets(vector<int> nums, int n, int K)
{
    if (nums.size() < 3)
        return {};
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i && nums[i - 1] == nums[i])
            continue;
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            int total = nums[i] + nums[left] + nums[right];
            if (total < K)
            {
                left++;
            }
            else if (total > K)
            {
                right--;
            }
            else
            {
                ans.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                while (nums[left] == nums[left - 1] && left < right)
                {
                    left++;
                }
                while (nums[right] == nums[right + 1] && left < right)
                {
                    right--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 2, 3};
    int sum = 6;

    vector<vector<int>> ans = findTriplets(arr, arr.size(), sum);
    for (int i = 0; i < ans.size(); i++)
    {
        vector<int> pair = ans[i];
        cout << pair[0] << " " << pair[1] << " " << pair[2] << endl;
    }
    return 0;
}