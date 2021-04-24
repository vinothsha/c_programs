#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
extern int x=1;

int main()
{
    int z;//auto var or local variable
    register int answer;
    //register variable
    static int count =0;
    ++count;
    printf("%d",count);

    printf("enter the value 1:");
    scanf("%d",&x);

    printf("enter the value 2:");
    scanf("%d",&z);
    answer=x+z;
    printf("%d.addtion:%d",count,answer);
}
