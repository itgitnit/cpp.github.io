#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(4);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(1);

    //     Removing elements from the list:-

    //    -> list1.pop_front(); //Delete element from front in the list
    //    -> list1.pop_back(); //Delete element from the back in the list
    //     ->list1.remove(element); //Delete element from anywhere in the list

    // Sorting the list:-
    // list1.sort();
    // display(list1);

    // For Merging the list:-
    // list1.merge(list2); //Here list2 merge into list1

    // // For Reversing the list:-
    // list1.reverse();
    // display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" "; // 1 2

    // OR
    // display(list1);

    list<int> list2(4); // Empty list of size 4
    list<int>::iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 22;
    itr++;
    *itr = 24;
    itr++;
    *itr = 45;
    itr++;
    display(list2);

    return 0;
}