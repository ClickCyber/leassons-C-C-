#include <stdio.h>

int main()
{
    for(int j = 0; j <= 50; j++){
        if(j == 20)
            continue;
        else if (j == 30)
            break;

        printf("ID: %d\n", j);
    }
}