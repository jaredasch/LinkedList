#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
	printf("Inserting element 3 at the begining of the list\n");
	struct node *n0  = insert_front(0, 3);
	print_list(n0);

	printf("\nInserting element 2 at the begining of the list\n");
	struct node *n1  = insert_front(n0, 2);
	print_list(n1);

	printf("\nInserting element 1 at the begining of the list\n");
	struct node *n2  = insert_front(n1, 1);
	print_list(n2);

	printf("free_list(): %p\n", free_list(n2));
	// print_list(n2); Seg fault, as it should

	return 0;
}