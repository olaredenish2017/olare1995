/* 
Sample code to compare password
Author: Olare Denish Odhiambo
Compile with debug symbols
$gcc -m32 -ggdb -mpreferred-stack-boundary=2 -o comparePassword comparePassword.c

Compile without debug symbols
$gcc -m32 -mpreferred-stack-boundary=2 -o comparePassword comparePassword.c
*/

#include <stdio.h>
#include <string.h>

// Function to compare password
void compare_string()
    {
        // allocate space for the password
        char USER_PASS[254];
        char PASSWORD[] = "SecurityNik";

        printf("Enter the password: \n");
        
        // read the user's password
        fgets(USER_PASS, sizeof(USER_PASS), stdin);

        // Compare what the user entered with what we expect
        if (strncmp(USER_PASS, PASSWORD, sizeof(PASSWORD)-1) == 0)
                printf("Welcome to my world! :-) \n");
        else
                printf("Stay Out! \n");      
            
    }

int main()
    {
        // Call the compare_string function
        compare_string();
        return 0;
    }
