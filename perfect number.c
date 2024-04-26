#include <stdio.h>

int main() {
    int a,rem,sum=0;
    scanf("%d",&a);
    for(int i =1;i<a;i++){
        rem=a%i;
        if(rem==0){
            sum= sum+ i;
        }
    }
    if(sum==a){
    printf("yes");}
    else{
 printf("no");}
}