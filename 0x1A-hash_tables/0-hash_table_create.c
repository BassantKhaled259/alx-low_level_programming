#include "hash_tables.h"
/**
 *hash_table_create - function create a hash table
 *
 *If something is wrong, it should return NULL
 *
 *@size : size of hash table/array
 *Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new = NULL;

if (size == 0)
return (NULL);
new = malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
new->size = size;
new->array = malloc(sizeof(hash_node_t *) * size);
if (new->array == NULL)
return (NULL);
return (new);
}
