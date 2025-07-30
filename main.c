#include <stdio.h>
#include "linear_search/linear_search.c"
#include "binary_search/binary_search.c"

void test_linear_search();
void test_binary_search();

int main() {

    test_linear_search();
    test_binary_search();
}

void test_binary_search() {

    int target = 0;
    int length = 10;

    list *list = new_list(length);

    for (int index = 0; index < length; index++) {
        list->data[index] = index+1;
    }

    int index = binary_search(list, target);

    if (index >= 0) {
        printf("binary search found element at position %d\n", index);
        return;
    }

    printf("binary search could not find the element %d\n", target);
}

void test_linear_search() {
    
    int target = 4;
    int length = 5;
    list *list = new_list(length);
    

    for (int index = 0; index<length; index++) {
        list->data[index] = index * 2;
    }

    int index = search(list, target);

    if (index >= 0) {
        printf("element found at position %d\n", index);
        return;
    }

    printf("element %d is not present in the list", target);
}