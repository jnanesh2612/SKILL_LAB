#include<stdio.h>
void triangle(int n);
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    triangle(n);
}
void triangle(int n){
    int i,j;
    printf("Triangle\n");
    for(i=1;i<n+1;i++){
        for(j=1;j<=i;j++){
          printf("*");
        }
        printf("\n");
    }
}
