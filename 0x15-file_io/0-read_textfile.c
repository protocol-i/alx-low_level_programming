#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return (0);

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    char *buffer = malloc(letters + 1);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    buffer[bytes_read] = '\0';

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || (size_t)bytes_written != bytes_read)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    close(fd);
    free(buffer);

    return (bytes_written);
}

int main(void)
{
    const char *filename = "example.txt";
    size_t letters_to_read = 100;

    ssize_t bytes_printed = read_textfile(filename, letters_to_read);
    if (bytes_printed == 0)
    {
        fprintf(stderr, "Error: Unable to read and print the file.\n");
        return (EXIT_FAILURE);
    }

    printf("\nSuccessfully read and printed %zd letters from the file.\n", bytes_printed);
    return (EXIT_SUCCESS);
}
