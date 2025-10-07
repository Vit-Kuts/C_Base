#define LIST_H_
#ifdef LIST_H_
#include <stdarg.h>

#include "data.h"

typedef struct node_t {
  struct node_t *next;
  sensor_t data;
} node_t;

typedef struct list_t {
  node_t *head;
  node_t *tail;
} list_t;

int LIST_Init(list_t *list);
int LIST_AddItemToEnd(list_t *list, sensor_t item);
void LIST_PrintList(list_t list);

#endif /*LIST_H_*/