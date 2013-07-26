#include <stdio.h>

void fizzbuzz(int n) {
  for(int i = 1; i <= n; i++) {
    if(i % 3 == 0 && i % 5 == 0) {
      printf("%s","FizzBuzz");
    } else if(i % 3 == 0) {
      printf("%s\n","Fizz");
    } else if(i % 5 == 0) {
      printf("%s\n","Buzz");
    } else {
      printf("%d\n",i);
    }
  }
}

int main(int argc, char* argv[]) {
  fizzbuzz(15);
}
