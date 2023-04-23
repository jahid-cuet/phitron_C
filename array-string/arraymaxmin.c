
/*Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct. */

#include<stdio.h>
int main()
{
    int i, n;
    printf("enter n=");
    scanf("%d",&n);
    int a[n];
    printf("enter array=");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    /*Before Swapping*/
    int max=a[0];
    for(i=1; i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
   
    printf(" The maximum value is=%d\n",max);
     int min=a[0];
    for(i=1; i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("The minimum value is=%d\n",min);
      /*After Swapping*/
      printf("After Swapping");
      printf("\n");
      int temp=max;
      max=min;
      min=temp;
printf(" The maximum value is=%d\n",max);
printf("The minimum value is=%d",min);
    
    return 0;
}