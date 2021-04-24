//A character is a vowel or consonant?
/*#include<stdio.h>
int main()
{
      char c='g';
      if ((c=='i')|(c=='a') |(c=='e')|(c=='o')|(c=='u'))
        printf("it is a vowel %c",c);
      else
        printf("it is a consonant %c",c);
}*/

//Write a C program to perform input/output of all basic data types?
/*#include <stdio.h>
int main()
{
    char charVal;
    unsigned char uCharVal;
    short shortVal;
    unsigned short uShortVal;
    int intVal;
    unsigned int uIntVal;
    long longVal;
    unsigned long uLongVal;
    long long longLongVal;
    unsigned long long uLongLongVal;
    float floatVal;
    double doubleVal;
    long double longDoubleVal;
    printf("Enter a character: ");
    charVal = getchar();
    getchar(); // <-- Dummy getchar() to capture enter

    printf("Enter another character: ");
    uCharVal = getchar();
    getchar(); // <-- Dummy getchar() to capture enter
    printf("Enter a signed short value: ");
    scanf("%hi", &shortVal);
    printf("Enter an unsigned short value: ");
    scanf("%hu", &uShortVal);
    printf("Enter an signed integer value: ");
    scanf("%d", &intVal);
    printf("Enter an unsigned integer value: ");
    scanf("%lu", &uIntVal);
    printf("Enter a signed long value: ");
    scanf("%ld", &longVal);
    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongVal);
    printf("Enter a signed long long value: ");
    scanf("%lld", &longLongVal);
    printf("Enter an unsigned long long value: ");
    scanf("%llu", &uLongLongVal);
    printf("Enter a float value: ");
    scanf("%f", &floatVal);
    printf("Enter a double value: ");
    scanf("%lf", &doubleVal);
    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleVal);
    printf("\nYou entered character: '%c' \n", charVal);
    printf("You entered unsigned character: '%c' \n\n", uCharVal);
    printf("You entered signed short: %hi \n", shortVal);
    printf("You entered unsigned short: %hu \n\n", uShortVal);
    printf("You entered signed int: %d \n", intVal);
    printf("You entered unsigned int: %lu \n\n", uIntVal);
    printf("You entered signed long: %ld \n", longVal);
    printf("You entered unsigned long: %lu \n\n", uLongVal);
    printf("You entered signed long long: %lld \n", longLongVal);
    printf("You entered unsigned long long: %llu \n\n", uLongLongVal);
    printf("You entered float: %f \n", floatVal);
    printf("You entered double: %lf \n", doubleVal);
    printf("You entered long double: %Lf \n", longDoubleVal);
  return 0;
}*/

/*int main()
{
  int a,b;
  printf("enter a");
  scanf("%d",&a);
  printf("enter b");
  scanf("%d",&b);
  int c=a+b;
  printf("add of two num is %d+%d=%d",a,b,c);
}*/
