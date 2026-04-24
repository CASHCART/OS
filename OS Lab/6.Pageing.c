#include <stdio.h>

int main(){
    int pageSize,logical,pageNo,offset;

    printf("Enter page size: ");
    scanf("%d",&pageSize);

    printf("Enter logical address: ");
    scanf("%d",&logical);

    pageNo=logical/pageSize;
    offset=logical%pageSize;

    printf("Page number = %d\n",pageNo);
    printf("Offset = %d\n",offset);
}