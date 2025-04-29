#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=n;
    int r=0;// reverse number 
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
        

       
    }
    printf("the reverse number is %d\n",r);
    printf("the sum of number and its reverse are %d",sum+r);




    return 0;
}