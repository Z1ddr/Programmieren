#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {Pizza_Margherita = 0, Salami_Classico, Funghi, Hawaiian_Dream, typecount}Pizzatype;
typedef enum {Small = 0, Medium, Large, Extra_Large, XXL, Party_size, sizecount}Pizzasize;
struct Pizza{Pizzatype type; Pizzasize size;};

int main()
{
    char* type [typecount]= {"Pizza Margherita", "Salami Classico", "Funghi", "Hawaiian Dream"};
    char* size [sizecount]= {"Small", "Medium", "Large", "Extra Large", "XXL", "Party size"};
    char sw = 'y';
    int counter = 1;
    int chosentype = 0;
    int chosensize = 0;
    int order_count = 0;
    struct Pizza orders[10] = {0};
    printf("Hello! Welcome to UASKPS! - University of Applied Sciences Kempten Pizza service!\n You can order up to 10 pizzas.\n\nPress any key to start your order.");
    _getch();

    while(sw == 'y' && counter < 11)
    {
        printf("Please choose your pizza #%d\n\n", counter);
        printf("\n\nAvailable pizza types:");
        for(int i = 0; i < typecount; i++)
        {
            printf("\n\t%d : %s", i,type[i]);
        }
        printf("\n\nYour choice:");
        scanf("%d", &chosentype);
        printf("\n\nAvailable pizza sizes:");
        for(int i = 0; i < sizecount; i++)
        {
            printf("\n\tsize %d : %s", i,size[i]);
        }
        printf("\n\nYour desired size:");
        scanf("%d", &chosensize);

        if(order_count < 10)
        {
            orders[order_count].type = chosentype;
            orders[order_count].size = chosensize;
            order_count++;
        }

        printf("Do you want to order another pizza? (y/n)");
        scanf(" %c", &sw);
        counter++;
    }
}