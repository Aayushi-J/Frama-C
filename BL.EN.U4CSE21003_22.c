#include <stdio.h>
/*@requires 0 <= l <= r < n;
assigns a[l..r];
ensures \forall int i; l <= i <= r ==> a[i] == x;
ensures \forall int i; 0 <= i < l ==> a[i] == \old(a[i]);
ensures \forall int i; r < i < n ==> a[i] == \old(a[i]);
*/
void modify_range(int a[], int n, int l, int r, int x) {
/*@loop invariant l <= i <= r;
loop variant r - i;
*/
  for (int i = l; i <= r; i++) {
    a[i] = x;
  }
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int n = 5;
  int l = 1;
  int r = 3;
  int x = 10;
  modify_range(a, n, l, r, x);
  return 0;
}

