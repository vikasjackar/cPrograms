#include <stdio.h>

int min(int a, int b) {
  if (a > b) {
    return b;
  } else {
    return a;
  }
}

int main(void) {
  // your code goes here
  int T;
  scanf(" %d", &T);
  int n, l, x;
  while (T--) {
    scanf("%i %i %d", &n, &l, &x);
    int r = n - l;
    printf("%d\n", min(r, l) * x);
  }
  return 0;
}
