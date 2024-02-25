#include <stdio.h>

int main()
{
   char s[30];

   while (1)
   {
      if (fgets(s, 30, stdin) == NULL)
         break;
      printf("%s", s);
   }

   return 0;
}
