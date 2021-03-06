#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    //{
    map<string, int> marksMap;
    marksMap["Nikhil"] = 100;
    marksMap["Akshya"] = 32;
    marksMap["Sonam"] = 45;

    //OR

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    //}

    map<string, int>::iterator it;
    for (it = marksMap.begin(); it != marksMap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << "\n";
    } // key value=> Akshay 32 e.t.c.
    cout << "The size is:" << marksMap.size() << endl;
    cout << "The maxsize is:" << marksMap.max_size() << endl;
    cout << "The empty's return value is:" << marksMap.empty() << endl;
    return 0;
}