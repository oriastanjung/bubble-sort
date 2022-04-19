#include <stdio.h>

int BubbleSort(int *arr, int sizeArr){
    if (sizeArr == 1)
    {
        return 0;
    }
    for(int idx = 0; idx < sizeArr-1; idx++){
        if(arr[idx] > arr[idx+1]){
            int _temp = arr[idx];
            arr[idx] = arr[idx+1];
            arr[idx+1] = _temp;
        }
    }

    BubbleSort(arr, sizeArr-1);
}


int main(int argc, char const *argv[])
{
    printf("Bubble Sort\n");
    int size;
    printf("How much the number : ");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size ; i++){
        printf("input number -%d : ", i+1);
        scanf("%d", &array[i]);
        printf("\n");
    }
    printf("\ndata before sorting : \n");

    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    printf("\ndata after sorting : \n");

    BubbleSort(array, size);
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }


    return 0;
}
