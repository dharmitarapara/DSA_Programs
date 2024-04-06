#include <vector>
#include <iostream>
using namespace std;

//https://www.codingninjas.com/codestudio/problems/selection-sort_981162

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    vector<int> arr = {6, 2, 8, 4, 10};
    selectionSort(arr, arr.size());
    print(arr, arr.size());
    return 0;
}