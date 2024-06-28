#include <stdio.h>
#include <string.h>
int main() 
{
    char my_uname[] = "sravya";
    char my_pswd[] = "sravs@1409";
    char uname[50];
    char pswd[50];
    printf("----------------------------------------/*WELCOME*/--------------------------\n");
    printf("Enter username: \n");
    scanf("%s", &uname);
    if (strcmp(my_uname,uname) == 0)
    {
        for (int attempt = 0; attempt < 3; attempt++) 
        {
            printf("welcome %s ",my_uname);
            printf("Enter password: \n");
            scanf("%s", &pswd);
            if (strcmp(my_pswd, pswd) == 0) 
            {
                printf("Access granted.\n");
                printf("-----------------------------------------------/*Sucessfully login*/--------------------------------\n");
                return 0;
            } 
            else 
            {
            
                printf("---------------------!OOPS!__Incorrect password__------------------------------------------.\n");
                if (attempt < 2) 
                {
                    printf("You have %d attempt(s) left.\n", 2 - attempt);
                }
            }
        }
        printf("Access denied. Too many incorrect attempts.\n");
    }
    else 
    {
        printf("Incorrect username. Access denied.\n");
    }

    return 0;
}