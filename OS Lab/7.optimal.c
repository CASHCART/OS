#include <stdio.h>

int main(){
    int n,f;
    scanf("%d",&n);

    int pages[n];
    for(int i=0;i<n;i++) scanf("%d",&pages[i]);

    scanf("%d",&f);

    int frames[f];
    for(int i=0;i<f;i++) frames[i]=-1;

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<f;j++)
            if(frames[j]==pages[i]) flag=1;

        if(!flag){
            int far=-1,pos=0;
            for(int j=0;j<f;j++){
                int k;
                for(k=i+1;k<n;k++)
                    if(frames[j]==pages[k]) break;
                if(k>far){ far=k; pos=j; }
            }
            frames[pos]=pages[i];
        }
    }
}