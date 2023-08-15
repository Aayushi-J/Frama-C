/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
BUBBLE SORT
*/
#include<limits.h>
/*@requires 0<l<INT_MAX;
requires \valid(a+(0..l-1));
ensures \forall integer j;0<=j<l-1 ==> a[l-1]>=a[j];
*/
void BubbleSort(int a[],int l)
{
/*@
loop invariant \forall integer x;0<=x<=i ==> a[x]<=a[i];
loop invariant 0<=i<=l-1;
loop assigns i,a[0..l-1];
loop variant l-1-i;
*/
for(int i=0;i<l-1;i++)
{
if(a[i]>a[i+1])
{
int temp = a[i];
a[i] = a[i+1];
a[i+1] = temp;
}
}
}
int main()
{
int a[7]={21,56,77,34,98,67,90};
BubbleSort(a,7);
}
