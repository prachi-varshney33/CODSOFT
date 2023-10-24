#include <iostream>
#include <vector>
using namespace std;

// Function to display the Tic-Tac-Toe board.
void displayBoard(const vector<vector<char>> &board)
{
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won.
bool checkWin(const vector<vector<char>> &board, char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true; // Horizontal win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return true; // Vertical win
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return true; // Diagonal win (top-right to bottom-left)
    }
    return false;
}

int main()
{
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int row, col;
    int moves = 0;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (true)
    {
        displayBoard(board);

        cout << "Player " << currentPlayer << ", enter row (1-3) and column (1-3): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ')
        {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;
        moves++;

        if (checkWin(board, currentPlayer))
        {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }
        else if (moves == 9)
        {
            displayBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}