
#include <stdio.h>
#include <string.h>

FILE *fpAll;

int main(void)
{
  fpAll = fopen("./lists/ALL.TXT", "r");

  char buffer[32];
  fseek(fpAll, 0, SEEK_SET);

  fscanf(fpAll, "%[^\n]", buffer);
  fprintf(stderr, "buffer = %s\n", buffer);
  fgetc(fpAll);
  fscanf(fpAll, "%[^\n]", buffer);
  fprintf(stderr, "buffer = %s\n", buffer);
  return 0;
}
