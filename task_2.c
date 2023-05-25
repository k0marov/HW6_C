#include <stdio.h>
#include <stdlib.h>

const int MAX_LEN = 255;

//! The caller is responsible for destruction
char *join(char *words[], int n) {
  char *res = malloc(MAX_LEN + 1); // +1 for '\0'
  int i = 0; // current position in res
  for (int w = 0; w < n; ++w) {
    int j = 0;
    while (words[w][j]) {
      res[i++] = words[w][j++];
    }
    res[i++] = w == n - 1 ? '\0' : ' ';
  }
  return res;
}

int main() {
  int n;
  scanf("%d", &n);
  char **words = malloc(sizeof(char *) * n);
  for (int i = 0; i < n; ++i) {
    words[i] = malloc(sizeof(char) * (MAX_LEN + 1));
    scanf("%s", words[i]);
  }

  char *res = join(words, n);
  printf("%s\n", res);
  free(res);

  for (int i = 0; i < n; ++i) {
    free(words[i]);
  }
  free(words);
  return 0;
}
