#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

char mostUsedChar(string s) {
  int letters[26] = {0}; int c;
  
  for(int i = 0; i < s.length(); i++) {
    c = tolower(s[i]) - 'a';
    letters[c]++;
  }

  int mostUsed = 0;
  int index = 0;
  for(int j = 25; j >= 0; j--) {
    if(letters[j] > mostUsed) {
      mostUsed = letters[j];
      index = j;
    }
  }
  return index + 'a';
}

int main(int argc, char* argv[]) {
  printf("%c\n", mostUsedChar("We totally won brahs"));
}


      
