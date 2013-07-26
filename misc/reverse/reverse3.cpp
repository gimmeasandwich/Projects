#include <stddef.h>
#include <string.h>

void reverse(char *str) {
  char* end = str + strlen(*str) - 1;
  
  while(end > str) {
    temp = *str;
    *str = *end;
    *end = temp;
    str++;
    end--;
  }
}

int main(int argc, char* argv[]) {
  reverse("winning.com");
}
