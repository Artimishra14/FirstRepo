#include<stdio.h>
int main(){
    // display this gp 1 2 4 8 16 32 .....n terms
    // int n;
    // printf("enter a number");
    // scanf("%d",&n);
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",a);
    //     a=a*2;

    // }

    // second question
    // display this GP 3 12 48.....upto n term
    int n;
    printf("enter a numbr");
    scanf("%d",&n);
    int a =3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }




    return 0;
}