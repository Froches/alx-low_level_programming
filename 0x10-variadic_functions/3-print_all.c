#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		i++;
		if (format[i] != '\0' && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
