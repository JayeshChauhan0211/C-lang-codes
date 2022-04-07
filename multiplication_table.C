#include<stdio.h>
int main()
{int a;
    
    printf("enter the table number",a);
    scanf("%d",&a);
    for(int b=1;b<=10;b++){
        printf("%d x %d = %d\n",a,b,a*b);
    }
}