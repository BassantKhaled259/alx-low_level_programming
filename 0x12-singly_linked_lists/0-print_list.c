#include "lists.h"

/**
 *_strlen - return the lenght of string
 *@s : the string whose lenght to check
 *
 *Return : integer lenght of string
*/
int _strlen(char *s)
{
  int i = 0;
  if (!s)
    return (0);
  while (*s++)
    i++;
  return (i);
}

/**
 *print_list - prints a linked lists
 *@h : pointer to first node
 *
 *Return :size of lists
*/

size_t print_list(const list_t *h)
{
  size_t i = 0;
  while (h)
    {
      printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "nil");
      h = h->next;
      i++;
    }
  return (i);
}
