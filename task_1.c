#include <stdio.h>


int main() {
  int a, b, c, d; 
  scanf("%d %d %d %d", &a, &b, &c, &d); 
  int start = a + (c-a%d) + (a%d>c)*d;
  for (int i = start; i <= b; i += d) {
    printf("%d ", i); 
  } 
  printf("\n");
  return 0;
}
