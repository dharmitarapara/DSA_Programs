#include <vector>
#include <iostream>
#include <vector>
using namespace std;

// https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    vector<int> arr = {4, 12, 11, 20};
    insertionSort(arr.size(), arr);
    print(arr, arr.size());
    return 0;
}