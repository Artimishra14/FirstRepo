#include<stdio.h>
int main(){
    int n; //itni baar loop chlega
    printf("enter number:");
    scanf("%d",&n);
    // 4 7 10 13 16 19 .......upto n number of terms
    // we are going to use extra variables
    int a=4;
    for(int i=1;i<=n;i=i+1){
        printf("%d ",a);
        a=a+3;
    }
    










    return 0;
}