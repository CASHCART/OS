#include <stdio.h>

int main(){
    int n,f;
    printf("Enter number of pages: ");
    scanf("%d",&n);

    int pages[n];
    printf("Enter pages:\n");
    for(int i=0;i<n;i++) scanf("%d",&pages[i]);

    printf("Enter number of frames: ");
    scanf("%d",&f);

    int frames[f];
    for(int i=0;i<f;i++) frames[i]=-1;

    int k=0,faults=0;

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<f;j++)
            if(frames[j]==pages[i]) flag=1;

        if(!flag){
            frames[k]=pages[i];
            k=(k+1)%f;
            faults++;
        }
    }

    printf("Page faults = %d\n",faults);
}