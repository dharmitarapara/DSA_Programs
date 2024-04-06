#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/pair-sum_697295

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int sum = 5;

    vector<vector<int>> ans = pairSum(arr1, sum);
    for (int i = 0; i < ans.size(); i++)
    {
        vector<int> pair = ans[i];
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}