// https://practice.geeksforgeeks.org/problkems/binary-number-to-decimal-number3525/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// C++ program to convert binary to decimal
// when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = num.length() - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
    string n;
    cin >> n;
	cout << binaryToDecimal(n) << endl;
}
