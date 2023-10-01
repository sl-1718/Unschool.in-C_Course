/*C Program : Food Ordering System
Author : Sriya Lanka */

#include <stdio.h>
#include<stdlib.h>

void Cafe();

int main() {
    Cafe();
    return 0;
}

void Cafe() {
    int choice, i, j, k, x,sum=0,z=1029,callcount=0;
    char name[20], a[5] = "MENU", y;
    callcount++;
    printf("\t\t\t  Welcome to Cafe Bistro!\n");
    puts("\n1. Order \n2. Serve \n3. Display \n4. Exit the program");

    printf("\nEnter your choice (1-4) : ");
    scanf("%d", &choice);


    switch (choice) {
        case 1: {
            printf("\nPlease enter your name : ");
            scanf("%s", name);
            printf("\n");
            for (i = 0; i <= 80; i++) {
                printf("=");
            }
            printf("\n%39s\n", a);
            for (i = 0; i <= 80; i++) {
                printf("=");
            }
            printf("\n Item Code\t\t\tName\t\t\tSize\t\tPrice\n");
            for (i = 0; i <= 80; i++) {
                printf("-");
            }
            printf("\n   [1]  \t|\t    Oreo Milkshake\t|\t250gm\t|\t 140\n");
            printf("\n   [2]  \t|\t      Croissant  \t|\t100gm\t|\t  85\n");
            printf("\n   [3]  \t|\t       Burger    \t|\t300gm\t|\t 250\n");
            printf("\n   [4]  \t|\t    Mozarella Pizza\t|\t160gm\t|\t 300\n");
            printf("\n   [5]  \t|\t     Crispy Chips  \t|\t80gm\t|\t 100\n");
            printf("\n   [6]  \t|\t      Tiramisu   \t|\t200gm\t|\t 170\n");
            printf("\n   [7]  \t|\t     Veg Hotdog  \t|\t180gm\t|\t 150\n");
            printf("\n   [8]  \t|\t       Mojito   \t|\t250gm\t|\t  90\n");

            for (i = 0; i <= 80; i++) {
                printf("=");
            }

            printf("\n\nHow many items do you want to order? ");
            scanf("%d", &j);

            for (i = 0; i < j; i++) {
                printf("\nEnter item code : ");
                scanf("%d", &k);
                switch (k) {
                    case 1:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 250gm of Oreo Milkshake\n", x);
                        sum+=x*140;
                        break;
                    case 2:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 100gm of Croissant\n", x);
                        sum+=x*85;
                        break;
                    case 3:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 300gm of Burger\n", x);
                        sum+=x*250;
                        break;
                    case 4:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 160gm of Mozarella Pizza\n", x);
                        sum+=x*300;
                        break;
                    case 5:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 80gm of Crispy Chips\n", x);
                        sum+=x*100;
                        break;
                    case 6:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 200gm of Tiramisu\n", x);
                        sum+=x*170;
                        break;
                    case 7:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 180gm of Veg Hotdog\n", x);
                        sum+=x*150;
                        break;
                    case 8:
                        printf("Please enter the quantity : ");
                        scanf("%d", &x);
                        printf("\nYou ordered %d 250gm of Mojito\n", x);
                        sum+=x*90;
                        break;
                    default:
                        printf("Invalid item code entered.\n");
                }}
                printf("\n");
                for (i = 0; i <= 80; i++) {
                printf("~");
            }

                printf("\nDo you want anything else (y/n) : ");
                scanf(" %c", &y);  // Space before %c to consume newline character
                switch (y) {
                    case 'y':
                        Cafe();
                        break;
                    case 'n':
                    for (i = 0; i <= 80; i++) {
                    printf("~");
                    }
                    printf("\n\nNumber of items ordered : %d",j);
                    printf("\n\nYour total bill is : %d",sum);
                    printf("\n\nThank you %s for ordering, your order will be served shortly!!", name);
                    printf("\nPlease wait while we prepare your order!\n\n");
                    Cafe();
                    return;  // Exit the function
                    default:
                        printf("Invalid choice entered.\n");
                        return;  // Exit the function
                }
            
            break;
        }
        case 2:{
            printf("\nOrder no. %d for %s is ready!!",z,name);
            printf("\nEnjoy your meal !\n\n");
            Cafe();
        }

        case 3:{
            printf("\nTotal number of orders taken : %d",callcount);
            printf("\nTotal number of order served is : 1 ");
            printf("\nNumber of currently waiting to be served : 0");
            printf("\nCurrently preparing order no. : %d\n\n",z+1);
            Cafe();
        }

        case 4:{
            exit(0);
        }
        default:
            printf("Invalid choice entered.\n");
    }
}
