#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct batsman
{
    char name[100];
    // name here represent name of batsman   
    char sc[50][200];
    // sc represent total score scored by batsman
    int bp;
    // bp represent balls played
    float st;
    // st represent strike rate 
    
};



int main(){

    char b[3] = "B";//bold
    char co[3] = "CO";//catchout
    char RO[3] = "RO";//runout
    char sto[4] = "STO";//stumpout
    char nb[3]  = "NB";//no ball
    char db[3]  = "DB";// death ball
    char wd[3]  =  "WD";// wide

    int B , CO , ROU , STO , NB , DB , WD ;

    int end , i;

struct batsman details[11];

for (int i = 0; i < 11; i++)
{
    printf("enter the detail of player ");

    scanf("%s",details[i].name);

    // scanf("%d",&details[i].sc);

    // scanf("%d",&details[i].bp);

    // scanf("%f",&details[i].st);

    if (details[i].bp==0)
    {   
        end=i;
        break ;
    }
    

}

// struct scorecard
// {
//     int score ;

// };

    int n ;
    printf("enter no. of overs \n");
    scanf("%d",&n);

   char arr[n][6];

printf("enter run scored per ball");

for (int i = 1; i <= (n); i++)
{
     printf("over no %d",i) ;

    for (int j = 1; j <= 6; j++)
    {
        scanf("%s",arr[i][j]);
    }
    printf("\n");
}

struct runs
{
    int runs ;
    int four ;
    int six ;

    struct batsman details[11];

};
int sum , sum6 , sum4 , sum1 ,sum2 , sum3 ;
int six , four , one , two , three ;

struct runs players[11];

for (int i = 0; i < 11; i++)
{
    if (details[i].bp!=0)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
               
                //   B = strcmp(arr[j][k],"B");
                //   CO= strcmp(arr[j][k],"CO");
                //   RO = strcmp(arr[j][k],"RO");
                //   STO = strcmp(arr[j][k],"STO");
                //   NB  = strcmp(arr[j][k],"NB");
                //   WD  = strcmp(arr[j][k],"WD");
                //   DB  = strcmp(arr[j][k],"DB");
                if (arr[j][k]!=b[k]||arr[j][k]!=co[k]||arr[j][k]!=RO[k]||arr[j][k]!=sto[k])
                {
                       if (arr[j][k]==6)
                    {
                        players[i].details[i].sc[j][k]=6 ;

                     }

                    else if (arr[j][k]==4)
                     {
                        players[i].details[i].sc[j][k]=4;
                     }
                     
                    else if (arr[j][k]==2)
                     {
                        players[i].details[i].sc[j][k]=2;
                     }
                     
                    else if (arr[j][k]==3)
                     {
                       players[i].details[i].sc[j][k]=3;
                     }

                     else if (arr[j][k]==1)
                     {
                        players[i].details[i].sc[j][k]=1;

                        i++;
                     }

                     else{
                        players[i].details[i].sc[j][k]=0;
                     }
                     
                     
                }

                else{
                    break;
                }
                

                    
                  
                   
              
            }
            
        }
        
    }
    
}





 return 0;
}
