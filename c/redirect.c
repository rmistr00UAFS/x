#include <stdio.h>

int main()
{

   int n=100;
   char s[n]; //100 values of type char

   while (fgets(s, n, stdin)){
      printf("=>%s", s);
   }

   return 0;
}
