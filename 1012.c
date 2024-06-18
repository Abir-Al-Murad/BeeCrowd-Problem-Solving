#include<stdio.h>
int main(){
int a,b,s;
scanf("%d%d%d",&a,&b,&s);
int MaiorAB = (a+b+abs(a-b))/2;
printf("%d eh o maior\n",MaiorAB);
return 0;
}
