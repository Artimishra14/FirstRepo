#include<stdio.h>
int main(){
    // print the sum of this series 1 -2 +3 -4 +5 -6 .......upto  n terms
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0) sum=sum+i;
    //     else sum=sum-i;
         
    // }
    // printf("the sum is %d",sum);

    // second method (formula)

    for(int i=1;i<=1;i++){
        if(n%2==0){
            sum= -n/2;
        }
        else{
            sum= -n/2 +n;
        }
    }
    printf("the sum is: %d",sum);

















    return 0;
}