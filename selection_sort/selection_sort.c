#include "selection_sort.h"

void selection_sort(list *list) {

    int *array = list->data;
    int min = 0;

    for (int i = 0; i < list->length - 1; i++) {
        int min = i;
        for (int j = i + 1; j < list->length; j++) {

            if (array[j] < array[min]) {
                min = j;
            }
        }

        int tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
    }
}