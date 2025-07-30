#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

typedef struct list {
    int length;
    int *data;
} list;

list* new_list(int length);
int search(list*, int);

#endif