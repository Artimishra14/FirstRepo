#include<stdio.h>
int main(){
      int n; // 1 1 2 3 5 8 13 21 34 55 89......
      printf("enter the number:");
      scanf("%d",&n);
      int a=1;
      int b=1;
      int sum=0;
      for(int i=1;i<=n-2;i++){

        sum=a+b;
        a=b;
        b=sum;
        }
      printf("%dth fibonacci is %d",n,sum);
      




    return 0;
}