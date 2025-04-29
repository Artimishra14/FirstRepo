#include<stdio.h>
int main(){
    int n;
    printf("enter the number of row:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int b=i-1;
        for(int a=1;a<=n-i;a++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",b);
            b--;
        }
        printf("\n");

    }
















    return 0;

}