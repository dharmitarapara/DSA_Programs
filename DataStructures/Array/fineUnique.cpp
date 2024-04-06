#include<iostream>
using namespace std;

//https://www.codingninjas.com/codestudio/problems/find-unique_625159

int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int arr[5] = {2, 4, 7, 2, 7};
    int arr1[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};

    cout<<findUnique(arr,5)<<endl;
    cout<<findUnique(arr1,9);
    return 0;
}
