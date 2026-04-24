#include <stdio.h>
int main(){
    int n,bt[10],wt[10],tat[10],temp;

    printf("Enter number of processes: ");
    scanf("%d",&n);

    printf("Enter burst times:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&bt[i]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(bt[i]>bt[j]){
                temp=bt[i]; bt[i]=bt[j]; bt[j]=temp;
            }

    wt[0]=0;
    for(int i=1;i<n;i++)
        wt[i]=wt[i-1]+bt[i-1];

    for(int i=0;i<n;i++)
        tat[i]=wt[i]+bt[i];

    printf("\nProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
        printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
}