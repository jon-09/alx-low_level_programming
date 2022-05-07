#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int index, count, chng;
	int coins[] = {25, 10, 5, 2};

	/*ensuring only 2 argc are passed*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/*ensuring argc passes number more than 0*/
	count = atoi(argv[1]);
	if (count <= 0)
	{
		printf("0\n");
		return (0);
	}

	/*ensuring the last elemnt in array is not NULL*/
	index = 0;
	while(coins[index] != '\0')
	{
		/*ensuring the count passed is not available in the coins values i.e coins[] */
		if(count >= coins[index])
		{
			/*largest coin value used as change for the passed count(argc)*/
			chng += (count / coins[index]);
			count -= (coins[index] * (count / coins[index]));
		}
		index++;
	}
	printf("%d\n", chng);

	return (0);
}
