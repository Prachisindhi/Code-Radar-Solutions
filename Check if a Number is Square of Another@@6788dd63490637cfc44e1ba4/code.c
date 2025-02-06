#include <stdio.h>
int main(){
    int a,b,num;
    scanf("%d %d",&a,&b);
    num=a*a;
    if(num%b==0)
    printf("Yes");
    else
    printf("No");
    return 0;

}

