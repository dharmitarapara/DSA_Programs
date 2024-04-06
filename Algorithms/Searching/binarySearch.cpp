#include <iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&category[]=Searching&sortBy=submissions

int binarysearch(int arr[], int n, int k)
{
    int low = 0, high = n - 1, mid = 0;

    while (low <= high)
    {
       // mid = (low + high) / 2;
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

int main()
{
    int arr[6] = {5, 7, 10, 22, 0, 1};

    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    int index = binarysearch(arr, 6, key);
    cout << "Index of k is " << index;

    return 0;
}