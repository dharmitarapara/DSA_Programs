#include <iostream>
using namespace std;

// https://leetcode.com/problems/sqrtx/

int mySqrt(int x)
{
    int s = 0;
    int e = x;
    long long mid = s + (e - s) / 2;
    long long ans = -1;

    while (s <= e)
    {
        long long squre = mid * mid;
        if (squre == x)
        {
            return mid;
        }
        if (squre < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    cout << mySqrt(27);
    return 0;
}

// How to bypass overflow without using long? Try this:

// use: mid = low +(high-low)//2.
// instead of mid =(high+low)//2

// Use if(mid==x/mid) return mid
// instead of: if(mid*mid==x)

// small things like this go long way in interview