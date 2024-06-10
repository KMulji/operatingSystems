#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd1 = open("./test.txt", O_RDONLY);
    int fd2 = open("./test2.txt",O_RDWR);

    char buffer[1024];

     ssize_t size= read(fd1, buffer, sizeof(buffer));

    write(1, buffer, size);
    write(fd2, buffer, size);
    
    close(fd1);

    return 0;
}