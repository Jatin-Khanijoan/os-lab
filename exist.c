#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int n, fd;
    char buff[50];

    fd = open("test.txt", O_RDONLY); // Open the file in read-only mode
    if (fd == -1) {
        perror("Error opening the file");
        return 1; // Return with error code
    }

    printf("The file descriptor of the file is: %d\n", fd);

    n = read(fd, buff, 10); // Read 10 characters from the file
    if (n == -1) {
        perror("Error reading from file");
        close(fd); // Close the file descriptor before exiting
        return 1; // Return with error code
    }

    write(1, buff, n); // Write the read characters to the standard output
    close(fd); // Close the file descriptor

    return 0; // Return with success code
}

