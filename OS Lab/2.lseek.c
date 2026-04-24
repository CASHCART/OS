#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int fd;
    char file[20],buf[11];

    printf("Enter file name: ");
    scanf("%s",file);

    fd=open(file,O_RDONLY);

    lseek(fd,-10,SEEK_END);
    read(fd,buf,10);
    buf[10]='\0';

    printf("Last 10 bytes: %s\n",buf);

    close(fd);
}