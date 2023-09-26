#include <iostream>
#include <ctime>

void drawBoard(char *board);
void playerTurn(char *board, char player);
void computerTurn(char *board, char computer);
bool checkWinner(char *board, char player, char computer);
bool checkTie(char *board, char player, char computer);

int main()
{
    char board[9] = {
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
    };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(board);
    while (running)
    {
        playerTurn(board, player);
        drawBoard(board);
        computerTurn(board, computer);
        drawBoard(board);
        if (checkWinner(board, player, computer))
        {
            running = false;
            std::cout << "Thanks for playing <3 !!!\n";
            break;
        }
    }

    return 0;
}

void drawBoard(char *board)
{
    std::cout << "\n";
    std::cout << "         |         |          "
              << "\n";
    std::cout << "    " << board[0] << "    |    " << board[1] << "    |    " << board[2] << "    "
              << "\n";
    std::cout << "_________|_________|__________"
              << "\n";
    std::cout << "         |         |          "
              << "\n";
    std::cout << "    " << board[3] << "    |    " << board[4] << "    |    " << board[5] << "    "
              << "\n";
    std::cout << "_________|_________|__________"
              << "\n";
    std::cout << "         |         |          "
              << "\n";
    std::cout << "    " << board[6] << "    |    " << board[7] << "    |    " << board[8] << "    "
              << "\n";
    std::cout << "         |         |          "
              << "\n";
    std::cout << "\n";
}
void playerTurn(char *board, char player)
{
    int guess;
    do
    {
        std::cout << "Place Your Spot ( 1 - 9 ) # ";
        std::cin >> guess;
        guess--;
        if (board[guess] == ' ')
        {
            board[guess] = player;
        } else {
            std::cout << "Board you choose are occupied!" << "\n";
            guess = -1;
        }
    } while (guess < 0 || guess > 8);
}
void computerTurn(char *board, char computer){
    int guess;
    srand(time(0));
    while (true) 
    {
        guess = rand() % 9;
        if (board[guess] == ' ')
        {
            board[guess] = computer;
            break;
        }
    }
}
bool checkWinner(char *board, char player, char computer){
    if ((board[0] != ' ') && board[0] == board[1] && board[1] == board[2] )
    {
        board[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[3] != ' ') && board[3] == board[4] && board[4] == board[5] )
    {
        board[3] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[6] != ' ') && board[6] == board[7] && board[7] == board[8] )
    {
        board[6] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[0] != ' ') && board[0] == board[3] && board[3] == board[6] )
    {
        board[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[1] != ' ') && board[1] == board[4] && board[4] == board[7] )
    {
        board[1] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[2] != ' ') && board[2] == board[5] && board[5] == board[8] )
    {
        board[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[0] != ' ') && board[0] == board[4] && board[4] == board[8] )
    {
        board[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    if ((board[2] != ' ') && board[2] == board[4] && board[4] == board[6] )
    {
        board[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
        return true;
    }
    return false;
}
bool checkTie(char *board, char player, char computer){
return false;
}