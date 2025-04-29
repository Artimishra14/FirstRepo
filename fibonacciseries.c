#include<stdio.h>
int main(){
      int n; // 0 1 1 2 3 5 8 13 21 34 55 89......
      printf("enter the number:");
      scanf("%d",&n);
      if(n==1){
        printf("0");
      }
      else if(n==2){
        printf("0 1");
      }
      else{int a=0;
      int b=1;
      printf("%d %d ",a,b);
      int sum=1;
      for(int i=2;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
      
        }
        
        }

      




    return 0;
}