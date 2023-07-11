/*You decide to bet on the final match of the Tug of War National Championship. 

Prior to the match the names and weights of the players are presented, alternating 
by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the 
same number of players on each side. You record the player weights as they are presented 
and calculate a total weight for each team to inform your bet. You write a C program to 
assist with this.

Your program should first read an integer indicating the number of members per team. Then, 
the program should read the player weights (integers representing kilograms) alternating by team. 

After calculating the total weight of each team, the program should display the text "Team X has an advantage" 
(replacing X with 1 or 2 depending on which team has a greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight of team 1, then 
"Total weight for team 2:" followed by the weight of team 2 (see example below).

You are guaranteed that the two teams will not have the same total weight.
 */

#include <stdio.h>
int main(void){
    int numMember,weight1,weight2;
    int i,sum1,sum2;
    sum1=0;
    sum2=0;
    int advantage=1;
    
    // input the number of team member
    scanf("%d",&numMember);
    
    //input the weights of team members
    for(i=0; i<numMember; i++){
        scanf("%d%d",&weight1,&weight2);
            sum1 +=weight1;
            sum2 +=weight2;
    }
    
    if(sum1>sum2) printf("Team %d has an advantage\n",advantage);
    else{
        advantage=2; printf("Team %d has an advantage\n",advantage);
    }
    
    printf("Total weight for team 1: %d\n",sum1);
    printf("Total weight for team 2: %d\n",sum2);
    
    return 0;
}