#include <stdio.h>
#include <stdlib.h>

int a[100], len = 0; 
void create() {
    printf("Enter the length of array: ");
    scanf("%d", &len);

    printf("Enter array elements: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &a[i]);
}

void insert() {
    int pos, data;
    printf("Enter position you want to insert : ");
    scanf("%d", &pos);
    for (int i = len; i >= pos; i--)
        a[i] = a[i - 1];

    printf("Enter new data: ");
    scanf("%d",&data);
    a[pos - 1] = data; 
    len++; 

    printf("New array is: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void delete() {
    int pos;
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < len - 1; i++)
        a[i] = a[i + 1];
    len--; 

    printf("New array is: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void view() {
    printf("The array is: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int opt;

    while (1) {
        printf("1. Create\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. View\n");
        printf("5. Stop\n");
        printf("Choose an option: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1: create(); break;
            case 2: insert(); break;
            case 3: delete(); break;
            case 4: view(); break;
            case 5: exit(0); break;
            default: printf("Invalid option!\n"); break;
        }
    }
    return 0;
}

