#include<iostream>
using namespace std;

//Selection sort :- Find the minimum element in unsorted array and swap it with element at begining

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[i])
            {
               int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    
    
}