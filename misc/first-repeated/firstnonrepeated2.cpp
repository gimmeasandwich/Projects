#include <string>
#include <stdio.h>
using namespace std;

char firstNonRepeated(string str) {
  for(int i=0; i < str.length(); i++) {
    bool notRepeated = true;
    for(int j=0; j < str.length(); j++) {
      if( i != j && str[i] == str[j]) {
        notRepeated = false;
      }
    }
    if(notRepeated) {
      return str[i];
    }
  }
  return NULL;
}

int main(int argc, char* argv[]) {
  printf("%c\n",firstNonRepeated("wwinning"));
}
