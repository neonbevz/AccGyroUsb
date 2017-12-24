#include <string.h>
#include <stdio.h>


int main() {
  char to_print[50];
  char format[] = "%g %g %g %d \n";
  double one = 1;
  int two = 2;
  int three = 3;
  for (int i=0; i<10; i++) {
    sprintf(to_print, format, one, (double)two, (double)three, i);
    printf("%s", to_print);
  }
  return 0;
}
