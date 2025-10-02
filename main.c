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
    for (int i = 0; i < 3; i++) {
        int value, pos;
        scanf("%d %d", &value, &pos);

        if (pos >= 1 && pos <= 9) {
            *(p + pos) = value;  // pointer update
        }
    }
   // recalculate sum
    sum = 0;
    for (int i = 1; i <= 9; i++) {
        sum += *(p + i);
    }
    *p = sum;
// print array

    return 0;
}

