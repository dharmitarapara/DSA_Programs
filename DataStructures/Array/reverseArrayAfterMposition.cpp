#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};

void reverseArray(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, 3);

    printArray(arr, arr.size());

    return 0;
}