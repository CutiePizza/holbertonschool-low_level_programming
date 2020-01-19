#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int ok;

    ht = hash_table_create(1024);
    ok = hash_table_set(ht, "hetairas", "holberton");
    if (ok == 1)
	    printf("SUCCESS\n");
    else
	    printf("ERROR\n");
    
    ok = hash_table_set(ht, "mentioner", "holberton");
    if (ok == 1)
	    printf("SUCCCESS 2\n");
    else
	    printf("ERROR 2\n");
    
    
    ok = hash_table_set(ht, "mentioner", "ok");
    if (ok == 1)
            printf("SUCCCESS 3\n");
    else
            printf("ERROR 3\n");

    
    return (EXIT_SUCCESS);
}
