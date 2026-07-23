#include <stdio.h>
void insertionsort(int array[], int n);
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
    insertionsort(array, n);
    printf("\nThe sorted array: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;

}
void insertionsort(int array[], int n){
    int i, element, j;
    for(i=0; i<n; i++){
        element = array[i];
        j = i-1;
        while(j>=0 && array[j]>element){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = element;
    }
}