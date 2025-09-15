#include <stdio.h>
#include <stdlib.h>

struct Professor {
    char first_name[20];   // up to 20 chars
    char last_name[20];    // up to 20 chars
    double salary;         // salary
};

int main(void) {
    // Static array for 100 professors
    struct Professor ProffessorArr1[100];

    // Sizes
    printf("Size of Professor structure is %zu\n", sizeof(struct Professor));
    printf("Size of ProfessorArr1 array is %zu\n", sizeof(ProffessorArr1));

    // Dynamic array for 200 professors
    struct Professor *ProffessorArr2;

    ProffessorArr2 = (struct Professor *)malloc(200 * sizeof(struct Professor));

    if (ProffessorArr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    printf("Size of ProfessorArr2 array is %zu\n", 200 * sizeof(struct Professor));

    // Addresses
    printf("Address of ProfessorArr1[0] is %p\n",  (void*)&ProffessorArr1[0]);
    printf("Address of ProfessorArr1[99] is %p\n", (void*)&ProffessorArr1[99]);
    printf("Address of ProfessorArr2[0] is %p\n",  (void*)&ProffessorArr2[0]);
    printf("Address of ProfessorArr2[99] is %p\n", (void*)&ProffessorArr2[99]);

    free(ProffessorArr2);
    return 0;
}
