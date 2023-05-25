#include <stdio.h>
#include <stdlib.h>

int fib_at(int n) {
  int tmp, prev = 0, curr = 1, i = 0;
  while (i < n) {
    tmp = prev;
    prev = curr;
    curr = tmp + prev;
    ++i;
  }
  return prev;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", fib_at(n));
  return 0;
}
