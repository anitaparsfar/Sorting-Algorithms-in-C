#include <stdio.h>
void swap(int *a, int *b);
void selectionSort(int array[], int n);
int main(){
    int array[50], n, i;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("\nEnter the elements: \n");
    for(i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("\nUnsorted array:\n");
     for(i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    selectionSort(array, n);
    printf("\nsorted array:\n");
    for(i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
void selectionSort(int array[], int n){
    int i, j, min;
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(array[j]<array[min]){
                swap(&array[min], &array[j]);
                min = j;
                
            }
        
        }
    }
}