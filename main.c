#include <stdio.h>

int main (){
    int arr[10];
    int *p = arr;

    // initialize array values (1-9) and calculate sum
    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        *(p + i) = i;
        sum += *(p + i);
    }
    *p = sum;  // arr[0] = sum

// process 3 inputs

// recalculate sum
// print array

    return 0;
}

