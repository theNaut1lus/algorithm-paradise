#include <iostream>
using namespace std;

char player1 = 'X';
char comp = 'O';
bool winP = false;
bool winC = false;
int INFINITY = 32766;

int checkWin(char board[9])
{
//conditons for winning rows
  for(int i = 0;i<7;i=i+3)
  {
    if(board[i]==board[i+1] && board[i]==board[i+2] && board[i]=='X')
    {
        winP = true;
        return (-10);
    }
    if(board[i]==board[i+1] && board[i]==board[i+2] && board[i]=='O')
    {
        winC =true;
        return (+10);
    }
  }

  //conditons for winning column
  for(int i = 0;i<3;i++)
  {
    if(board[i]==board[i+3] && board[i]==board[i+6] && board[i]=='X')
    {
        winP = true;
        return (-10);
    }
    if(board[i]==board[i+3] && board[i]==board[i+6] && board[i]=='O')
    {
        winC = true;
        return (+10);
    }

  }
  //conditons for winning diagonal
  if(board[0]==board[4] && board[0]==board[8] && board[0]=='X')
  {
      winP = true;
      return (-10);
  }
  if(board[0]==board[4] && board[0]==board[8] && board[0]=='O')
  {
      winC = true;
      return (+10);
  }

  if(board[2]==board[4] && board[4]==board[6] && board[2]=='X')
  {

      winP = true;
      return (-10);
  }
  if(board[2]==board[4] && board[4]==board[6] && board[2]=='O')
  {
      winC = true;
      return (+10);
  }

  return 0;
}

bool checkFull(char board[9])
{
  for(int i = 0;i<9;i++)
  {
    if(board[i] == '_')
      return false;
  }
  return true;
}

int MiniMax(char board[9],bool turnC)
{
  int val = checkWin(board);
  if(val == 10 || val == -10)
    return val;

  if(checkFull(board))
    return 0;


  if(turnC)
  {
    int bestValue = -INFINITY;
    for(int i = 0;i<9;i++)//this loop is iterating all the combinations
    {
      if(board[i] == '_')//if i position is empty then..
      {
        board[i]='O';//we are assuming that this turn is bestMove
        int currentValue = MiniMax(board,!turnC); //MiniMax is returning the cost of current assumption and pass the turn of computer as "false" as he has played his turn

        if(currentValue > bestValue)//in case current is better then we store the position
        {
          bestValue = currentValue;
        }
        board[i]='_';//undoing the assumption so that next iterations do not include this assumption
      }
    }

    return bestValue;
  }
  if(!turnC)
  {
    int bestValue = INFINITY;
    for(int i = 0;i<9;i++)//this loop is iterating all the combinations
    {
      if(board[i] == '_')//if i position is empty then..
      {
        board[i]='X';//we are assuming that this turn is bestMove
        int currentValue = MiniMax(board,!turnC);
        if(currentValue < bestValue)//in case current is better then we store the position
        {
          bestValue = currentValue;
        }
        board[i]='_';//undoing the assumption so that next iterations do not include this assumption
      }
    }

    return bestValue;
  }
}

int getMove(char board[9])
{
  int bestMove = -1;
  int bestValue = -INFINITY;

  for(int i = 0;i<9;i++)//this loop is iterating all the combinations
  {
    if(board[i] == '_')//if i position is empty then..
    {
      board[i]='O';//we are assuming that this turn is bestMove
      int currentValue = MiniMax(board,false); //MiniMax is returning the cost of current assumption and pass the turn of computer as "false" as he has played his turn

      if(currentValue > bestValue)//in case current is better then we store the position
      {
        bestMove = i;
        bestValue = currentValue;
      }
      board[i]='_';//undoing the assumption so that next iterations do not include this assumption
    }
  }

  return bestMove;
}
void display(char board[9])
{

  cout << endl;

  cout << "     |     |     " << endl;
  cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << endl;

  cout << "     |     |     " << endl << endl;

}

int main()
{
  char board[9];
  for(int i = 0;i<9;i++)
  {
    board[i]='_';
  }
  int position;///position value starts from 1 and to take user input
  display(board);
  int i;
  for(i = 0;i<5;i++)//this loop is for taking the input from user and he can at max give 5 input as he starts the game.
  {
    if(!winP && !winC)//checking if either winC or winP has won
    {
      cout<<"\nYour turn : ";
      cin>>position;
      //
      system ("CLS");

      if(board[position-1]=='_' && position <=9 && position >= 1)
      {
        board[position-1] = 'X';
        int position2 = getMove(board);//getMove function is returning the position of computer's move
        board[position2] = 'O';//filling the position
        display(board);
      }

      else
      {
        cout<<"enter a valid turn\n\n";
        i--;//this is done so that this turn of the loop is redone
        display(board);
      }
    }
    else
    {
      if(winC)
        cout<<endl<<"Computer won the match";
      else if(winP)
        cout<<endl<<"You Win";
      break;//abnormal termination of for loop in case anyone wins the match
    }
    winC = false;
    winP = false;
    checkWin(board);

  }
if(i == 5)//normal termination of for loop means the match is draw
{
    cout << "\nMATCH DRAW";
}

  //now to play again we check the condition that either players have won or not or the board is full
if(winC == true || winP == true || checkFull(board))
{

  cout<<"\n\nwant to play again? -- \n press Y for YES else press anything...\n--->";
  char play;
  cin>>play;
  if(play == 'Y' || play == 'y')
  {
    winC = false;//to replay the match both winC and winP must be false
    winP = false;
    main();
  }
}
  return 0;
}
