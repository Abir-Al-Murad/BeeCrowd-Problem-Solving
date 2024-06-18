#include<stdio.h>
int main(){
int note[7]={100,50,20,10,5,2,1},money[7],a,i;
scanf("%d",&a);
printf("%d\n",a);
for(i=0;i<7;i++){
    money[i]=a/note[i];
    a=a%note[i];
}
for(i=0;i<7;i++){
    printf("%d nota(s) de R$ %d,00\n",money[i],note[i]);

}
return 0;
}
