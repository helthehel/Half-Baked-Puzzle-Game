#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
int main(){
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,5);
    int Dans,SCORE=-1,HP=1,HPget=0,HPdisp=0,TrueMain=0;
    char Q0real[]="Yes",Q0ans[4];
    printf("PUZZLE GAME V0.21\n\n");
    SetConsoleTextAttribute(hc,13);
    printf("------------TODO LIST------------\n\n\n");
    printf("- Add more Questions\n");
    printf("- Remove 'him'\n");
    printf("- Remove case sensitivity\n");
    printf("- Add answer streak system\n");
    printf("- Fix glitch where number inputs can be used to bypass questions requiring string input.\n");
    printf("- Fix GAMEOVER text not showing for certain questions\n");
    printf("- Fix some key presses not working properly.");
    printf("- Fix Text scrolling too quickly.");
    SetConsoleTextAttribute(hc,1);
    printf("------------CHANGELOG------------\n\n\n");
    printf("- Terminal now supports 256 colors.\n");
    printf("- Added Lore\n");
    printf("- Improved starting menu\n");
    printf("- Replaced Lives with HP\n");
    printf("- Replaced Google link with GitHub link so the user doesn't have to 'download an exe file every time.'");
    SetConsoleTextAttribute(hc,11);
    printf("------------RULES------------\n\n\n");
    printf("- No colluding.\n");
    printf("- Answer a question incorrectly to lose a life.\n");
    printf("- Don't let 'him' find you.\n");
    printf("- Answers are case sensitive.\n");
    printf("- DM experience limit.c#0383 if you encounter any bugs.\n");
    printf("- If your HP reaches 0, you die.\n\n\n");   
    printf("Check for updates? (Y/n)");
    int Trueness=0;
    do{

        if(GetKeyState(0x59)==0){
       
            system("start https://github.com/Reznoflovaniak/PUZZLE");
            Trueness++;
        }
        if(GetAsyncKeyState(0x4E)==0){
            Sleep(1);
            Trueness++;
        }else{
            ;
        }
    }while(Trueness==0);
    SetConsoleTextAttribute(hc,15);
    printf("\n\n\n\n\nJust answer the questions to win!\n");
    printf("Do you understand? (Yes/Yes)\n");
    scanf("%s",Q0ans);
    int result;
    result=strcmp(Q0real,Q0ans);    
    if(result==0){
        printf("Okay. Next Question.\n");\
        printf("\nHP: %u\n",HP);
        SCORE++;
        HPget++;
        Sleep(2000);
    }else{
        SetConsoleTextAttribute(hc,4);
        printf("Didn't you read the rules?");
        Sleep(10000);
        return 0;
    }
    //Question 1
    system("cls");
    SetConsoleTextAttribute(hc,10);
    printf("2+2+2-7=");
    int Q1ans;
    scanf("%u", &Q1ans);
    if(Q1ans==-1){
            SCORE++;
            HPget++;
            printf("Good job!\n");
            printf("\nHP: %u\n",HP);
            Sleep(1000);
    }else{
        SetConsoleTextAttribute(hc,4);
        printf("\nYou are not worthy.\n\n");
        Sleep(3000);
        HP--;
        HPdisp++;
    }

    //Question 2
    if(SCORE==1){    
    SetConsoleTextAttribute(hc,10);
    printf("Can cats swim? (Y/n)\n");
    int Q2res;
    int TruenessTwo=1;
    char Q2real[]="Y",Q2uin[2];
    scanf(" %s",Q2uin);
    Q2res=strcmp(Q2real,Q2uin);
    do{
        if(Q2res==0){
        printf("Of course they can :)\n\n",HP);
        SCORE++;
        TruenessTwo++;
    }else{
        SetConsoleTextAttribute(hc,4);
        printf("STOP IT DONT SAY THAT NO NO NO NO\n");
        Sleep(2000);
        HP--;
        TruenessTwo++;
    }
    }while(TruenessTwo==1);

    //Question 3
    if(SCORE==2){
        SetConsoleTextAttribute(hc,10);
        printf("You walk into a store. In the room, you find 13 people who are 27y/o, 15 people that are 35y/o, 2E2 people that are 50y/o, .92E3 people that are 25y/o, and 1.5E3 women who are 17y/o. How many people are there in the room? Answer in a whole number: ");
        int Q3ans;
        scanf("%u",&Q3ans);
        switch (Q3ans){
            case 2649:
            printf("\n\nYou must feel real proud of yourself... (HP: %u)\n\n",HP);
            SCORE++;
            HPget++;
            Sleep(1);
            break;
            default:
            SetConsoleTextAttribute(hc,4);
            printf("You tried to answer the door after your friend yelled 'AYO THE PIZZAS HERE' and died.\n\n");
            HP--;
        }
    }

    //Question 4
    if(SCORE==3){
    char Q4ans[4],Q4real[]="TUNA";
    SetConsoleTextAttribute(hc,10);
    printf("You can tune a piano but you cant ____ fish.\n");
    scanf("%s",Q4ans);
    int result2;
    result2=strcmp(strupr(Q4ans),Q4real);
    if(result2==0){
       HP++;
        printf("\n\nRight you are (+1 HP)");
        printf("\nHP: %u\n",HP);
        Sleep(1000);
        SCORE++;
    }else{
        SetConsoleTextAttribute(hc,4);
        printf("You just took a massive L 🙃\n");
        Sleep(3000);
        HP--;
    }
    }
   //Question 5
    if(SCORE==4){
        SetConsoleTextAttribute(hc,10);
        printf("My bones are stiff, my spine comes in many sizes, I am always ready to tell a tale. What am I? (Type the name of the item): ");
        int result5;
        char Q5real[]="book",Q5ans[5];
        scanf("%s",Q5ans);
        result5=strcmp(Q5ans,Q5real);
        if(result5==0){
            printf("\nThat one was easy I hope.\n");
            SCORE++;
        }else{
            HP--;
            SetConsoleTextAttribute(hc,4);
            printf("oh poop (HP, %u)\n\n",HP);
            Sleep(1000);
            SCORE++;
        }
    }
    //Question 6
    if(SCORE==5){
        SetConsoleTextAttribute(hc,13);
        printf("The answer is somewhere\n");
        char Q6real[]="somewhere",Q6ans[10];
        int Q6res;
        scanf("%s",Q6ans);
        Q6res=strcmp(Q6real,Q6ans);
        if(Q6res==0){
            printf("STOP WINNING >:(");
            printf("\nHP: %u\n",HP);
            SCORE++;
        }else{
            SetConsoleTextAttribute(hc,4);
            printf("KEEP LOSING >:)\n");
            HP--;
            printf("\nHP: %u\n",HP);
            SCORE++;
        }
    }
    //Question 7

    if(SCORE==6){
        SetConsoleTextAttribute(hc,30);
        printf("The answer is somewhere\n");
        char Q7real[]="somewhere",Q7ans[10];
        int Q7res;
        scanf("%s",Q7ans);
        Q7res=strcmp(Q7real,Q7ans);
        if(Q7res==0){
            printf("Loser!11!!1!!\n\n");
            HP--;
            printf("\n(START WINNING)!!! HP: %u\n",HP);
            printf("I dont feel so good...");
            Sleep(3000);
            printf("Shit...\n");
            Sleep(1000);
            SCORE++;
        }else{
            printf("\n(KEEP WINNING!!!) HP: %u\n",HP);
            printf("I dont feel so good...");
            Sleep(3000);
            printf("Shit...\n");
            Sleep(1000);
            SCORE++;
        }
    }
    //Question 8
    if(SCORE==7){
        system("cls");
        printf("Question: incorectness value is?\n");
        printf("w42n1n9:1nc0223c7n355537707w0\n"); 
        char Q8real[]="two",Q8ans[40];
        int Q8res;
        scanf("%s",Q8ans);
        Q8res=strcmp(Q8ans,Q8real);
        if(Q8res==0){
            printf("c0223c7\n");
            printf("\nLives till 'he' finds you: %u\n\n",HP);
            SCORE++;
        }else{
            printf("SAPPING HP ENERGY.\n");
            Sleep(4000);
            int error=1;
            for(error=1;error<3;error++){
                printf("ERROR");
                error=1;
            }
        }
    }
    
    //Question 9
    if(SCORE==8){
        printf("Question!!!:");
        char Q9Freal[]="Eoin",Q9F[5],Q9L[6],Q9Lreal[]="Colfer";
        int Q9Fres,Q9Lres;
        printf("01110100 01100101 01101110 01100010 01101001 01101100 01101110 01101001 01101101 01110111 01110111 01110111 01110011 01110000 01110100 01110100 01101000 00100000 01100011 01110010 01100101 01100001 01110100 01101111 01110010 01100100 01100101 01101110 01101111 01101101 01101001 01101110 01100001 01110100 01101001 01101111 01101110 01101111 01101110 01101100 01111001 00100000 00110000 00110111 00111000 00110110 00111000 00110000 00111000 00110000 00110001 00110010\n");
        printf("01000110 01101001 01110010 01110011 01110100 00111010 ");
        scanf("%s",Q9F);
        Q9Fres=strcmp(Q9F,Q9Freal);
        Q9Lres=strcmp(Q9L,Q9Lreal);
        if(Q9Fres==0){
            printf("\nGood.\n");
            printf("\nLives till 'he' finds you: %u\n",HP);
            SCORE++;
        }else{
            return 0;
        }
    }
    //Question 10
    if(SCORE==9){
        printf("Solve for 2x.\n");
        printf("4x=28+x\n");
        int Q10ans=16,Q10real;
        printf("2x=");
        scanf("%u",&Q10real);
        if(Q10real==16){
            printf("Perf|||||ASVXAPOIXLASFDHJKB||&@!@#()*)A(*!@)$&*$&*^||\n");
            printf("\nLives till 'he' finds you: %u\n",HP);
            SCORE++;
        }else{
            printf("...");
            HP--;
            SCORE++;
        }
    }
    //Question 11
    if(SCORE==10){
    system("cls");
    SetConsoleTextAttribute(hc,15);
    SetConsoleTextAttribute(hc,47);
    printf("WHAT THE FUCK WAS THAT.\n");
    Sleep(3000);
    printf("Oh, you're still here...\n");
    Sleep(3000);
    printf("I- I feel like something is following us...\nI know somewhere we can go that is safe...");
    int FirstOption;
    printf("\nIn front of you lies two pathways, one leading down in to a cave, and one leading to a small house atop a hill. You're not sure how you got here.\n\n");
    printf("How would you like to get to the safe place?\n");
    printf("1: Cave\n");
    printf("2: House\n");
    scanf("%u",&FirstOption);
    switch(FirstOption){
        case 1:
       system("cls");
       printf("You headed into the cave. There seems to be a secret message near by. It reads 'AVOID THE LIGHT!'.");
       printf("You can see a not-so-secret passage that leads to the exit of the cave. You must crack the code of the secret message in order to goto the next levl. The code reads as follows:\n\n11\n21\n1121\n111211\n13112211");
        Sleep(20);
        break;
        case 2:
        system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
        break;
        default:
        system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    }

    
    }
    

   //Game over function
        if(HP==0){
        printf("\n\nGAME OVER!\nFinal Score: %u\nThis file will self-destruct in 10 seconds :)\n", SCORE);
        Sleep(10000);
        return 0;
        }
}
}