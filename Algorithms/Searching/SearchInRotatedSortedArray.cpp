#include <iostream>
#include <vector>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554

int getPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(vector<int> &arr, int low, int high, int k)
{
    int mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        mid = low + (high - low) / 2; // if array index range is out of interger size then using this we will n=not get OutOfRange error.

        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}

// Second Solution
// int findPosition(vector<int> &arr, int n, int k)
// {
//     int low = 0;
//     int high = arr.size() - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) >> 1;
//         if (arr[mid] == k)
//         {
//             return mid;
//         }
//         if (arr[low] <= arr[mid])
//         {
//             if (k >= arr[low] && k <= arr[mid])
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         else
//         {
//             if (k >= arr[mid] && k <= arr[high])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

int main()
{
    vector<int> arr = {7, 9, 1, 3, 4};

    cout << "Index is " << findPosition(arr, arr.size(), 1) << endl;

    return 0;
}