/*
Mark joseph wanyeri 
computer science 
group A 
cut 2 programing 
date 6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

// Function to write 10 integers to "input.txt"
void writeInput() {
    FILE *fp;
    int i, num;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }

    fclose(fp);
    printf("Data successfully written to input.txt\n\n");
}

// Function to read from "input.txt", calculate sum and average, then write to "output.txt"
void processData() {
    FILE *in, *out;
    int num, count = 0, sum = 0;
    float avg;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output.txt for writing!\n");
        fclose(in);
        exit(1);
    }

    while (fscanf(in, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    avg = (float)sum / count;
    fprintf(out, "Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(in);
    fclose(out);
    printf("Results written to output.txt\n\n");
}

// Function to display contents of input.txt and output.txt
void displayFiles() {
    FILE *fp;
    char ch;

    printf("---- Contents of input.txt ----\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt!\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n\n---- Contents of output.txt ----\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt!\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\n");
}

int main() {
    writeInput();    // Step 1
    processData();   // Step 2
    displayFiles();  // Step 3

    return 0;
}