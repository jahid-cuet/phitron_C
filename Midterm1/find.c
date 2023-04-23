/*Problem Statement

You will given an integer array A and the size N. You will also be given an integer value X. You need to tell how many times X was appeared in the array.

Input Format

First line will contain N.
Second line will contain the integer array A.
Third line will contain X.
Constraints

1 <= N <= 100
0 <= A[i] <= 1000; Here 0 <= i < N
0 <= X <= 1000
Output Format

Output the number of times X was appeared in the array.*/
#include<stdio.h>
int main()
{

int i,count=0,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int x;
scanf("%d",&x);
for(i=0;i<n;i++){
    if(a[i]==x){
        count++;
    }
}

printf("%d",count);

    
    return 0;
}