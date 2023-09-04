#include "main.h"
/**
 * create_file - Creates a file with the given filename and writes text_content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content) {
    int fd, write_status;
    
    if (filename == NULL)
        return -1;

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600); // rw-------
    if (fd == -1)
        return -1;

    if (text_content != NULL) {
        write_status = write(fd, text_content, strlen(text_content));
        if (write_status == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}

int main(void) {
    const char *filename = "example.txt"; // Replace with your desired filename
    char *text_content = "This is a sample text.\n"; // Replace with your desired text content

    int result = create_file(filename, text_content);
    if (result == -1) {
        fprintf(stderr, "Error: Unable to create or write to the file.\n");
        return EXIT_FAILURE;
    }

    printf("File created and written successfully.\n");
    return EXIT_SUCCESS;
}
