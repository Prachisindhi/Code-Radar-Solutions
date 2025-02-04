#include <stdio.h>

int main(){
    double a,b,c,av;
    scanf("%lf %lf %lf",&a,&b,&c);
    av=(a+b+c)/3;
    printf("Average: %.2lf",av);
    return 0;
}