#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    bool anger_event = false;
    
    srand(time(NULL));
    anger_event = rand() % 2 == 0;

    if (anger_event) {
        printf("Show anger.\n");
    } else {
        printf("All is calm.\n");
    }

    return 0;
}
