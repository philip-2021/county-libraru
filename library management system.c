







/* Users views users add delate login change password
Catalogue
Issuance
Serial
Acquisation
*/
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
int menu();// prototype
void execute_action(int action);
void close();
int main()
{
      int action;
      action= menu ();
      execute_action(action); //function call

return 0;
}
//function definition
int menu() //header

{
    int action;
    do {
        printf("County Library\n");
        printf("Welcome Mr. philip\n");
        printf("What would you like to do?\n");
        printf("1.View user.\n");
        printf("2.Add users.\n");
        printf("3.Edit user.\n");
        printf("4.Delete user.\n");
        printf("5.Change password.\n");
        printf("6.Logout.\n");
        printf("7.Exit.\n");
        printf("Thanks for using the system\n");
        printf("Selected action(1-7):");
        scanf("%d",&action);
        if (action <1 ||action >7){
              system ("cls");
                printf("invalid Action.Try again");
        }
        }while (action < 1 || action > 7);


return action;
}
void execute_action(int action){
    switch(action){
    case 1:
        printf("List of users\n");
        break;
    case 2:
        printf("Add new user\n");
        break;
    case 3:
        printf("Editing user\n");
        break;
    case 4:
        printf("Deleting user\n");
        break;
    case 5:
        printf("Changing password\n");
        break;
    case 6:
        printf("You have been logged out\n");
        break;
    case 7:
        close();
        break;
    default:
        printf("Invalid action\n");
    }
}

void close(){
    printf("Thanks for using the system\n");
    printf("Created by philip ondieki\n");
    printf("Bye\n");
    sleep(2000);
    exit(0);
}
