#include <stdio.h>
void swap(int *a, int *b);
void bubblesort(int array[], int n);

int main(){
    int n;
    int array[50];
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("The unsorted array: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    bubblesort(array, n);
    printf("\nThe sorted array: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int array[], int n){
    int i, j;
    for(i = 0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(array[j]>array[j+1]) swap(&array[j], &array[j+1]);
        }
    }
}