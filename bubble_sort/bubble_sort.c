#include "bubble_sort.h"

void bubble_sort(list *list) {

    int* array = list->data;
    
    for (int i = 0; i < list->length - 1; i++) {

        for (int j = 0; j < list->length - 1 - i; j++) {

            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}