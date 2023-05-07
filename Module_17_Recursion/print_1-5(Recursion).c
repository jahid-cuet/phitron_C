//print i to n by using recuersion.
//if i=1 and n=5 then output will be 1 to 5.


#include<stdio.h>

void fun(int i,int n){

    if(i>n) return;
    printf("%d",i);
    fun(i+1,n);
}
int main()
{
    int i,n;
    printf("enter i and n");
    scanf("%d%d",&i,&n);
    fun(i,n);
    return 0;
}
