#include <stdio.h>

struct add {
    char street[100];
    char city[50];
    char zipCode[15];
};

struct person {
    char name[50];
    struct add a;
};

int main() {
    
    struct person p;
    
    printf("Enter name: ");
    fgets(p.name,sizeof(p.name),stdin);
    printf("Enter street: ");
    fgets(p.a.street,sizeof(p.a.street),stdin);

    printf("Enter city: ");
    scanf("%s", p.a.city);
    printf("Enter zip code: ");
    scanf("%s", p.a.zipCode);

    printf("\nDetails of the Person:\n");
    printf("Name: %s", p.name);
    printf("Address:\n");
    printf("  Street: %s", p.a.street);
    printf("  City: %s\n", p.a.city);
    printf("  Zip Code: %s\n", p.a.zipCode);

    return 0;
}
