#include <stdio.h>

int main()
{
   FILE *f;

   f = fopen("input.txt", "r");

   int n = 1000;
   char s[n];

   while (
       fgets(s, n, f))
   {
      printf("=>%s", s);
   }

   fclose(f);

   return 0;
}
