#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double w,h;
    scanf("%lf %lf",&w,&h);
    h=h/100;
    double BMI=w/(h*h);
    
    double factor=pow(10,2);
    BMI=round(BMI*factor) / factor;

    printf("%.2lf\n",BMI);





	return 0;
}