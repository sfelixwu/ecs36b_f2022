
#include <stdio.h>
#include <string.h>

FILE *fpAll;

void
filterWords(const char * impossible)
{
  unsigned int i, j, flag;

  if (impossible == NULL) return;
  unsigned int char_count = strlen(impossible);
  if (char_count > 26) return;

  char buffer[32];
  fseek(fpAll, 0, SEEK_SET);

  unsigned int result_count = 0;
  bzero(buffer, 32);  

  while ((fscanf(fpAll, "%[^\n]", buffer)) != EOF)
    {
      flag = 0;
      for (i = 0; i < char_count; i++)
	{
	  for (j = 0; j < 5; j++)
	    {
	      if (buffer[j] == impossible[i]) flag = 1;
	    }
	}
      
      if (flag == 0)
	{
	  fprintf(stderr, "%s\n", buffer);
	}
      bzero(buffer, 32);
      fgetc(fpAll);
    }
  return;
}

int main(void)
{
  fpAll = fopen("./lists/ALL.TXT", "r");
  filterWords("aeiouy");
  return 0;
}
