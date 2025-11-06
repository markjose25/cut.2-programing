/* 
Mark Joseph wanyeri 
computer science 
group A 
cut 2 programing 
date 6/11/2025
*/
#include <stdio.h>

int main() {
printf("an array is a collection of elements of the same data type stored in continuous memory location\n");
    // Declare and initialize a 2D array
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };int i, j;

    // Print the array elements
    printf("The elements of the array are:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}