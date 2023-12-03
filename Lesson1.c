#include <stdio.h>
#include <stdlib.h>


int main () {

    printf("\n// First part\n\n");

    printf("Print len of your array:\n");
    int len;
    scanf("%d", &len);

    printf("\nPrint your array:\n");
    double arr[len];
    double *p;
    p = arr;

    for (int i = 0; i < len; ++i) {
        scanf("%lf", &arr[i]);
    }

    printf("\nYour array:\n");

    for (int i = 0; i < len; i++ ) {
        printf("arr[%d] : %lf\n",  i, *(p + i) );
    }


    printf("\n// Second part\n\n");

    printf("Print len of your array2:\n");
    int len2;
    scanf("%d", &len2);


    printf("\nPrint your array2:\n");
    double *arr2;
    arr2 = (double *)malloc(len2 * sizeof(double));

    for (int i = 0; i < len2; ++i) {
        scanf("%lf", &*(arr2+i));
    }


    printf("\nYour array2:\n");

    for (int i = 0; i < len2; i++ ) {
        printf("arr[%d] : %lf\n",  i, *(arr2 + i) );
    }

    free(arr2);

    printf("\nMemory is empty\n");

    return 0;
}

// 4
// -8.8 11.2 64.67 55.32