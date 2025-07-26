#include <stdio.h> // Corrected header file

int main() {
    char Name[50];
    
    int Age = 0;

    printf("Enter your name: ");
    scanf("%s", Name); // No ampersand needed for character arrays with %s

    printf("Enter your age: ");
    scanf("%d", &Age); // Corrected: Added ampersand (&) for integer variable

    printf("- - - - - -\n");
    printf("Hello %s \n", Name); // Corrected: Pass the 'Name' variable
    printf("Age = %d\n", Age); // Corrected: Pass the 'Age' variable

    return 0; // Added return statement for main function
}