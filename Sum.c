#include<stdio.h>
int main(){
    int sum = 0;
    int n;
    int a;
    int count=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=1;i <= n; i++){
        if( i % 2 == 0){
            sum=sum + i;
            count++;
        }
        

    printf("Enter the values:");
    scanf("%d",&i);
    }
    printf("%d",sum);
    printf("\n%d",count);
    return 0;
}