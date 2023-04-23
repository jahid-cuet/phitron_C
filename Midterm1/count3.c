/*Problem Statement

You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears.

Input Format

Input will contain only S.
Constraints

1 <= |S| <= 1000; Here |S| means the length of S.
Output Format

Ouput in the format show in the sample output.*/
#include<stdio.h>
#include<string.h>
int main()
{


    int i;
    char S[100];
    scanf("%s",S);
    int count[26]={0};
    for(i=0;i<strlen(S);i++){
        int value=S[i]-'a';
        count[value]++;
        
        }
        for(i=0;i<26;i++){
           
                printf("%c - %d\n",i+'a',count[i]);
            }
        
    
    
    return 0;
}