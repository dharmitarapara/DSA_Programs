#include<iostream>
#include<vector>
using namespace std;

// https://leetcode.com/problems/binary-search/

int search(vector<int> &nums, int target)
{
    auto it = find(nums.begin(), nums.end(), target);
    
    if (it != nums.end()) //std::vector::end returns a "special" iterator. It does not give you the last element, but one past the end. It is also used to indicate "no match" or "no element"
    {
        int index = it - nums.begin();
        return index;
    }
    else
    {
        return -1;
    }
};

int main()
{
    vector<int> nums = {5, 7, -2, 10, 22, -2, 0, 5, 22, 111};

    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    int index = search(nums, key);
    cout << "Index of k is " << index;

    return 0;
}