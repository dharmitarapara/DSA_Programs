#include <iostream>
#include <list>
using namespace std;

void print(list<int> l)
{
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;

    list<int> n(5, 100);
    list<int> copy(n);
    print(copy);

    l.push_back(1);
    l.push_front(2);
    print(l);

    // l.pop_back();
    // l.pop_front();
    // print(d);

    l.erase(l.begin());
    print(l);

    return 0;
}