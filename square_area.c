#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        double edge;
        scanf("%lf",&edge);
        // printf("%lf\n",edge);
        double area=edge*edge;

        // round to 1 decimal places
        int k=1;
        double factor=pow(10,k);
        area=round(area*factor) /factor;
        printf("%.1lf\n",area);

    }




    return 0;
}