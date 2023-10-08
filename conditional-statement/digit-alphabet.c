#include <stdio.h>

int main() {

    char c;
    scanf("%c",&c);

    // c >= "0" && c <= "9"
    if(c >= 48 && c <= 57){
      printf("IS DIGIT\n");
    }
    else if(c >= 97 && c <= 122){
      printf("ALPHA\nIS SMALL");
    }
     else if(c >= 65 && c <= 91){
      printf("ALPHA\nIS CAPITAL");
    }
    return 0;
}