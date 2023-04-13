/*you will given a number n and an n numbers of array v
you have to print the sum of even and also odd numbers from this array*/

#include<stdio.h>
int main()
{


    int i,n;
    int even=0,odd=0;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
    scanf("%d",&v[i]);
    }
      for(i=0;i<n;i++){
        if(v[i]%2==0){
            even=even+v[i];
        }
        else if(v[i]%2!=0){
            odd=odd+v[i];


        }
      }
      printf("%d%d",even,odd);
    

    return 0;
}