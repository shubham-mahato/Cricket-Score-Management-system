#include <stdio.h>
#include <stdlib.h>

struct batsman
{
    char name[11];
    // name here represent name of batsman   
    int sc;
    // sc represent total score scored by batsman
    int bp;
    // bp represent balls played
    float st;
    // st represent strike rate 
    
};


int main()
{
    printf("\t\t\t\t\tProject in C\t\t\t\t\n");
    printf("\t\t=======================Cricket Score Management System==============================\t\t\n");
    printf("\tIn This Project,We will manage whole Score System including runs,overs,wickets,Batsman details and Bowler details\n");


struct batsman details[11];

for (int i = 0; i < 12; i++)
{
    printf("enter the detail of player ");

    scanf("%s",details[i].name);

    scanf("%d",&details[i].sc);

    scanf("%d",&details[i].bp);

    scanf("%f",&details[i].st);

    if (details[i].bp==0)
    {
        break ;
    }
    

}


 return 0;
}
