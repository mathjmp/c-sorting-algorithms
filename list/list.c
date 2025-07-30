#include "list.h"
#include <stdlib.h>

list* new_list(int length) {

    list *list = (struct list*) malloc(sizeof(list));
    list->length = length;
    list->data = (int *) malloc(length * sizeof(int));
    return list;
}

void show_list(list *list) {

    for (int index = 0; index < list->length; index++) {
        printf("[%d] = %d\n", index, list->data[index]);
    }
}