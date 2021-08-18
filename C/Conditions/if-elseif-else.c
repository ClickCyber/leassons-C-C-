#include <stdio.h>
int main()
{
    
    int Age = 24;
    char gender = 'f';
    char * full_name = "sharon";

    // long Conditions
    if(Age == 27 && gender == 'm'){
        prinf("[+] your name : %s\n", full_name);
    }
    else if (Age == 24 && gender == 'f'){
        prinf("[+] your name : %s\n", full_name);
    }
    else{
        printf("[-] i don't know are you\n");
    }
    // short Conditions one line 

    if(Age == 27 && gender == 'm')
        prinf("[+] your name : %s\n", full_name);
    else if (Age == 24 && gender == 'f')
        prinf("[+] your name : %s\n", full_name);
    else
        printf("[-] i don't know are you\n");

    return 0
}