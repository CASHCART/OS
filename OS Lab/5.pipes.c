#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    int fd[2];
    char msg[50],buf[50];

    pipe(fd);

    printf("Enter message: ");
    scanf("%s",msg);

    write(fd[1],msg,strlen(msg)+1);
    read(fd[0],buf,sizeof(buf));

    printf("Received: %s\n",buf);
}