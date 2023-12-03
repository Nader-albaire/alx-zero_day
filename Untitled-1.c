#include <stdio.h>
#include <string.h>

int main () {
 char command ][] = " Ls -l /home/user";

 // intialize variables for tokenization
 char *token;
 char *delim = " ";
 token = strtok(command, delim);
 
 while (token != NULL) {
    printf("Token: %s\n", token);
    token = strtok(NULL, delim);

 }

return 0;

}