 #include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int r=0;
    int sum=n;

    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
        }

    printf("the reverse of given number are: %d",r);
    printf("\nthe sum of number and its reverse number %d",sum+r);



    return 0;
}