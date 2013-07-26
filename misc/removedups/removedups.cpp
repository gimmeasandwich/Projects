#include <string>
#include <stdio.h>
using namespace std;

string removeDuplicates(string s) {
  bool characters[128] = {false};
  for(int i=0; i < s.length(); i++) {
    characters[s[i]] = true;
  }
  
  int offset = 0;
  for(int j=0; j < sizeof(characters)/sizeof(bool); j++) {
    if(characters[j]) {
      s[offset++] = j;
    }
  }

  return s.substr(0,offset);
}

int main(int argc, char* argv[]) {
  printf("%s\n", removeDuplicates("sup dog yoyoyo").c_str());
}
