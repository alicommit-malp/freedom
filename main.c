#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    bool anger_event = false;
    
    srand(time(NULL));
    anger_event = rand() % 2 == 0;

    bool conscious_choice = !anger_event; // ← this is freedom

    if (anger_event && conscious_choice) {
        printf("Show anger.\n");
    } else {
        printf("All is calm.\n");
    }

    return 0;
}
