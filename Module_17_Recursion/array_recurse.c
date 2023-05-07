//print an array by using Recursion Function..



#include<stdio.h>
void fun(int i,int arr[],int n){

    //Base Case

    if(i==n) return;
printf("%d",arr[i]);
fun(i+1,arr,n);


}
int main()
{


    int a=0,n,i;
    printf("enter n=");
    scanf("%d",&n);
    int arr[n];
    printf("enter array value=");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    fun(a,arr,n);
    return 0;
}