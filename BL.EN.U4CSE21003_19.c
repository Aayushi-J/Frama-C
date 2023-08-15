/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
MAXIMUM ELEMENT IN AN ARRAY*/
#include <stddef.h>
/*@requires \valid_read(a + (0..n-1));
assigns \nothing;
behavior empty:
assumes n == 0;
ensures \result == 0;
behavior not_empty:
assumes 0 < n;
ensures 0 <= \result < n;
ensures \forall integer i; 0 <= i < n ==> a[i] <= a[\result];
ensures \forall integer i; 0 <= i < \result ==> a[i] < a[\result];
complete behaviors;
disjoint behaviors;
*/
size_t max_element(const * a, size_t n)
{
if (n == 0) {
return 0;
}
size_t max = 0;
/*@
loop invariant 0 <= i <= n;
loop invariant 0 <= max < n;
loop invariant \forall integer k; 0 <= k < i ==> a[k] <= a[max];
loop invariant \forall integer k; 0 <= k < max ==> a[k] < a[max];
loop assigns max, i;
loop variant n-i;
*/
for (size_t i = 1; i < n; i++)
{
if (a[max] < a[i]) {
max = i;
}
}
return max;
}
int main()
{
int x[5]={1,2,3,4,5};
max_element(x,3);
}
