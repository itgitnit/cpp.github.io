#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    // Function Objects or Functor : Function that wrapped in a class so that it available like an object.

    int arr[] = {1, 73, 4, 2, 54, 1};
    sort(arr, arr + 5);                 //sort in ascending order.
    sort(arr, arr + 5, greater<int>()); //sort in descending order.
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}