#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};

int update(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start += 2;
        end -= 2;
    }
};

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    update(arr, 6);
    update(brr, 6);

    printArray(arr, 6);
    cout << endl;
    printArray(brr, 6);

    return 0;
}