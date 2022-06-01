#include<stdio.h>
#include <stdlib.h>

int Q[4], r=-1, f=-1;

void add(int Q[], int v){
    if(f==0 && r == 4 || r == f-1){
        printf("Overflow");
    } else if (f==-1){
        f=r=0;
        Q[f]=v;
    } else if (r==4){
        r =0;
        Q[r]=v;
    } else {
        r++;
        Q[r]=v;
    }
}

void delete(int Q[]){
    if (f==0){
        printf("Queue is empty");
    } else if (f==r){
        f=r=-1;
    } else if (f==4){
        f=0;
    } else {
        f++;
    }
}

void display(int Q[]){
    int i;
    if (f<0){
        printf("Queue is empty");
    } else if (f<r){
        for (i=f; i<=r; i++){
            printf("\n%d", &Q[i]);
        }
    } else if (f>r){
        for (i=f; i<=4; i++){
            printf("\n%d", Q[i]);
        }
        for (i=0; i<=r; i++){
            printf("\n%d", Q[i]);
        }
    }
}

int main(){
    int ans, v;
    start:
    printf("Enter your choice : ");
    printf("\n1. Add\t        2. Delete\n3. Display\t4. Exit\n");
    scanf("%d", &ans);
    switch(ans)
    {
    case 1:
        printf("Enter value: ");
        scanf("%d", &v);
        add(Q, v);
        break;

    case 2:
        delete(Q);
        break;

    case 3:
        display(Q);
        break;

    case 4: 
        exit(0);
        break;
    }
    goto start;
  return 0; //it will never reach ?
}
