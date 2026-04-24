#include <stdio.h>
#include <sys/stat.h>

int main(){
    struct stat s;
    char file[20];

    printf("Enter file name: ");
    scanf("%s",file);

    stat(file,&s);

    printf("Size: %ld\n",s.st_size);
    printf("Permissions: %o\n",s.st_mode & 0777);
}