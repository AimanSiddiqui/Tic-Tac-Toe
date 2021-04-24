#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int check_win();
void pf();
void check_box1(char skill);
void check_box2(char skill);
//prototyping functions
char game[3][3];
//making game a global variable of an array.
int main()
{
	int i,col=3,j,ans,a;
	char skill,skill2,k;
	
	printf("\t\t.......TIC TAC TOE.......\t\t\n\n\n");
	for(i=0,k='1';i<3;i++,k++)
	//declaring the positions of the places to be marked.
	{
		if(k>'1')
		k=k-1;
		for(j=0;j<3;j++,k++)
		{
			game[i][j]=k;
			
		}
	}
	pf();
	//printing the game view box with positions written.
	for(i=1;i<=4;i++)
	{
		printf("Player 1 it is your turn, please enter the position:  ");
		scanf(" %c",&skill);
		//first player will enter his turn position.
		check_box1(skill);
		//the position will then be checked and at that position of the array the mark of player 1 will be placed.
		printf("\n");
		pf();
		printf("\n");
		a=check_win();
		if(a==2)
		break;
		//this function willl check if this player has won or not.
		
		printf("\n");
		printf("Player 2 it is your turn, please enter the position:  ");//similar steps will be with player 2.
		scanf(" %c",&skill2);
		check_box2(skill2);
		printf("\n");
		pf();
		printf("\n");
		a=check_win();
		if(a==2)
		break;
		printf("\n\n");
		if(i==4)
		{
			printf("Player 1 it is your turn, please enter the position:  ");
		scanf(" %c",&skill);
		//first player will enter his turn position.
		check_box1(skill);
		//the position will then be checked and at that position of the array the mark of player 1 will be placed.
		printf("\n");
		pf();
		printf("\n");
		a=check_win();
		if(a==2)
		break;
		}
		if(i==4&&(a)!=2)
		{
			printf("Draw!......No one wins!");
			break;
		}
		
		
		
	}
	
}

void pf(void)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("| %c |",game[i][j]);
		}
		printf("\n");
	}
}
void check_box1(char skill)
{
	
		if(skill=='1')
		{
			game[0][0]='O';
		}
		else if(skill=='2')
		{
			game[0][1]='O';
		}
		else if(skill=='3')
		{
		    game[0][2]='O';
		}
		else if(skill=='4')
		{
			game[1][0]='O';
		}
		else if(skill=='5')
		{
			game[1][1]='O';
		}
		else if(skill=='6')
		{
			game[1][2]='O';
		}
		else if(skill=='7')
		{
			game[2][0]='O';
		}
		else if(skill=='8')
		{
			game[2][1]='O';
		}
		else if(skill=='9')
		{
			game[2][2]='O';
		}
		
	}

void check_box2(char skill)
{
	
		if(skill=='1')
		{
			game[0][0]='X';
		}
		else if(skill=='2')
		{
			game[0][1]='X';
		}
		else if(skill=='3')
		{
		    game[0][2]='X';
		}
		else if(skill=='4')
		{
			game[1][0]='X';
		}
		else if(skill=='5')
		{
			game[1][1]='X';
		}
		else if(skill=='6')
		{
			game[1][2]='X';
		}
		else if(skill=='7')
		{
			game[2][0]='X';
		}
		else if(skill=='8')
		{
			game[2][1]='X';
		}
		else if(skill=='9')
		{
			game[2][2]='X';
		}
		
	}
int check_win()
{
	int a;
	 if(game[0][1]=='O' && game[0][0]=='O' && game[0][2]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[1][1]=='O' && game[1][0]=='O' && game[1][2]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[2][1]=='O' && game[2][0]=='O' && game[2][2]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[0][1]=='O' && game[1][1]=='O' && game[2][1]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[1][0]=='O' && game[0][0]=='O' && game[2][0]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 
	 }if(game[0][2]=='O' && game[1][2]=='O' && game[2][2]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[0][0]=='O' && game[1][1]=='O' && game[2][2]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[0][2]=='O' && game[1][1]=='O' && game[2][0]=='O')
	 {
	 	printf("\t\t...........Player 1 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 //now for player 2
	 
	 
	 if(game[0][1]=='X' && game[0][0]=='X' && game[0][2]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[1][1]=='X' && game[1][0]=='X' && game[1][2]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[2][1]=='X' && game[2][0]=='X' && game[2][2]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[0][1]=='X' && game[1][1]=='X' && game[2][1]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[1][0]=='X' && game[0][0]=='X' && game[2][0]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 
	 }if(game[0][2]=='X' && game[1][2]=='X' && game[2][2]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[0][0]=='X' && game[1][1]=='X' && game[2][2]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=2;
	 	return(a);
	 }
	 if(game[0][2]=='X' && game[1][1]=='X' && game[2][0]=='X')
	 {
	 	printf("\t\t...........Player 2 wins!...........\n\t\t\tCongratulations!");
	 	a=3;
	 	return(a);
	 }
	 else
	 {
	 	a=3;
	 	return(a);
	 }
	 
}
