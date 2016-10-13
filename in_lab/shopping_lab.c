#include <stdio.h>



struct Item {
    int sku_;
    float price_;
    int quantity_;
};

int main() {

    const int MAX_ITEMS = 10;
    struct Item item[MAX_ITEMS];
    int size = 0;
    int input;

    printf("Welcome to the Shop\n");
    printf("======================\n");

    do {
        printf("Please select from the following options:\n");
        printf("1) Display the inventory.\n");
        printf("2) Add to shop.\n");
        printf("0) Exit.\n");
        scanf("%i", &input);
        if (input < 0 || input > 2) {
            printf("Invalid input, try again: Please select from the following options:\n");
        }
    } while (input < 0 || input > 2);

    switch (input) {
        case 1:
            printf("Display\n");
            break;
        case 2:
            printf("Add\n");
            break;
        case 0:
            printf("Exit\n");
            break;
    }

    return 0;
}

/*
Welcome to the Shop
===================
Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:8
Invalid input, try again: Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:2
Please input a SKU number:2341
Quantity:3
Price:12.78
The item is successfully added to the inventory.
Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:2
Please input a SKU number:4567
Quantity:9
Price:98.2
The item is successfully added to the inventory.
Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:1


Inventory
=========================================
Sku         Price       Quanity
2341        12.78       3
4567        98.20       9
=========================================
Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:2
Please input a SKU number:2341
Quantity:5
The item exists in the repository, quanity is updated.
Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:1


Inventory
=========================================
Sku         Price       Quanity
2341        12.78       8
4567        98.20       9
=========================================
Please select from the following options:
1) Display the inventory.
2) Add to shop.
0) Exit.
Select:0
Good bye!
*/