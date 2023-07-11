#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	fclose(file);
	free(buffer);

	return (bytes_read);
}
