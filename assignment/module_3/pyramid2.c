/*
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include<stdio.h>
int main(){
    int m=1;
for (int i = 1; i < 5; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf("%d ",m);
        m++;
    }
    printf("\n");
}
    return 0;
}