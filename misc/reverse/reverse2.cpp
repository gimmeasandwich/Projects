#include <stdio.h>
#include <string>
using namespace std;

string reverse(string s) {
  int c, j = s.length()-1;
  for(int i = 0; i < j; i++) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    j--;
  }
  return s;
}

int main(int argc, char* argv[]) {
  printf("%s\n", reverse("I totally win dawg").c_str());
}
