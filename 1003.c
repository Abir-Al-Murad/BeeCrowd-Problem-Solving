#include<stdio.h>
int main(){
float A;
scanf("%f",&A);
float C = A*3.5;
float B;
scanf("%f",&B);
float D = B*7.5;
double MEDIA;
MEDIA = (C+D)/11;
printf("MEDIA = %0.5lf\n",MEDIA);
return 0;
}
