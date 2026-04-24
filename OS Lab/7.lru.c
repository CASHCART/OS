#include <stdio.h>

int main(){
    int n,f;
    scanf("%d",&n);

    int pages[n];
    for(int i=0;i<n;i++) scanf("%d",&pages[i]);

    scanf("%d",&f);

    int frames[f],time[f],t=0;

    for(int i=0;i<f;i++){ frames[i]=-1; time[i]=0; }

    for(int i=0;i<n;i++){
        t++;
        int flag=0;
        for(int j=0;j<f;j++){
            if(frames[j]==pages[i]){
                time[j]=t;
                flag=1;
            }
        }
        if(!flag){
            int min=0;
            for(int j=1;j<f;j++)
                if(time[j]<time[min]) min=j;
            frames[min]=pages[i];
            time[min]=t;
        }
    }
}