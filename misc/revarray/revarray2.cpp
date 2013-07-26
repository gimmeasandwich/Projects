#include <stdio.h>

int* revarray(int array[]) {
  int j = sizeof(array)/sizeof(int);
  int temp;
  for(int i=0; i < j; i++) {
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    j--;
  }
  for(int q = 0; q <= sizeof(array)/sizeof(int); q++) {
    printf("%d ", array[q]);
  }
  printf("\n");
  return array;
}

int main(int argc, char* argv[]) {
  int firstarray[] = {5, 10, 15};
  revarray(firstarray);
}
