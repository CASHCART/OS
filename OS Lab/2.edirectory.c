#include <stdio.h>
#include <dirent.h>

int main(){
    DIR *d;
    struct dirent *dir;
    char folder[20];

    printf("Enter directory: ");
    scanf("%s",folder);

    d=opendir(folder);

    while((dir=readdir(d))!=NULL)
        printf("%s\n",dir->d_name);

    closedir(d);
}