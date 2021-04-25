#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    float avg;
    printf("enter m1:");
    scanf("%d",&m1);
    printf("enter m2:");
    scanf("%d",&m2);
    printf("enter m3:");
    scanf("%d",&m3);
    total=m1+m2+m3;
    avg=total/3;
    if (avg>=75)
        {printf("Distinction %.2f",avg);}
    if (avg<75&&avg>=60)
        {printf("First class %.2f",avg);}
    if (avg<60&&avg>=50)
        {printf("second class %.2f",avg);}
    if (avg<50&&avg>=35)
        {printf("Third class %.2f",avg);}
    else {printf("Fail below 35 avg %.2f",avg);}
}
