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

/*#include<stdio.h>
//hcf gcd
int main()
{
    int n1=81,n2=153,i,hcf;
    for (i=1;i<=n1 && i<=n2;++i){
      if (n1%i==0 && n2%i==0)
        hcf=i;

    }
    printf("%d",hcf);
}*/

/*#include<stdio.h>
int main()
{
    int x=24,y=54,i,lcm,grt;
    grt=(x>y)? x:y;
    while (1)
    {
      if(grt%x==0 && grt%y==0)
      {
        lcm=grt;
        printf("%d",lcm);
        break;
      }
      grt+=1;
    }

}*/

/*#include<stdio.h>
int main()
{
  int n=5,fact=1,i=1;
  for(i=1;i<=n;i++)
  {
    fact*=i;
  }
  printf("%d",fact);

}*/

/*#include<stdio.h>
int main()
{
    int f=0,s=1,i=1,t,n=5;
    for (i=1;i<n;i++)
    {
      t=f+s;
      f=s;
      s=t;
    }printf("%d",t);
}*/

/*#include<stdio.h>
int main()
{
    int n=123,sum=0;
    int r;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }printf("%d",sum);
}*/

/*#include<stdio.h>
int add(int x, int y);
int main()
{
  int x=5,y=5,c;
  c=add(x,y);
  printf("%d",c);
}
int add(int x, int y)
{
  int c;
  c=x+y;
  return (c);
}*/

/*#include<stdio.h>
main()
{
    long n,c=0;
    printf("enter n :");
    scanf("%d",&n);
    while(n!=0)
    {
      n=n/10;
      c+=1;
    }
    printf("%d",c);
}*/

/*#include<stdio.h>
int main()
{
    int yr=1900;
    if (yr%400==0){
      printf("leap year");}
    else if(yr%100==0){
      printf("not a leap year");}
    else if(yr%4==0){printf("leap year");}
    else{printf("not a leap year");}
}*/

/*#include<stdio.h>
int main()
{
    int n=123464455,r,sum=0;
    while(n!=0)
    {
      r=n%10;
      sum=sum+1;
      n=n/10;
    }printf("%d",sum);
}*/

/*#include<stdio.h>
int main()
{
    int n=123,rev=0,r;
    while(n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
    }printf("%d",rev);
}*/

/*#include<stdio.h>
int main()
{
    int n=1634,a,arm,r;
    n=a;
    while(a!=0)
    {
      r=a%10;
      arm+=r*r*r;
      a=a/10;
    }
  if (arm=n)
    printf("is ArmStrong");
  else
    printf("not a ArmStrong");
}*/

/*#include<stdio.h>
int main()
{
  int start=11,end,i;
  int flag=1;
  for(i=2;i<start;i++)
  {  if(start%i==0)
        flag=0;
        break;}
  if (flag==1)
      printf("prime");
  else
    printf("not prime");
}*/

#include<stdio.h>
int main()
{
  int low=5,high=50,i,flag;
while (low < high) {
      flag = 0;
      for (i = 2; i <= low / 2; ++i) {
         if (low % i == 0){
            flag = 1;
            break;
         }
      }
      if (flag == 0)
         printf("%d ", low);
      ++low;
   }
}
