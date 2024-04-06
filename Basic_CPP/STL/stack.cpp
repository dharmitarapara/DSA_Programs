#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Dharmi");
    s.push("Nisha");
    s.push("Meet");

    cout << "Top Element " << s.top() << endl;
    s.pop();
    cout << "Top Element " << s.top() << endl;
    return 0;
}