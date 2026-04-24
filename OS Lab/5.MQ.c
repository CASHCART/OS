#include <stdio.h>
#include <sys/msg.h>

struct msg{
    long type;
    char text[50];
};

int main(){
    int id=msgget(1234,0666|IPC_CREAT);
    struct msg m;

    printf("Enter message: ");
    scanf("%s",m.text);
    m.type=1;

    msgsnd(id,&m,sizeof(m),0);
    printf("Message sent\n");
}