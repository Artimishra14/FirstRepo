#include<stdio.h>
int main(){
    int n;   // print  this series 1 -2 +3 -4 +5 -6 .......upto  n terms
    printf("enter the number:");
    scanf("%d",&n);
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d ",-(start));
        }
        else{
            printf("%d ",(start));
        }
        start++;
    }
    return 0;
}