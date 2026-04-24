#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int fd1,fd2,n;
    char buf[100],src[20],dest[20];

    printf("Enter source file: ");
    scanf("%s",src);

    printf("Enter destination file: ");
    scanf("%s",dest);

    fd1=open(src,O_RDONLY);
    fd2=open(dest,O_WRONLY|O_CREAT,0644);

    while((n=read(fd1,buf,sizeof(buf)))>0)
        write(fd2,buf,n);

    printf("File copied successfully\n");

    close(fd1);
    close(fd2);
}