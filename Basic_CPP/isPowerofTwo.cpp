#include<iostream>
using namespace std;

//231 = LeetCode

bool isPowerofTwo(long long n){
        
        if(n == 0){
            return false;
        }
        while(n != 1){
            if(n % 2 != 0){
                return false;
            
            }
            n = n / 2;
        }
        return true;
        
    }

int main() {
    int n;
    cin>>n;

    cout<<(isPowerofTwo(n) ? "Yes" : "No");

    return 0;
}