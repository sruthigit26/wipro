#include<stdio.h>
int main()
{
    int rollno;
    char name[100];
    char gender;
    char phno[15];
    char address[100];
    float m1,m2,m3,m4;
    printf("enter rollno:");
    scanf("%d",&rollno);
    printf("enter name:");
    scanf("%s",name);
    printf(" ");
    printf("enter gender:");
    scanf("%s",gender);
    printf(" ");
    printf("enter phno:");
    scanf("%s",&phno);
   // printf(" ");
    printf("enter address:");
    scanf("%s",address);
    printf("enter marks for m1,m2,m3,m4:");
    scanf("%f %f %f %f ",&m1, &m2,&m3,&m4);
    printf("\nrollno:%d\n",rollno);
    printf("name: %s\n",name);
    printf("gender: %s\n",gender);
    printf("phone no : %s\n",phno);
    printf("address: %s\n",address);
    printf("marks: %.2f,%.2f,%.2f,%.2f\n",m1,m2,m3,m4);
    float avg = (m1+m2+m3+m4)/4;
    printf("average:%.2f\n",avg);
    float percentage = (avg/100)*100;
    printf("percentage: %.2f%%\n",percentage);
    return 0;
}
