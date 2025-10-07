#include <stdio.h>
#include <stdlib.h>

#include "data.h"
#include "list.h"
// static function declaration
static int AddItemToBegin(list_t *list, sensor_t item);

//____________________________________________________________________________
int LIST_Init(list_t *list) {
  list->head = list->tail = NULL;

  return 0;
}

static int AddItemToBegin(list_t *list, sensor_t item) {
  if (list == NULL) return -1;

  node_t *newNode = (node_t *)malloc(sizeof(node_t));
  if (newNode == NULL) return -2;

  newNode->data = item;
  newNode->next = list->head;

  list->head = newNode;
  if (list->tail == NULL) {
    list->tail = newNode;
  }

  return 0;
}

//____________________________________________________________________________
int LIST_AddItemToEnd(list_t *list, sensor_t item) {
  if (list == NULL) return -1;

  if (list->tail == NULL) {
    return AddItemToBegin(list, item);
  }

  node_t *newNode = (node_t *)malloc(sizeof(node_t));
  if (newNode == NULL) return -2;
  newNode->data = item;
  newNode->next = NULL;

  list->tail->next = newNode;
  list->tail = newNode;
  return 0;
}

//____________________________________________________________________________
void LIST_PrintList(list_t list) {
  node_t *current = list.head;

  while (current) {
    printf("%04d-%02d-%02d %1.2d:%1.2d temperature = %2.f°C\n",
           current->data.year, current->data.month, current->data.day,
           current->data.hour, current->data.minute, current->data.temperature);
    current = current->next;
  }
}