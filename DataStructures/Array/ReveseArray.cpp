#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};

int revese(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
};

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    revese(arr, 6);
    revese(brr, 5);

    printArray(arr, 6);
    cout << endl;
    printArray(brr, 5);

    return 0;
}