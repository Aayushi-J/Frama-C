/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
INSERTION SORT
*/
#include<limits.h>
/*@requires 0<n<INT_MAX;
assigns \nothing;
ensures \forall integer i,j;0<=j<i<n ==> arr[j]<=arr[i];
*/
void insertion(int arr[],int n)
{
int i,j,t;
/*@
loop invariant \forall integer p,q;0<=p<=q<n ==> arr[p]<=arr[q];
loop invariant 0<=i<=n;
loop assigns t,i,j,arr[0..n-1];
loop variant n-i;
*/
for(i=0;i<n;i++)
{
/*@
loop invariant \forall integer p;i+1<=p<n ==> arr[p]<=arr[n];
loop invariant i+1<=j<=n;
loop assigns t,j,arr[0..n-1];
loop variant n-j;
*/
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
t= arr[i];
arr[i] = arr[j];
arr[j] = arr[i];
}
}
}
}

int main()
{
int arr[]=(12,56,23,89,55);
insertion(arr,5);
}
