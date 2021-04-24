/*#include<stdio.h>
int main()
{
      int var=052;
      printf("%d",var);
}//o/p is 42---->if 0 in front it take as octal valus
        5*8^2*1+8^0=42*/

/*#include<stdio.h>
int main()
{
    int var=052;
    printf("%o",var);
    return 0;
}//o/p is 52 because of %o is given in printf*/

#include<stdio.h>
#define STRING "%s\n"
#define NESO "Welcome to Neso Academy!"
int main()
{
  printf(STRING,NESO);
}
