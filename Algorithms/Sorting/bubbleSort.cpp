#include <vector>
#include <iostream>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/bubble-sort_980524

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

int main()
{
    vector<int> arr = {6, 2, 8, 4, 10};
    bubbleSort(arr, arr.size());
    print(arr, arr.size());
    return 0;
}