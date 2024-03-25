#include<stdio.h>
#include<conio.h>

int arr[]={'0','1','2','3','4','5','6','7','8','9'};
int a=0;
int n;

void print(){
    printf("|=============|");
    printf("\n");
    printf("| TIC-TAC-TOE |");
    printf("\n");
    printf("|=============|");
    printf("\n");
    printf("\n");
    printf("  %c | %c | %c",arr[1],arr[2],arr[3]);
    printf("\n");
    printf("  ----------");
    printf("\n");
    printf("  %c | %c | %c",arr[4],arr[5],arr[6]);
    printf("\n");
    printf("  ----------");
    printf("\n");
    printf("  %c | %c | %c",arr[7],arr[8],arr[9]);
    printf("\n");
}

int checkwin(){
    if(arr[1]==arr[2] && arr[2] == arr[3]){
        return 1;
    }
    if(arr[4]==arr[5] && arr[5] == arr[6]){
        return 1;
    }
    if(arr[7]==arr[8] && arr[8] == arr[9]){
        return 1;
    }
    if(arr[1]==arr[5] && arr[5] == arr[9]){
        return 1;
    }
    if(arr[3]==arr[5] && arr[5] == arr[7]){
        return 1;
    }
    if(arr[1]==arr[4] && arr[4] == arr[7]){
        return 1;
    }
    if(arr[2]==arr[5] && arr[5] == arr[8]){
        return 1;
    }
    if(arr[3]==arr[6] && arr[6] == arr[9]){
        return 1;
    }
}

void change(int isspace){
    if(isspace%2 == 0){
        arr[n]='O';
    }
    else{
        arr[n]='X';
    }
}

int main(){
    int isspace=9;

    while(isspace){      
        print();

        if(isspace%2 == 0){
            printf("enter the number where you want to mark 'O' - player2 : ");
        }
        else{
            printf("enter the number where you want to mark 'X' - player1 : ");
        }
        scanf("%d",&n);
        change(isspace);

        int ans=checkwin();
        if(ans == 1 && isspace%2 == 0){
            a=2;
            system("cls");
            print();
            printf("player2 wins");
            break;
        }
        if(ans == 1 && isspace%2 !=0){
            a=1;
            system("cls");
            print();
            printf("player1 wins");
            break;
        }
         
        system("cls");
        isspace--;
    }

    if(a==0){
        printf("This match is a DRAW");
    }

    return 0;
}
