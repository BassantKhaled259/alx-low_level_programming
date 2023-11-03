#include "hash_tables.h"

/**
 *key_index - function that returns the index of a key
 *@key : pointer to key to get the index
 *@size: size of array of hash table
 *
 *this function should use hash_djb2 function
 *
 *Return : index at which the key/value pair,
 *should be stored in the array of hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
