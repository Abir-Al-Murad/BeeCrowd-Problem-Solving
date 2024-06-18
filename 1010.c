#include<stdio.h>
int main(){
double pi;
pi = 3.14159;
double R;
scanf("%lf",&R);
double formula;
formula = (4/3.0)*pi*(R*R*R);
printf("VOLUME = %0.3lf",formula);
return 0;
}
