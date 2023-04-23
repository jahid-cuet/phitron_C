#include<stdio.h>
#include<string.h>
int main()
{


   int i,vowel=0; 
    char a[1000];
    scanf("%s",a);
    for (i=0;a[i]!='\0';i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            vowel++;
        }

    }
    printf("%d",vowel);

    return 0;
}