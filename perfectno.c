#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;
    }
    if(n==sum){
        printf("%d is perect number",n);
    }
    else{
        printf("%d is not perfect number",n);
    }










    return 0;
}