/*-----------------------------
* Version: C99                *
* Project: Library management *
* Author:  philip ondieki        *
* Date:    June,2021          *
* License: MIT                *
******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Adding user:
// name
//contact
// is stuff
struct user{
     char name [100];
     int id;
     char tel[13];

     // function prototype
     void execute
void execute action(int action)
int main()
{
    int action;
    printf("\tCounty Library Management System!\n");
    printf("Welcome philip\n");
    // Navigation menu
    do {
        printf("1. Add user\n");
        printf("2. Add Book\n");
        printf("3. Exit\n");
        printf("Select action(1-3): ");
        scanf("%d",&action);
        // validate input
        if (action < 1 || action > 3)
            printf("Invalid action. Try again\n");
    } while(action < 1 || action > 3);
    execute action

    return 0;
}
int action ;
while(1){
    action =menu
}

void execute action (int action)}
      switch (action)
       case1:
           print f("adding a user\n");
           break;
       case 2:
           printf ("adding a book\n");
             break;
       case3
        print f("exiting\n");
        break;
       default:
        printf("unknown action\n");
}
        void add user () [
               sruct user u;]
               file *fp;
               if((fp =fopen ("users","ab"))==NULL)(
                   PRINT F ("cannot open file.\N"))
             print f{ "name: "];
            getchar ();
            gets(u,name);
            printf ("ID number: "}:
            scanf  ("%d",&u"id);
            printf ("phone number:");
            scanf ("%s"'&u,tel)
            print f('user type (1 for staff '0 for ordinary user :"};
            fwrite(&u'sizeof(struct user),]'fp);
            fclose(fb);
            print("user successfully added/n")
            ))

