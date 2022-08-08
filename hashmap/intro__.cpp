#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    // create a map
    unordered_map<string, int> m;

    // insertion - method 1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    // insertion - method 2
    pair<string, int> p2("love", 2);
    m.insert(p2);

    // insertion - method 3
    m["mera"] = 10; // registered 
    // m["mera"] = 5; // updation

    // cout << m["mera"] << endl;
    // cout << m.at("babbar") << endl;

    // cout << m.at("unknownKey") << endl; // gives and error
    // cout << m["unknownKey"] << endl; // it will create an entry for this key
    // cout << m.at("unknownKey") << endl; // Now the entry was created corresponding to this value

    // cout << m.size() << endl;

    // check presence
    // cout << m.count("love") << endl;

    // erase
    // cout << m.size() << endl;
    // m.erase("love");
    // cout << m.size() << endl;

    // access each element - method 1
    for(auto itr : m)
        cout << itr.first << " -> " << itr.second << endl;
    cout << endl;

    // access each element - method 2
    unordered_map<string, int> :: iterator itr = m.begin();
    while(itr != m.end())
    {
        cout << itr->first << " -> " << itr->second << endl;
        itr++;
    }


    return 0;
}