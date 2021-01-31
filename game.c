#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char comp,char you){
    // returns 1 if you win, -1 if computer wins and 0 if its a draw.
    
    if(comp==you){
        return 0;
    }

    else if(you=='s' && comp=='p'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }
    else if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='r' && comp=='s'){
        return 1;
    }
}

int main(){
    char you,comp;
//   creating a random number between 1 and 100
    srand(time(0));
    int number = rand()%100+1;

// choosing an option for computer 
    if(number<33)
        comp='r';
    else if(number>33 && number<66)
        comp='p';
    else
        comp='s';

    printf("Enter 'r' for rock ,'p' for paper and 's' for scissor.\n");
    scanf("%c",&you);
    printf("Computer chose %c\n",comp);
    int result= rockpaperscissor(comp,you);

// winner selection logic
    if(result==0)
        printf("It's a draw\n");
    else if(result==1)
        printf("You Win\n");
    else  
        printf("You lose\n");
    return 0;
}