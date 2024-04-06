#include <iostream>
#include <limits.h>
using namespace std;

// https://leetcode.com/problems/reverse-integer/
// formula=: ans = ans * + digit;

int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}