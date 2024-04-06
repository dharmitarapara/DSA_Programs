#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//https://leetcode.com/problems/unique-number-of-occurrences/description/

bool findUniqueness(vector<int> arr)
{
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int k = 0; k < arr.size(); k++)
        {
            // Comparing First Element with all the Elements in the Array
            if (arr[i] == arr[k])
            {
                cnt++;
            }
        }
        // If we Find Element Twice then Return False
        if (cnt > 1)
            return false;
        // Reseting the 'cnt' variable
        cnt = 0;
    }
    // Returning True if Cnt Variable is less then 2(means we Find only one Occurence of Elements)
    return true;
}

bool uniqueOccurrences(vector<int> arr)
{
    // Declaring Two Dummy Integer Vector Arrays
    vector<int> stack, finalArr;
    // Cnt Variable for Keeping track
    int cnt = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int k = 0; k < arr.size(); k++)
        {
            // Checking if the Array Element is Already Visited
            if (count(stack.begin(), stack.end(), arr[i]))
            {
                break;
            }
            // If it's A new Element then we Count its Occurence
            else if (arr[i] == arr[k])
            {
                cnt++;
            }
        }
        // Pushing the Visited Array Element in (Array Stack)
        stack.push_back(arr[i]);
        // Adding the Number of Occurence to the Final Array
        if (cnt > 0)
            finalArr.push_back(cnt);
        cnt = 0;
    }
    // Getting the Uniqueness of (finalArr), is the Occurence is Same or Not
    return findUniqueness(finalArr);
}

int main()
{
    vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    cout << (uniqueOccurrences(arr) == 0 ? "false" : "true");
    return 0;
}