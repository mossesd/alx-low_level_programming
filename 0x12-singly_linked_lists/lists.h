#ifndef _LISTS_
#define _LISTS_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - single linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list structure
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
