#include "list.h"
#include <stdlib.h>

list* new_list(int length) {

    list *list = (struct list*) malloc(sizeof(list));
    list->length = length;
    list->data = (int *) malloc(length * sizeof(int));
    return list;
}
