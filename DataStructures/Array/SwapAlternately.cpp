#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};

void SwapAlternately(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
};

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 13, 9, 76, 43};

    SwapAlternately(even, 8);
    SwapAlternately(odd, 5);

    printArray(even, 8);
    cout << endl;
    printArray(odd, 5);

    return 0;
}