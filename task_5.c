#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
  int tmp = *a; 
  *a = *b; 
  *b = tmp;
}

int ispolnitel(int n) {
  int prod1 = (n/100) * (n%100/10); 
  int prod2 = (n%100/10)*(n%10); 
  if (prod1 < prod2) swap(&prod1, &prod2);
  printf("%d %d\n", prod1, prod2); 
  return prod1*(prod2 > 9 ? 100 : 10) + prod2; 
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", ispolnitel(n));
  return 0;
}
