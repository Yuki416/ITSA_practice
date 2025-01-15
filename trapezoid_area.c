#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int t,b,h;
    scanf("%d %d %d",&t,&b,&h);

    double area=(t+b)*h / 2.0; // divied by 2.0 才會是小數
    double factor=10;
    area= round(area*factor) / factor;
    printf("Trapezoid area:%.1lf\n",area);




	return 0;
}