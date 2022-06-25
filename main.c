#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
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


=======
struct Batsman
{
    char name[20];
    int run,over,ones,twos,threes,four,six,balls_played;

};
struct Bowler
{
    char name[20];
    int total_runs_given,overs,wickets;
};

>>>>>>> ad1c5c07d3c194113ad03ddb472e719b63d19cb9
int main()
{
    printf("\t\t\t\t\tProject in C\t\t\t\t\n");
    printf("\t\t=======================Cricket Score Management System==============================\t\t\n");
    printf("\tIn This Project,We will manage whole Score System including runs,overs,wickets,Batsman details and Bowler details\n");

    int i,j,m,n;
     printf("Enter the Batsman Details:\n");
     printf("Enter the number of Batsman:\n");
     scanf("%d",&m);
     struct Batsman bt[12];
     for ( i = 0; i <=m; i++)
     {
        printf("Enter the name of batsman %d\n",i+1);
        scanf("%s",bt[i]);
        printf("Enter the one made by batsman %d\n",i+1);
        scanf("%d",&bt->ones);
        printf("Enter the two made by batsman %d\n", i + 1);
        scanf("%d", &bt->twos);
        printf("Enter the three made by batsman %d\n", i + 1);
        scanf("%d", &bt->threes);
        printf("Enter the four made by batsman %d\n", i + 1);
        scanf("%d", &bt->four);
        printf("Enter the six made by batsman %d\n", i + 1);
        scanf("%d", &bt->six);
        printf("Enter the total numbers of ball played by batsman %d\n",i+1);
        scanf("%d",&bt->balls_played);
     }

     printf("Enter the total number of Bowlers:\n");
     scanf("%d",&n);
     printf("Enter the Bowler details:\n");
     struct Bowler bwl[10];
     for ( j = 0; j<=n; i++)
     {
        printf("Enter the name of Bowler %d",j+1);
        scanf("%s",bwl[i]);
        printf("Enter the runs given by bowler %d",j+1);
        scanf("%d",&bwl->total_runs_given);
        printf("Enther the overs bowled by bowler %d",j+1);
        scanf("%d",bwl->overs);
        printf("Enter the total wickets taken by bowler %d",j+1);
        scanf("%d",&bwl->wickets);
     }

     int choice,player_no;
     while (choice<=4)
     {

        printf("Please enter your choice:\n 1)Batsman details:\n 2)Bowler details:\n 3)Match Details:\n 4)records:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           printf("Enter the batsman number to see his details:");
           scanf("%d",&player_no);
           player_no--;
           printf("                          Player Detail\n");
           printf("-----------------------------------------------------------------------------\n");
           printf("  Batsman      runs      balls      four     six     threes     twos     ones");
           printf("------------------------------------------------------------------------------\n");

            break;

        default:
            break;
        }
     }






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
