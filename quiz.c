#include<stdio.h>
int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    printf("<press 7 to start the game\n");
    printf("<press 0 to end the game\n");
    scanf("%d",&i);

    if (i==7){
        printf("The game has started\n");}

        else if(i==0){
            printf("The game has ended\n");

        }
        else{
            printf("Invalid\n\n");
        }

    if(i==7){
        printf("1) A bipolar junction transistor in active region behaves closest to:\n");
        printf("1) voltage controlled voltage source\n");
        printf("2) current controlled voltage source\n");
        printf("3) voltage controlled current source\n");
        printf("4) current controlled voltage source\n");

        printf("please enter ur answeer\n");
        scanf("%d",&ans1);

        if(ans1==3){
            printf("correct answer\n");
            point1=5;
            printf("you have scored %d\n",point1);
        }
        else{
            printf("wrong answer\n");
            point01=0;
            printf("you have scored %d\n",point01);
        }
        printf("2) Which of the following is a characteristic of an embedded system?\n");
        printf("1) High processing power and multitasking\n");
        printf("2) Real-time operation with dedicated function\n");
        printf("3) Easily reprogrammable by the user\n");
        printf("4) Always connected to the internet\n");

        printf("please enter ur answeer\n");
        scanf("%d",&ans2);

        if(ans2==2){
            printf("correct answer\n");
            point2=5;
            printf("you have scored %d\n",point2);
        }
        else{
            printf("wrong answer\n");
            point02=0;
            printf("you have scored %d\n",point02);
        }
        printf("3) A bipolar junction transistor in active region behaves closest to:\n");
        printf("1) voltage controlled voltage source\n");
        printf("2) current controlled voltage source\n");
        printf("3) voltage controlled current source\n");
        printf("4) current controlled voltage source\n");

        printf("please enter ur answeer\n");
        scanf("%d",&ans3);

        if(ans3==3){
            printf("correct answer\n");
            point3=5;
            printf("you have scored %d\n",point3);
        }
        else{
            printf("wrong answer\n");
            point03=0;
            printf("you have scored %d\n",point03);
        }
        printf("4) A bipolar junction transistor in active region behaves closest to:\n");
        printf("1) voltage controlled voltage source\n");
        printf("2) current controlled voltage source\n");
        printf("3) voltage controlled current source\n");
        printf("4) current controlled voltage source\n");

        printf("please enter ur answeer\n");
        scanf("%d",&ans4);

        if(ans4==3){
            printf("correct answer\n");
            point4=5;
            printf("you have scored %d\n",point4);
        }
        else{
            printf("wrong answer\n");
            point04=0;
            printf("you have scored %d\n",point04);
        }
        printf("5) A bipolar junction transistor in active region behaves closest to:\n");
        printf("1) voltage controlled voltage source\n");
        printf("2) current controlled voltage source\n");
        printf("3) voltage controlled current source\n");
        printf("4) current controlled voltage source\n");

        printf("please enter ur answeer\n");
        scanf("%d",&ans5);

        if(ans5==3){
            printf("correct answer\n");
            point5=5;
            printf("you have scored %d\n",point5);
        }
        else{
            printf("wrong answer\n");
            point05=0;
            printf("you have scored %d\n",point05);
        }


    }
     total1=point1+point2+point3+point4+point5;
     printf("your total score is %d",total1);

     


    
}