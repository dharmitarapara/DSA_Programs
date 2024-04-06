#include <iostream>
#include <math.h>
using namespace std;

// https://leetcode.com/problems/complement-of-base-10-integer/

int bitwiseComplement(int n) {
    // 1st approach
    int m = n;
    int mask = 0;

    if(n = 0)
        return 1;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask; 
    return ans;
    // //2nd approach
    // int ans = 0;
    // for (int i = 0; n > 0; i++) {
    //     ans = ans + pow(2, i) * (!(n % 2));
    //     n = n / 2;
    // }
    // return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << bitwiseComplement(n);
    return 0;
}