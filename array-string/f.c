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
    
    int max=a[0];
    int maxindex;
    for(i=1; i<n;i++){
        if(max<a[i]){
            max=a[i];
            maxindex=i;
        }
    }
     int min=a[0];
     int minindex;
    for(i=1; i<n;i++){
        if(min>a[i]){
            min=a[i];
            
        }

    }
    minindex=i;
    printf("%d",minindex);
    /*printf("%d",maxindex);*/
    
    
     /*for(i=0;i<n;i++){
    printf("%d",a[i]);
    }*/ 

    return 0;
}