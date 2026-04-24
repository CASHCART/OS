#include <stdio.h>

int main(){
    int n,m;
    printf("Enter number of processes and resources: ");
    scanf("%d %d",&n,&m);

    int alloc[n][m],max[n][m],need[n][m],avail[m];
    int finish[n],safe[n],k=0;

    printf("Enter Allocation Matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&alloc[i][j]);

    printf("Enter Maximum Matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&max[i][j]);

    printf("Enter Available Resources:\n");
    for(int j=0;j<m;j++)
        scanf("%d",&avail[j]);

    for(int i=0;i<n;i++){
        finish[i]=0;
        for(int j=0;j<m;j++)
            need[i][j]=max[i][j]-alloc[i][j];
    }

    for(int count=0;count<n;count++){
        for(int i=0;i<n;i++){
            if(!finish[i]){
                int flag=1;
                for(int j=0;j<m;j++)
                    if(need[i][j]>avail[j]) flag=0;

                if(flag){
                    for(int j=0;j<m;j++)
                        avail[j]+=alloc[i][j];
                    safe[k++]=i;
                    finish[i]=1;
                }
            }
        }
    }

    if(k==n){
        printf("System is in SAFE state\nSafe sequence:\n");
        for(int i=0;i<n;i++)
            printf("P%d ",safe[i]);
    } else
        printf("System is NOT SAFE\n");
}