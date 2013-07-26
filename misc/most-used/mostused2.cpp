#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

char mostUsedChar(string s) {
  int letters[256] = {0}; int c;
  
  for(int i = 0; i < s.length(); i++) {
    c = s[i];
    letters[c]++;
  }

  int mostUsed = 0;
  int index = 0;
  for(int j = 255; j >= 0; j--) {
    if(letters[j] > mostUsed) {
      mostUsed = letters[j];
      index = j;
    }
  }
  return index;
}

int main(int argc, char* argv[]) {
  printf("%c\n", mostUsedChar("We won whoooooooooo!"));
}


      
