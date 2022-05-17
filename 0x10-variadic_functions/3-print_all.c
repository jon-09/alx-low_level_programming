#include "variadic_functions.h"
/**
 * print_all - function prints anything
 * @format: list of types of args passed to the func
 */
void print_all(const char * const format, ...)
{
	va_list vList;
	char *ptr;
	unsigned int indx = 0;
	unsigned int n = 0;
	unsigned int k = 0;
	const char args[] = "cifs";

	va_start(vList, format);
	while (format != NULL && format[indx] != '\0')
	{
		while (args[n])
		{
			if (format[indx] == args[n] && k > 0)
			{
				printf(", ");
				break;
			}
			n++;
		}
		switch (format[indx])
		{
		case 'c':
			printf("%c", va_arg(vList, int));
			k = 1;
			break;
		case 'i':
			printf("%d", va_arg(vList, int));
			k = 1;
			break;
		case 'f':
			printf("%f", va_arg(vList, double));
			k = 1;
			break;
		case 's':
			ptr = va_arg(vList, char *);
			k = 1;
			if (ptr == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		}
		indx++;
	}
	printf("\n");
	va_end(vList);
}
