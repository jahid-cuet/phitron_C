//changes any index value fron an array and then reverse it.

#include<stdio.h>
int main()
{
int i,n,x,v;
 
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&v);
    a[x]=v;
    for(i=n-1;i>=0;i--){
    printf("%d ",a[i]);
    }

    
    return 0;
}