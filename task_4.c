#include <stdio.h>
#include <stdlib.h>

int sumDigits(int *num) {
  int n = *num; 
  int s = 0; 
  while (n) {
    s += n % 10; 
    n /= 10; 
  }
  return s; 
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", sumDigits(&n));
  return 0;
}
