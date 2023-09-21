#include "main.h"

void free_2D_array(char **array2D)
{
	int i = 0;

	if (array2D == NULL)
		return;

	while (array2D[i])
	{
		free(array2D[i]);
		array2D[i] = NULL;
		i++;
	}

	free(array2D);
	array2D = NULL;
}
