#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    //to open a file and write in it
    fptr = fopen("student.txt", "a+");

    char choice = 'y';

    if (fptr == NULL){
        printf("The file is opened unsuccessfully.\n");
        return 1;
    }
    

    while (1){
        char name[100];
        int age, rollnumber;
        float cgpa;

        //to get the name of the student
        printf("Enter the name: ");
        scanf(" ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        //to get the age of the student
        printf("Enter the age: ");
        scanf("%d", &age);

        //to get the cgpa of the student
        printf("Enter the CGPA: ");
        scanf("%f", &cgpa);

        //to get the roll number of the student
        printf("Enter the Roll Number: ");
        scanf("%d", &rollnumber);

        //to send the data in file 'student.txt'
        fprintf(fptr, "Name: %s\nAge: %d\nCGPA: %f\nRoll Number: %d\n\n", name, age, cgpa, rollnumber++);


        //to get if the user wants to continue entering new data
        printf("Do you want to add more students(y/n): ");
        scanf(" %c", &choice);

        if(choice == 'n' || choice == 'N') break;
    }

    fclose(fptr);
    printf("The file is closed successfully.\n");
    return 0;
}
