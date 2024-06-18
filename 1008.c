#include<stdio.h>
int main (){
int number,hour;
float amount;
scanf("%d%d%f",&number,&hour,&amount);
printf("NUMBER = %d\n",number);
float salary;
salary = hour*amount;
printf("SALARY = U$ %0.2f\n",salary);

return 0;
}
