#include <stdlib.h>
#include <stdio.h>

#define HOEHE 20
#define BREITE 40

char board[HOEHE][BREITE] = {"############################", "#                            #", "#                              #"};

void show_game_board()
{
    for(int y = 0; y < HOEHE; y++)
    {
        for(int x = 0; x < BREITE; x++)
        {
            printf("%c", board[y][x]);
        }
        printf("\n");
    }
}

/*void show_game_board1(char board[HOEHE][BREITE])
{
    for(int y = 0; y < HOEHE; y++)
    {
            printf("%s", board[y]);
            printf("\n");
    }
}*/

void init_board()
{
    for(int y = 0; y < HOEHE; y++)
    {
        for(int x = 0; x < BREITE; x++)
        {
            if(y == 0 || y == (HOEHE - 1) || x == 0 || x == (BREITE - 1))
            board[y][x] = '#';
            else
            board[y][x] = ' ';
        }
    }

}

void add_single_block()
{
    int Y = rand() % HOEHE, X = rand() % BREITE, blkGr = rand() % (6-3+1) + 3;
    for(int y = Y; y < Y+blkGr; y++)
    {
        for(int x = X; x < X+blkGr; x++)
        {
            if(y < HOEHE && x < BREITE)
            board[y][x] = '#';
        }
    }
}

int main()
{
    //char board1[HOEHE][BREITE]= {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '\0'}, {'#', ' ', ' ', ' ', ' ', ' ', '#', '\0'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '\0'}};
    srand(time(NULL));
    init_board();
    for(int i = 0; i < 20; i++)
    {
        add_single_block();
    }
    show_game_board();
    //show_game_board1(board1);
}