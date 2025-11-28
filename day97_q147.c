// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, temp;
    FILE *fp;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&temp, sizeof(temp), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f", temp.name, temp.id, temp.salary);

    return 0;
}
