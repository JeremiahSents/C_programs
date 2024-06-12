#include <stdio.h>

struct invent {
    char name[20];
    int number;
    float price;
};

int main() {
    struct invent product[3], *p;
    printf("Input product: name, number, and price\n");
    for (p = product; p < product + 3; p++) {
        scanf("%s %d %f", p->name, &p->number, &p->price);
    }

    // For testing, print the entered products
    for (p = product; p < product + 3; p++) {
        printf("Name: %s, Number: %d, Price: %.2f\n", p->name, p->number, p->price);
    }

    return 0;
}
