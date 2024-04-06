#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i + 1 >= nums.size())
            break;
        if (nums[i] == nums[i + 1])
        {
            ans.push_back(nums[i]);
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> answer = findDuplicates(arr);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}