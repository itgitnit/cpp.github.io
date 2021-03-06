#include<stdio.h>
#include<stdlib.h>

int *merge(int *a, int m, int *b, int n,int *c)
{
  int i=0,j=0,k=0;
  
  while(i<m && j<n){
    if(a[i] < b[j]){
      c[k] = a[i]; i++;
    }else{
      c[k] = b[j]; j++;
    }
    k++;
  }
  
  if(i<m)
    while(i<m){
      c[k] = a[i]; i++; k++;
    }
  
  else
    while(j<n){
      c[k] = b[j]; j++; k++;
    }
}

int main()
{
int n,m;
scanf("%d",&m);
scanf("%d",&n);
int a[m],b[n];
int c[m+n],d;
int i;
for(i = 0; i<m;i++)
{
scanf("%d",&a[i]);
}
for(i = 0;i<n;i++)
{
scanf("%d",&b[i]);
}
merge(a,m,b,n,c);
for(i = 0; i < m+n-1; i++)
{
for(int j = 0; j < m+n-i-1; j++)
{
if(c[j] > c[j + 1])
{
int temp = c[j];
c[j ] = c[j + 1];
c[j + 1] = temp;
}
}
}
for(i = 0; i < n + m; i++)
{
printf("%d ",c[i]);
}
printf("\n");
return 0;
}