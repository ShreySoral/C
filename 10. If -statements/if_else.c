#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You are now signed up.\n");
        /* code */
    }else if (age<0){
        printf("You are not born yet.\n");
    }
    else
    {
        printf("You are under 18. You are to young to signup\n");
    }
    
    
    return 0;
}
