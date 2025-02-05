#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
    printf("Positive %d",a);}
    else if(a==0){
    printf("Zero %d",a);}
    else{
    printf("Negative %d",a);}
    
    return 0;
}