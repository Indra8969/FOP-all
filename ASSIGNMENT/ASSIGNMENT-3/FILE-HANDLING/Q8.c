#include <stdio.h>
#include <stdlib.h>  

struct Customer {
    char name[20], telephone[10];
};

int main() {
    FILE *file = fopen("customer.bin", "wb");
    FILE *file2;
    int n, i, c;
    struct Customer *custs;
    struct Customer s;
    
    if (!file) {
        printf("Could not open file for writing!\n");
        return 1;
    }

    printf("Enter the number of customers: ");
    scanf("%d", &n);
    getchar(); 
    
    custs = (struct Customer*)malloc(n * sizeof(struct Customer));
    if (custs == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter the details of customer %d\n", i + 1);
        printf("Enter the name: ");
        fgets(custs[i].name, 20, stdin);
        printf("Enter the telephone number: ");
        scanf("%s", custs[i].telephone); 
        getchar(); 
    }


    for (i = 0; i < n; i++) {
        fwrite(&custs[i], sizeof(struct Customer), 1, file);
    }

    fclose(file);
    
    file2 = fopen("customer.bin", "rb");
    if (!file2) {
        printf("Could not open file for reading!\n");
        free(custs); 
        return 1;
    }

	printf("\nCustomer details from the binary file:\n");
    for (i = 0; i < n; i++) {
        c = fread(&s, sizeof(struct Customer), 1, file2);
        if (c == 1) {
            printf("\nName: %s", s.name);
            printf("Telephone: %s\n", s.telephone);
        } else {
            printf("Error reading from file\n");
        }
    }

    free(custs);
    fclose(file2);

    return 0;
}

