#include <iostream>
#include <vector>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
int findDuplicate(vector<int> &arr)
{
    //XOR all elements
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 1};
    vector<int> arr1 = {6, 3, 1, 5, 4, 3, 2};

    cout<<findDuplicate(arr)<<endl;
    cout<<findDuplicate(arr1);
    return 0;
}