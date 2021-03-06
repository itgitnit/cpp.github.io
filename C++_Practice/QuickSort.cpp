//Quick Sort :- Isme hum koi bhi ek element choose krenge aur uss element ke right side me shift krte rahenge. Yaani ki uss element ke pehele jo elements honge woh chote honge aur uske baad jo elements honge woh bade honge..

//Algorithm :- QuickSort(arr[],l,r){
//     if(l < r){
//         int pi = partition(arr[],l,r)
//         QuickSort(arr[],l,pi-1)
//         QuickSort(arr[],pi+1,r)
//     }
// }

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}