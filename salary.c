#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int hour,hour_rate;
    double salary=0;
    scanf("%d %d",&hour,&hour_rate);

    int first_part,second_part,third_part;
    
    if(hour<=60){
        salary=hour*hour_rate;
    }
    else if(hour<=120){
        first_part=60;
        second_part=hour-60;
        salary=first_part*hour_rate + second_part*hour_rate*1.33;   
    }
    else{
        first_part=60;
        second_part=60;
        third_part=hour-120;
        salary=first_part*hour_rate+ second_part*hour_rate*1.33+third_part*hour_rate*1.66;
    }
    double factor=10;
    salary=round(salary*factor) / factor;
    printf("%.1lf\n",salary);


	return 0;
}