
/*
Name: Charlie Molle
Student ID: 201975475
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    if(argc < 2) {
        return 0;
    }

    // define appropriate data to hold your answer
    char buffer[50];

    // process the command-line data using appropriate string functions

    strcat(buffer, argv[1]);
    for( int i=2; i<argc; ++i)
    {
        strcat(buffer, "-");
        strcat(buffer, argv[i]);
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}