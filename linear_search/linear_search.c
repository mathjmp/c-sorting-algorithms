#include "linear_search.h"

int search(list *list, int target) {

    for (int index = 0; index < list->length; index++) {

        if (list->data[index] == target) {
            return index;
        }
    }

    return -1;
}