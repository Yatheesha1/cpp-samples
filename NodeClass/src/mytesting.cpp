#include <stdio.h>
#include <stdlib.h>
#include "nodeclass.h"
NodeFunctions nodeFuction;
int main()
{
	const char *choices[] = {"Exit", "Display", "Insert", "Delete"};
	while (1)
	{
		int choice;
		printf("\n***********************************");
		printf("\nMENUS\n***********************************");
		for (unsigned int i = 0; i < sizeof(choices) / sizeof(char *); i++)
		{
			printf("\n%d. %s", i, choices[i]);
		}
		printf("\nSelect your choice: ");
		scanf("%d", &choice);
		printf("\nYour choice is %d for %s \n", choice, choices[choice]);
		switch (choice)
		{
		case 0:
			printf("Exiting\n");
			exit(0);
			break;
		case 1:
			nodeFuction.display(nodeFuction.header);
			break;
		case 2:
			//nodeFuction.current = nodeFuction.insert(nodeFuction.current);
			break;
		case 3:
			//nodeFuction.remove(&nodeFuction.header, &nodeFuction.current);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		default:
			printf("Choice is not defined yet! Please choose available choice\n");
		}
	}
	return 0;
}
