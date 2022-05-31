#include<stdio.h>
#include <stdlib.h>

int Q[4], r=-1, f=-1;

void add(int Q[], int v){
    if(f<0){
        r = f = 0;
        Q[r] = v;
    } else if (r==4){
        printf("Queue is full.\n");
    } else {
        r++;
        Q[r] = v;
    }  
}

void delete(int Q[]){
    if(r==0){
        printf("Queue is empty\n");
    } else if (f==r){
        Q[f] = 0;
        f = r = -1;
    } else {
        Q[f] = 0;
        f++;
    }
}

void display(int Q[]){
    int i;
    if(f<0){
        printf("Queue is empty\n");
    } else {
        for(i=f; i<=r; i++){
            printf("%d\t", Q[i]);
        }
        printf("\n\n");
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
