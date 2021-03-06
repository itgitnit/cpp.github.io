#include<iostream>
using namespace std;

int find(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n;j++)
    {
        if(a[i]==a[j])
        break;
    }
    
} return i;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   cout<<find(a,n);
   
     
}