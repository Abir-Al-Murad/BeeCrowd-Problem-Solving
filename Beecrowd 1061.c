#include<stdio.h>
int main(){
int d1,h1,m1,s1,d2,h2,m2,s2,hour;
scanf("%d%d%d%d%d%d%d%d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
int day = (d2-d1)-1;
int sum_second = (m1*60)+(m2*60)+(s1+s2);
int sum_hour = (sum_second/3600)+h1+h2;
if(sum_hour/24 !=0){
    day = day + sum_hour/24;
    hour = sum_hour%24;
}else{
    hour = sum_hour;
}
int sum_second2 = sum_second%3600;
int minute = sum_second2/60;
int second = sum_second2%60;
printf(" %d dia(s)\n",day);
printf("%d hora(s)\n",hour);
printf("%d minuto(s)\n",minute);
printf("%d segundo(s)\n",second);
return 0;
}
