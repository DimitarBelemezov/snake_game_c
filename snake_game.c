#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int x=50;
int temp_x;
int y=30;
int temp_y;
char field[x][y];
int direction;
void boarder();
void move();
void print_field();
void up();
void down();
void left();
void right();

int main(int argc, char const *argv[])
{
	boarder();
	move();
	system("pause");
}

void boarder(){
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			if (i==0)
			{
				field[i][j]='*';
			}
			else if ((i>0)&&((j==0)||(j%49==0)))
			{
				field[i][j]='*';
			}
			else if((i==29)){
				field[i][j]='*';
			}
			else{
				field[i][j]=' ';
			}
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		if (i%4==0&&i!=0)
		{
			field[(x/2)][(y/2)+i]='>';
		}
		else{
			field[(x/2)][(y/2)+i]='-';
		}	
	}
	temp_x=x/2;
	temp_y=y/2;
	print_field();
}
void print_field(){
	for (int i = 0; i < 30; ++i)
	{
		for (int j = 0; j < 50; ++j)
		{
			printf("%c", field[i][j]);
			if (j==49)
			{
				printf("\n");
			}
		}
	}
}
void move(){
	direction=getch();
	do{
		switch(direction)
		{
		case 72:   up();   break; //up
		case 80:   down();  break; //down
		case 75:   left();  break; // left
		case 77:   right();  break; //right
		};
	}	
	while(1);
} 

void up(){
	for(;;){

	}
}

void down(){

}

void left(){

}

void right(){
	for (int i = 0; i < 5; ++i)
	{
		field[temp_x][temp_y+i+1]=field[temp_x][temp_y-i-1]		
	}
}