#include <stdio.h>
#include <stdlib.h>

struct item
{
    char * itemName;
    int quantity;
    float price;
    float amount;

};


void readItem(struct item * itemInput);

void printItem(struct item * itemInput);

void challenge_chapter107()
{

    struct item item1;
    struct item * pItem = &item1;

    pItem->itemName = (char *)malloc(sizeof(char)*30);


    readItem(pItem);
    printItem(pItem);

    free(pItem);
}


void readItem(struct item * itemInput)
{

    printf("Product name: ");
    gets(itemInput->itemName);
    gets(NULL);
    printf("Price: ");
    scanf("%f",&(itemInput->price));
    printf("Quantity: ");
    scanf("%d",&itemInput->quantity);


    itemInput->amount = itemInput->quantity*itemInput->price;

}

void printItem(struct item * itemInput)
{

    printf("Product Name: %s\n",itemInput->itemName);
    printf("Price: %.2f\n",itemInput->price);
    printf("Quantity: %d\n",itemInput->quantity);
    printf("Amount: %.2f\n",itemInput->amount);

}
