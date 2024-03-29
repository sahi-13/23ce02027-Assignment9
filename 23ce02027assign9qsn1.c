#include<stdio.h>

struct company{
    char name[50];
    char add[100];
    char phnno[15];
    int noOfEmployee;
};
int main(){
    struct company c1;
    printf("Enter the details of company:\n name:");
    fgets(c1.name,sizeof(c1.name),stdin);
    printf("address:");
    fgets(c1.add,sizeof(c1.add),stdin);
    printf("phone no:");
    fgets(c1.phnno,sizeof(c1.phnno),stdin);
    printf("Enter no of employee:");
    scanf("%d",&c1.noOfEmployee);
    printf("\nName of the company: %s\nAddress: %s\nPhone no: %s\nNo of employee: %d",c1.name,c1.add,c1.phnno,c1.noOfEmployee);
    return 0;
}