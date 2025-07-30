#include <stdio.h>
#include <time.h>
#include "list/list.c"
#include "linear_search/linear_search.c"
#include "binary_search/binary_search.c"
#include "bubble_sort/bubble_sort.c"
#include "selection_sort/selection_sort.c"

void test_linear_search(list*);
void test_binary_search(list*);
void test_bubble_sort(list*);
void test_selection_sort(list*);

int main() {

    srand(time(NULL));
    int target = 0;
    int length = 10;
    list *list = new_list(length);
    for (int index = 0; index < length; index++) {
        list->data[index] = rand() % 100;
    }

    test_linear_search(list);
    test_binary_search(list);
    test_bubble_sort(list);
    test_selection_sort(list);
}

void test_bubble_sort(list *list) {

    printf("bubble sort\n");

    bubble_sort(list);
    show_list(list);
}

void test_selection_sort(list *list) {

    printf("selection sort\n");
    selection_sort(list);
    show_list(list);
}

void test_binary_search(list *list) {

    int target = 10;
    int index = binary_search(list, target);

    if (index >= 0) {
        printf("binary search found element at position %d\n", index);
        return;
    }

    printf("binary search could not find the element %d\n", target);
}

void test_linear_search(list *list) {
    
    int target = 4;
    int index = search(list, target);

    if (index >= 0) {
        printf("element found at position %d\n", index);
        return;
    }

    printf("element %d is not present in the list\n", target);
}