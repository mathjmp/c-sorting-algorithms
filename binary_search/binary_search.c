#include "binary_search.h"

int binary_search(list *list, int target) {

    int min = 0;
    int max = list->length;
    
    while(max >= min) {

        int index = (min + max) / 2;
        int element = list->data[index];

        if (element == target) {
            return index;
        }

        if (element > target) {
            max = index - 1;
            continue;
        }

        if (element < target) {
            min = index + 1;
            continue; 
        }
    }

    return -1;
}