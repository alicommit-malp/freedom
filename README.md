# freedom
A technical documentation  to freedom in life for software developers :)

## This is a default human behavior in C

```c
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
```

## This is the upgraded human behavior after doing meditation 

While practicing meditation, let thoughts enter but decide if you agree to process them, this will create the gap (freedom) over time.

```c
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
```

## Diff 

<img width="574" height="638" alt="image" src="https://github.com/user-attachments/assets/db6f3de2-88a7-4e5f-9cee-66c17af2e55d" />

## Worth sharing ? 
