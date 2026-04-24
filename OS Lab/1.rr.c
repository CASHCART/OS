#include <stdio.h>
int main(){
    int n,bt[10],rem[10],wt[10]={0},tat[10];
    int tq,time=0,done;

    printf("Enter number of processes: ");
    scanf("%d",&n);

    printf("Enter burst times:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
        rem[i]=bt[i];
    }

    printf("Enter time quantum: ");
    scanf("%d",&tq);

    do{
        done=1;
        for(int i=0;i<n;i++){
            if(rem[i]>0){
                done=0;
                if(rem[i]>tq){
                    time+=tq;
                    rem[i]-=tq;
                } else {
                    time+=rem[i];
                    wt[i]=time-bt[i];
                    rem[i]=0;
                }
            }
        }
    }while(!done);

    for(int i=0;i<n;i++)
        tat[i]=bt[i]+wt[i];

    printf("\nProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
        printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
}