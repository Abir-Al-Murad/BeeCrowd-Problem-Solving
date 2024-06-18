#include <stdio.h>

int main() {
    int x=7,y=5,count =0;
    for(int i =0;i<10;i=i+2){
        for(int j =x;j>=y;j--){
            printf("I=%d J=%d\n",i+1,j);
            count = count+1;
        }
        if(count==3){
            x=x+2;
            y=y+2;
            count = count-3;
        }
    }
    return 0;
}
