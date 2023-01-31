#include <stdio.h>
int max(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int main(void) {
  // your code goes here
  int T;
  scanf("%i", &T);
  while (T--) {
    int l, b;
    scanf("%i %i", &l, &b);
    for (int i = max(l, b); i > 0; i--) {
      if ((l % i == 0) && (b % i == 0)) {
        printf("%i\n", (l / i) * (b / i));
        break;
      }
    }
  }
  return 0;
}
