/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
BINARY SEARCH*/
#include <stdio.h>
/*@ behavior found:
assumes \exists int i; 0 <= i < n && a[i] == x;
ensures 0 <= \result < n && a[\result] == x;
behavior not_found:
assumes \forall int i; 0 <= i < n ==> a[i] != x;
ensures \result == -1;
*/
int binary_search(int a[], int n, int x) {
int l = 0, r = n - 1;
/*@ loop invariant l <= r;
loop invariant \forall int i; 0 <= i < l ==> a[i] != x;
loop invariant \forall int i; r < i < n ==> a[i] != x;
loop variant r - l;
*/
while (l <= r) {
int m = l + (r - l) / 2;
if (a[m] == x) {
return m;
} else if (a[m] < x) {
l = m + 1;
} else {
r = m - 1;
}
}
return -1;
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int n = 5;
  int x = 3;
  int result = binary_search(a, n, x);
  return 0;
}
