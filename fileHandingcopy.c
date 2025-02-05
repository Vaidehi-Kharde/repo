

int main() {
    int maxDays = 5; // days

    // Loop through the files
    for (int fileIndex = 0; fileIndex < maxDays; fileIndex++) 
    {
        char filename[20];
        snprintf(filename, sizeof(filename), "day%d.csv", fileIndex + 1);
        FILE *file = fopen(filename, "r");

        if (file == NULL) {
            printf("Failed to open file: %s\n", filename);
            return 1;
        }

        int recordIndex = 0;
        char line[256]; // assuming a line won't exceed 256 characters
        // Read data from the file line by line
        while (fgets(line, sizeof(line), file) != NULL && recordIndex < 10) {
            
            int read = fscanf(file, "%d,%f,%f,%f,%f,%d,%f\n", &day[fileIndex].stock[recordIndex].id,  &day[fileIndex].stock[recordIndex].open,
                                    &day[fileIndex].stock[recordIndex].close, &day[fileIndex].stock[recordIndex].high, 
                                    &day[fileIndex].stock[recordIndex].low, &day[fileIndex].stock[recordIndex].volume, &day[fileIndex].stock[recordIndex].performance);
                                
                                

            if (read >=-1) 
            {
                recordIndex++; // Data read successfully
            } 
            else 
            {
                printf("%d\n",read);
                printf("%d\n",recordIndex);
                printf("Error reading data from file %s\n", filename);
                fclose(file);
                return 1;
            }
        }

        fclose(file);
    }

    // Print the first stock's close price from the first day
    printf("First day's first stock close price: %d\n", day[0].stock[0].id);
    printf("First day's first stock close price: %f\n", day[0].stock[0].open);
    printf("First day's first stock close price: %f\n", day[0].stock[0].close);
    printf("First day's first stock close price: %f\n", day[0].stock[0].high);
    printf("First day's first stock close price: %f\n", day[0].stock[0].low);
    printf("First day's first stock close price: %d\n", day[0].stock[0].volume);
    printf("First day's first stock close price: %f\n", day[0].stock[0].performance);

    return 0;
}


