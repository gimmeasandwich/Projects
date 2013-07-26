#include <string>
#include <stdio.h>
using namespace std;

string removeChars(string  s, string remove) {
  bool flags[128] = {false};
  int dst = 0;
  for(int i=0; i < remove.length(); i++) {
    flags[remove[i]] = true;
  }
  
  for(int i=0; i < s.length(); i++) {
    if(!flags[s[i]]) {
      s[dst++] = s[i];
    }
  }
  return s.substr(0,dst);
}

int main(int argc, char* argv[]) {
  printf("%s\n", removeChars("bowlingforsoup","oiu").c_str());
}
