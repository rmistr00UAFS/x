#include <stdio.h>

int main()
{

    int a=7;
    int* p=&a;
    printf("%d %p %p",*p,p,&a);

    int x[4]={24,63,26};

    for(int i=0;i<3;i++){
      printf("%d\n",*(x+i));
    }

   return 0;
}
