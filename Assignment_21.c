
// File Handling in C

// File Handling Operations - create a file, write a file, read a file, delete a file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // File pointer declaration
    FILE *file_pointer;

    // Creating a file
    file_pointer = fopen("example.txt", "w");

    // Checking if file creation was successful
    if (file_pointer == NULL) {
        printf("Error in file creation!\n");
        return 1; // Exiting program with error code
    }

    // Writing to the file
    fprintf(file_pointer, "Hello, this is a test.\n");

    // Closing the file after writing
    fclose(file_pointer);

    // Reopening the file for reading
    file_pointer = fopen("example.txt", "r");

    // Checking if file opening for reading was successful
    if (file_pointer == NULL) {
        printf("Error in file opening!\n");
        return 1; // Exiting program with error code
    }

    // Reading from the file
    char buffer[100]; // Buffer to store the read content
    fgets(buffer, 100, file_pointer);

    // Displaying the read content
    printf("File content: %s", buffer);

    // Closing the file after reading
    fclose(file_pointer);

    // Deleting the file
    if (remove("example.txt") != 0) {
        printf("Error in file deletion!\n");
        return 1; // Exiting program with error code
    }

    printf("File deleted successfully!\n");

    return 0; // Exiting program normally
}
