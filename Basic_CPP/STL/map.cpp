#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "dharmi";
    m[13] = "devloper";
    m[2] = "tarapara";

    m.insert({5, "bheem"});
    m.insert({{25, "nobita"}, {22, "doramon"}});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "value present " << m.count(13) << endl;
    m.erase(13);
    cout << "value present " << m.count(13) << endl;

    auto itr = m.find(2);
    for (auto it = itr; it != m.end(); it++)
    {
        cout << (*it).first << " ";
    }
    cout << endl;
    return 0;
}