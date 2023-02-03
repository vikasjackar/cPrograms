#include <stdio.h>

int main(void) {
  // your code goes here
  int t;
  scanf("%i", &t);
  while (t--) {
    int n, m, n2, m2;
    scanf("%d %d", &n, &m);
    n2 = n % 2;
    m2 = m % 2;
    if ((n2 == 0) && (m2 == 0)) {
      printf("0\n");
    } else if (n2 == 0) {
      printf("%d\n", n);
    } else if (m2 == 0) {
      printf("%d\n", m);
    } else {
      printf("%d\n", n + m - 1);
    }
  }
  return 0;
}
