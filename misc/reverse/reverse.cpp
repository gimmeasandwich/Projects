#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

string reverse(string s) {
  reverse(s.begin(),s.end());
  return s;
}

int main(int argc, char* argv[]) {
  printf("%s\n", reverse("I totally win dawg").c_str());
}
