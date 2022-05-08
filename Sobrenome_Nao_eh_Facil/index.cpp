#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int n, z = 0, i, j;
  int ns[5] = {'a', 'e', 'i', 'o', 'u'};
  char p[100];
  scanf("%d", &n);
  for(; z < n; ++z) {
    scanf("%s", p);
    int cos = 0, ok1 = 0;
    for(i = 0; i < (int)strlen(p); ++i) {
      int ok = 1;
      for(j = 0; j < 5; ++j) if(tolower(p[i]) == ns[j]) {
        ok = 0;
        break;
      }
      if(ok) ++cos;
      else cos = 0;

      if(cos == 3) ok1 = 1;
    }
    if(ok1) printf("%s nao eh facil\n", p);
    else printf("%s eh facil\n", p);
  }
  return 0;
}
