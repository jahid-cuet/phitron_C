/*Problem Statement

You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at even indexes in reverse way.

For example:

If the input is

5
10 20 30 40 50
You need to print 50 30 10 as their indexes are 4 2 0 respectively.*/
#include<stdio.h>
int main()
{


    int i,n;
 
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--){
    if(i%2==0){
        printf("%d ",a[i]);
        }
    }
    
    return 0;
}