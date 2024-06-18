#include<stdio.h>
int main(){
char name[40];
double salary,sale,profit;
scanf("%s%lf%lf",name,&salary,&sale);
profit = salary+(sale*15)/100;
printf("TOTAL = R$ %0.2lf\n",profit);

return 0;
}
