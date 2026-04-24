#include <stdio.h>
int main(){
    int n,bt[10],pr[10],wt[10],tat[10];

    printf("Enter number of processes: ");
    scanf("%d",&n);

    printf("Enter BT and Priority:\n");
    for(int i=0;i<n;i++)
        scanf("%d %d",&bt[i],&pr[i]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(pr[i]>pr[j]){
                int t=pr[i]; pr[i]=pr[j]; pr[j]=t;
                t=bt[i]; bt[i]=bt[j]; bt[j]=t;
            }

    wt[0]=0;
    for(int i=1;i<n;i++)
        wt[i]=wt[i-1]+bt[i-1];

    for(int i=0;i<n;i++)
        tat[i]=wt[i]+bt[i];

    printf("\nProcess\tPriority\tWT\tTAT\n");
    for(int i=0;i<n;i++)
        printf("P%d\t%d\t\t%d\t%d\n",i+1,pr[i],wt[i],tat[i]);
}