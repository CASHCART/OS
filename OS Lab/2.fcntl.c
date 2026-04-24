#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd, flags;
    char file[20];

    printf("Enter file name: ");
    scanf("%s", file);

    fd = open(file, O_RDONLY);

    flags = fcntl(fd, F_GETFL);
    fcntl(fd, F_SETFL, flags | O_NONBLOCK);

    printf("Non-blocking mode enabled\n");

    close(fd);
    return 0;
}