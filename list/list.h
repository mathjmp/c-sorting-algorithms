#ifndef LIST_H
#define LIST_H

typedef struct list {
    int length;
    int *data;
} list;

list* new_list(int length);
void show_list(list*);

#endif