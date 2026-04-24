#include <stdio.h>
#include <sys/shm.h>

int main(){
    int id=shmget(1234,1024,0666|IPC_CREAT);
    char *ptr=shmat(id,NULL,0);

    printf("Enter data: ");
    scanf("%s",ptr);

    printf("Data in shared memory: %s\n",ptr);
}