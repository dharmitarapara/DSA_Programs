#include <iostream>
#include <vector>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149

// intersection means common element
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 ans.push_back(arr1[i]);
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// Optimize solution
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> ans = findArrayIntersection(arr1, 6, arr2, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}