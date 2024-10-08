#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*the following variables are for the for loops I used to create the multiplication table*/
int mult_1;
int mult_2 ;
int mult_3;
int mult_4;
int mult_5;
int mult_6;
int mult_7;
int mult_8;
int mult_9;
int mult_10;
int mult_11;
int mult_12;

 int main(void){
 /*the next 12 for loops are used to create the multiplication table in a square shape as provided in the homework pdf*/

printf("Multiplication Table:\n");
for (mult_1 = 1; mult_1 <= 12; mult_1++){
 printf("%4d",mult_1);
 if (mult_1 == 12){
    printf("\n");
    break;
 }
     }


for (int i = 1; i < 13; i++){
    mult_2= 2;
    mult_2 = mult_2 * i;
    printf("%4d",mult_2);
    if(mult_2 == 24){
        printf("\n");
    }
    if(mult_2 == 26){
        break;
    }
}


for (int i = 1; i < 13; i++){
    mult_3= 3;
    mult_3 = mult_3 * i;
    printf("%4d",mult_3);
    if(mult_3 == 36){
        printf("\n");
    }
    if(mult_3== 39){

        break;
    }
}


for (int i = 1; i < 13; i++){
    mult_4= 4;
    mult_4 = mult_4 * i;
    printf("%4d",mult_4);
    if(mult_4 == 48){
        printf("\n");
    }
    if(mult_4== 52){

        break;
    }
}


for (int i = 1; i < 13; i++){
    mult_5= 5;
    mult_5 = mult_5 * i;
    printf("%4d",mult_5);
    if(mult_5 == 60){
        printf("\n");
    }
    if(mult_5== 65){

        break;
    }
}

for (int i = 1; i < 13; i++){
    mult_6= 6;
    mult_6 = mult_6 * i;
    printf("%4d",mult_6);
    if(mult_6 == 72){
        printf("\n");
    }
    if(mult_6== 78){

        break;
    }
}

for (int i = 1; i < 13; i++){
    mult_7= 7;
    mult_7 = mult_7 * i;
    printf("%4d",mult_7);
    if(mult_7 == 84){
        printf("\n");
    }
    if(mult_7== 91){

        break;
    }
}


for (int i = 1; i < 13; i++){
    mult_8= 8;
    mult_8 = mult_8 * i;
    printf("%4d",mult_8);
    if(mult_8 == 96){
        printf("\n");
    }
    if(mult_8== 104){

        break;
    }
}


for (int i = 1; i < 13; i++){
    mult_9= 9;
    mult_9 = mult_9 * i;
    printf("%4d",mult_9);
    if(mult_9 == 108){
        printf("\n");
    }
    if(mult_9== 117){

        break;
    }
}

for (int i = 1; i < 13; i++){
    mult_10= 10;
    mult_10 = mult_10 * i;
    printf("%4d",mult_10);
    if(mult_10 == 120){
        printf("\n");
    }
    if(mult_10== 130){

        break;
    }
}




for (int i = 1; i < 13; i++){
    mult_11= 11;
    mult_11 = mult_11 * i;
    printf("%4d",mult_11);
    if(mult_11 == 132){
        printf("\n");
    }
    if(mult_11== 143){

        break;
    }
}


for (int i = 1; i < 13; i++){
    mult_12= 12;
    mult_12 = mult_12 * i;
    printf("%4d",mult_12);
    if(mult_12 == 144){
        printf("\n");
        printf("\n");
    }
    if(mult_12== 156){

        break;
    }
}




srand(time(0));/*I found that every time i run the program the winning number would always be 2 so I searched online and found that using that line here seeds the rand() function making it have a new value each team*/
int guessAnswer = (rand() % 144) + 1; /*random number generator variable*/

int user_input;/*variable to store user input*/

while (user_input != guessAnswer){/*while loop used to create a mini guessing game by taking user input and comparing it to the guessanswer variable which is randomly
        generated then if the number is lower than the winning number it prints too low if it's the other way it prints too high until the user inputs the winning number*/
printf("Enter Your Guess (1-144):\n");
        scanf("%d",&user_input);


    if (user_input < guessAnswer){
        printf("Too Low!\n");


    }
     if (user_input > guessAnswer){
        printf("Too high!\n");

    }
     if (user_input == guessAnswer){
        printf("You Guessed It!\n");
        break;
    }

}















 }
