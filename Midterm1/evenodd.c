#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int i,even=0,odd=0;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
 if(a[i]%2==0){
    even++;
}
else if(a[i]%2!=0){
    odd++;
}
}

    printf("%d ",even);
    printf("%d",odd);
    return 0;
}