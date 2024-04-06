#include <iostream>
#include <deque>
using namespace std;

void print(deque<int> d)
{
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    print(d);

    // d.pop_back();
    // d.pop_front();
    // print(d);

    cout << "First index element " << d.at(1) << endl;
    cout << "First " << d.front() << endl;
    cout << "Last " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout<< "after erase " << d.size() << endl;
    //print(d);
    return 0;
}