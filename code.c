#include <stdio.h>

int main() {
    // Redirect stdout to a file called output.txt
    FILE *file = freopen("vaidehi.txt", "w", stdout);

    if (file == NULL) {
        // Failed to open the file
        fprintf(stderr, "Error: Unable to open the file.\n");
        return 1;
    }

    printf("This is an example program to demonstrate output redirection using file handling.\n");
    printf("The program's output is redirected to a file called output.txt.\n");

    // Close the file stream
    fclose(file);

    printf ("This file is modified");

    return 0;
}