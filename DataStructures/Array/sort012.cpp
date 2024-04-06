#include <iostream>
using namespace std;

//https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};

void sort012(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        cout<<endl;
    }
}
int main()
{
    int arr[6] = {0, 1, 2, 2, 1, 0};
    sort012(arr, 6);
    printArray(arr, 6);
    return 0;
}