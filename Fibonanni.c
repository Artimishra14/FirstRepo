#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==1){
        printf("0");
    }
    else if(n==2){
        printf("0 1");
    }
    else{
        int a=0,b=1,sum;
        printf("%d %d ",a,b);
        sum=a+b;
        for(int i=2;i<n;i++){
            printf("%d ",sum);
            a=b;
            b=sum;
            sum=a+b;
        }
    }













    return 0;
}