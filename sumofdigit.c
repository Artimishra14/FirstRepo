#include<stdio.h>
int main(){
    // int x=1/10;
    // printf("%d",x);
    // int y=1%10;
    // printf("\n%d",y);

    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0,lastdigit=0;
    while(n!=0){
       lastdigit= n%10;
       sum=sum+lastdigit;
       n=n/10;

       
    }
    printf("the sum of digits are %d",sum);
















    return 0;
}