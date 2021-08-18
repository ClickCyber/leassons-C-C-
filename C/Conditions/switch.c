#include <stdio.h>
int main()
{
    char mode = 'c';
    int user_input = 50, x = 32;
    float y = 1.8;
    switch(mode){
        case 'c':
            printf("[+] %d Fahrenheit to Celsius = %.2f\n", user_input, (user_input - x) / y );
            break;
        case 'f':
            printf("[+] %d Celsius to Fahrenheit = %.2f\n", user_input, (user_input * y) + x);
            break;

        default:
            printf("[-] Not Found 404\n");
    }
    return 0;
}