#include "linear_search.h"
#include <stdlib.h>

list* new_list(int length) {

    list *list = (struct list*) malloc(sizeof(list));
    list->length = length;
    list->data = (int *) malloc(length * sizeof(int));
    return list;
}

int search(list *list, int target) {

    for (int index = 0; index < list->length; index++) {

        if (list->data[index] == target) {
            return index;
        }
    }

    return -1;
}