//you will be given a number n, if the number is positive or zero then print the n to 1
//otherwise print 1 to n.


#include<stdio.h>
int main()
{

int i,n;
scanf("%d",&n);
if(n>0){
    for(i=1;i<=n; i++){
        printf("%d ",i);
    }

}
else{
    for(i=n;i<=1;i++){
        printf("%d ",i);
    }

}
    
    return 0;
}