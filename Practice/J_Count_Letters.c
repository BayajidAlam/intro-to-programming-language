#include <stdio.h>
#include <string.h>
int main()
{

  int n,m;
  char s[100];
  scanf("%s", s);

  int ln = strlen(s);
  int cnt[26] = {0};


  for (int i = 0; i < ln; i++)
  {
    int value = s[i] - 'a';
    cnt[value]++;
  }
  for (int i = 0; i < 26; i++)
  {
    if(cnt[i] != 0){
      printf("%c : %d\n", i + 97, cnt[i]);
    }
  }
  return 0;
}