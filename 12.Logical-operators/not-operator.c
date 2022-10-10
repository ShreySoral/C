#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    /* code */
    // logical operators = ! (NOT) reverses the state of a condition
    
    bool sunny = false;
    bool subscribed = true;
    
    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }

    return 0;
}
