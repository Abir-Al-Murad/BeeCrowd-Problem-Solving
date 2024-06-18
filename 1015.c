#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,dis;
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
dis = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
dis = sqrt(dis);
printf("%0.4f\n",dis);
return 0;
}
