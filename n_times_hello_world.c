#include <stdio.h>

void n_times_hello_world(int n) {
  int i = n;
  while (i > 0) {
    puts("Hello World!");
    i--;
  }
}

int main(int argc, char** argv) {
  n_times_hello_world(5);
  return 0;
}
