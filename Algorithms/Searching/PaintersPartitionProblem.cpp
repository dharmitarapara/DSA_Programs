#include <iostream>
#include <vector>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/painter-s-partition-problem_1089557

bool isPossible(vector<int> &boards, int k, int mid)
{
    int boardCount = 1;
    int paint = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        if (paint + boards[i] <= mid)
        {
            paint += boards[i];
        }
        else
        {
            boardCount++;
            if (boardCount > k || boards[i] > mid)
            {
                return false;
            }
            paint = boards[i];
        }
        if (boardCount > k || k > boards.size())
        {
            return false;
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;

    for (int i = 0; i < boards.size(); i++)
    {
        sum += boards[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 5, 5, 5};
    cout << findLargestMinDistance(arr, 2);
    return 0;
}