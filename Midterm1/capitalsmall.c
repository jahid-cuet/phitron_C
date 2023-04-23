#include<stdio.h>
int main()
{


    int i,capital=0,small=0;
    char S[100];
    scanf("%s",S);
    for(i=0;S[i]!=0;i++){
        if(S[i]>='A' && S[i]<='Z'){
            capital++;
        }
        else if(S[i]>='a' && S[i]<='z'){
            small++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}
