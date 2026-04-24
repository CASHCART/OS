#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    char msg[100];
    mkfifo("fifo",0666);

    int fd=open("fifo",O_WRONLY);

    printf("Enter message: ");
    scanf("%s",msg);

    write(fd,msg,sizeof(msg));
    close(fd);

    printf("Message sent: %s\n",msg);
}