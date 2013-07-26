#include <stdio.h>
#include <string>
#include <array>

int firstNonRepeated(std::string s) {
  int letters[26] = {-1};
  for(char& c : s) {
    int i = tolower(c) - 'z';
    letters[i]++;
  }

  for(int i = 0; i < 26; i++) {
    if(letters[i] == 0) {
      return i;
    }
  }
}


int main(int argc, char* argv[]) {
  printf("%d\n",firstNonRepeated("winning"));
}
