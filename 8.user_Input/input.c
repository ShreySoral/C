#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char name[25]; //bytes
    int age;

    printf("What's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    return 0;
}
