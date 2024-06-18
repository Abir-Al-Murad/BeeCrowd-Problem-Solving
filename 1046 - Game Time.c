#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(y>x){
        int t = y-x;
        printf("O JOGO DUROU %d HORA(S)",t);
    }else if(x>y){
        int t = (24-x)+y;
        printf("O JOGO DUROU %d HORA(S)",t);
    }else{
        printf("o JOGO DUROU 24 HORA(S)");
    }
return 0;
}
