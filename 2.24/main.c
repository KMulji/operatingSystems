#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *file1 = argv[1];
    char *file2 = argv[2];

    int fd1 = open(file1, O_RDONLY);
    int fd2 = open(file2, O_RDWR);

    char buffer[1024];

    ssize_t size = read(fd1, buffer, sizeof(buffer));

    write(1, buffer, size);
    write(fd2, buffer, size);

    close(fd1);

    return 0;
}