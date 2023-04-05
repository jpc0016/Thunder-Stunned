#include <stdio.h>

int main(int argc, char ** argv) {

    // declare input that holds 64 bytes
    char input[64];

    // get user input 
    printf("Fuzz me pls (up to \"64 bytes\")\n");

    // declare destination string 
    // char storage[30];

    if (argc < 2) {
        printf("Please enter a program argument\n\n");
        return 1;
    }
    else {
        // Vuln here
        strcpy(input, argv[1]);

        // print results
        printf("Stored result is %s\n", input);
    }

    return 0;
}