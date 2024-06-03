#include <stdio.h>

#define MAXLINE 1000 /* maximum input length */

int getln(char line[], int max);
int strindex(char source[], char searchfor[]);
int strrightmostindex(char source[], char searchfor[]);

char pattern[] = "ould"; /* pattern to search for */

/* find all line matching pattern */
main()
{
  char line [MAXLINE];
  int found = 0;

  while (getln(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0)
    {
      printf("char %d: ", strrightmostindex(line, pattern));
      printf("%s", line);
      found++;
    }

  return found;
}

/* getline: get line into line[], return length */
int getln(char line[], int max)
{
  int c, i;

  i = 0;
  while(--max > 0 && (c = getchar()) != EOF && c != '\n')
    line[i++] = c;

  if (c == '\n')
    line[i++] = c;
  
  line[i] = '\0';
  return i;
}

/* strindex: return index of searchfor[] in source[], -1 if not found */
int strindex(char source[], char searchfor[])
{
  int i, j, k;

  for (i = 0; source[i] != '\0'; i++)
  {
    for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++)
      ;
    if (k > 0 && searchfor[k] == '\0')
      return i;
  }
  
  return -1;
}

int strrightmostindex(char source[], char searchfor[])
{
  int i, j, k;

  for (i = 0; source[i] != '\0'; i++)
  {
    for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++)
      ;
    if (k > 0 && searchfor[k] == '\0')
      return j - 1;
  }
  
  return -1;
}