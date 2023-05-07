/*output Like this
Main Start
Hello start
world start 
world end
Hello End
Main End


*/


#include<stdio.h>
void world(){
    printf("world start \n");
    printf("world end\n");
}

void hello(){
    printf("Hello start\n");
   world();
   printf("Hello End\n");
}


int main()
{
printf("Main Start\n");
hello();
printf("Main End");

    
    return 0;
}