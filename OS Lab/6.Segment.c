#include <stdio.h>

int main(){
    int base[5],limit[5],seg,offset;

    printf("Enter base and limit for 5 segments:\n");
    for(int i=0;i<5;i++)
        scanf("%d %d",&base[i],&limit[i]);

    printf("Enter segment number and offset: ");
    scanf("%d %d",&seg,&offset);

    if(offset<limit[seg]){
        int phys=base[seg]+offset;
        printf("Physical Address = %d\n",phys);
    }
    else
        printf("Invalid offset\n");
}