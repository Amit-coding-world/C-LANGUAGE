#include<stdio.h>
// 1. wap to calculate the sum of two matrices each of order  3*3.
void f1()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the 9 nos of first matrix=");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    printf("enter the 9 nos of second matrix=");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
    
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            c[i][j]=a[i][j]+b[i][j];
    printf("sum of matrixis :\n");
    for(i=0;i<=2;i++)
        for(i=0;i<=2;i++)
            printf("%d",c[i][j]);
        printf("\n");

}


// 2. wap to calculate the product of two matrices each of order  3*3.
void f2()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("enter the 9 numberin first matrix=");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    printf("enter the 9numberin second matrix=");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]); 
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            for(k=0,sum=0;k<=2;k++)
                sum=sum+a[i][j]*b[i][j];
            c[i][j]=sum;

    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    
}

// 3. wap to print the transpose of given matrix.
void f3()
{
    int a[3][3],j,k,i,temp;
    printf("enter 9 number in the matrix=");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    for(i=0,j=1,k=1;k<3;k++)
    {
        temp=a[i][j];
        a[i][j]=a[j][k];
        a[j][i]=temp;
        if(j-i==1)
            j++;
        else
            i++;
    }
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            printf("%d\t",a[i][j]);
}

// 4. four players are playing a tournament of chess with round robin method(each player will play with every player).
//         each win has 2 points , draw has 1 points and loose has 0 points. declare a score_board two dimensional array to store
//         the scores of the player agains each player.
void f4()
{
    int score_board[4][4]={0};
}
// 5. for q-4 define a function to update score_board after each match result.
void update_score_board(int p1, int p2 ,int result,int score_board[][4])
{
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;
}
// 6. for q-4 define a function to display score_board .
void display_score_board(int score_board[][4])
{
    int i,j;
    printf("\n score board\n");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            printf("%d",score_board[i][j]);
        printf("\n");
}
// 7. for q-4 define a function which returns the score of a specific players.
int get_player_score(int player,int score_board[][4]
{
    int j,sum=0;
    for(j=0;j<=3;j++)
        sum=score_board[player][j];
    return sum;
})
// 8. for q-4 define a function to find the winner of the tournament.
int find_winner(int score_board[][4])
{
    int player,score,winner;
    player=0;
    winner=player;
    score=get_player_score(player,score_board);
    for(++player;player<=3;player++)
        s1=get_player_score(player,score_board);
        if(score<s1)
        {
            winner=player;
            score=s1;
        }
    return winner;
}
// 9. for q-4 define a function to display rank of the players.

// 10. for q-4 define a function to run tournament,in which user has to enter result of each game and update score board using  score_board function.
int main()
{
    // f1();
    // f2();
    // f3();
    printf("\n");
    return 0;
}