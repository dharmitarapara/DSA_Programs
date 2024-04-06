#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Dharmi");
    q.push("Nisha");
    q.push("Meet");

    cout << "Size Before pop " << q.size() << endl;
    
    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "First Element " << q.front() << endl;

    cout << "Size After pop " << q.size() << endl;
    return 0;
}