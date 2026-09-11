#include<stdio.h>
#define MAX 10
int top=-1;
int stack[MAX];
void push(){
    int value;
    if (top==MAX -1)
    {
        printf("\nStack is OverFlow!");
    }
    else{
        printf("\nEntre the value :");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("\nThe Pushed on stack!");

    } 
}
void pop(){
    if(top==-1){
        printf("\nStack is Empty!...");
    }
    else{
        printf("\n%d Stack top value removed!...",stack[top]);
        top--;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("\nStack is Empty!....");
    }
    else{
        printf("\nStack Elements are...\n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int choise;
    do{
        printf("\n=============Stack Menu===========\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("=====================================\n");
        printf("Enter the choise :");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exiting the programme.....!\n");
            break;
            default:
            printf("\n%d is a Invalid choise!",choise);
        }

    }while (choise!=4);
    return 0;
}
