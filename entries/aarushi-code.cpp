#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

class player{
public:
char label;
void makeMove(char playerLabel);
void checkWin(int lastRow,int lastCol);
};

player human,computer;
bool gameOver = false;
char mat[3][3];
void checkGameOver();
void printMat();

int main(){
char lab;
cout<<"Player choose label (X or O) : ";

cin>>lab;

if(lab == 'O' || lab == 'o'){
human.label = 'O';
computer.label = 'X';
}else{
human.label = 'X';
computer.label = 'O';
}

int j=1;

cout<<"\n\nPOSITION MATRIX :\n\n";  
for(int i =0;i<3;i++){
for(int k =0;k<3;k++){
	cout<<setw(3)<<j<<" ";
	
	j++;
}
	cout<<"\n\n";
}



while(!gameOver){
	human.makeMove(lab);
	checkGameOver();	
	if(gameOver == true){
		printMat();
		break;
	}
	computer.makeMove(lab);
	checkGameOver();	
	printMat();		
	
}

return 0;
}

void printMat(){
	cout<<"\nMaTrix is : \n";
	for(int i =0;i<3;i++){
	for(int k =0;k<3;k++){
		cout<<setw(3)<<mat[i][k]<<" ";

	}
		cout<<"\n\n";
	}
}

void checkGameOver(){
int counter =0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(mat[i][j] == 'X' || mat[i][j] == 'O'){
				counter++;		
			}
		}
	}

	if(counter == 9){
		gameOver = true;
	}
}


void player::makeMove(char playerLabel){
if(label == playerLabel){
	cout<<"PLAYER 1 : Enter position (1 to 9) where you want to insert label : ";
	int pos;
	cin>>pos;
	while(!(pos>=1 && pos<=9)){
		cout<<"\nWrong Position Entered,Enter position (1 to 9) where you want to insert label : ";
		cin>>pos;
	}

	bool locFound = false;	
	while(!locFound){
		int row = (pos-1)/3,col = (pos-1)%3;
		if(mat[row][col] != 'X' && mat[row][col] != 'O'){
			mat[row][col] = label;
			locFound = true;	
			checkWin(row,col);			
		}else{
			cout<<"\nLocation Already Filled !\nEnter new Pos : ";
			cin>>pos;
			while(!(pos>=1 && pos<=9)){
				cout<<"\nWrong Position Entered,Enter position (1 to 9) where you want to insert label : ";
				cin>>pos;
			}
		}
	}

		
}else{
/*	int comp_pos = rand() % 9;
	bool locFound = false;	
	while(!locFound){
		int row = comp_pos/3,col = comp_pos%3;
		if(mat[row][col] != 'X' && mat[row][col] != 'O'){
			mat[row][col] = label;
			locFound = true;		
			checkWin(row,col);		
		}else{
			comp_pos = rand() % 9;
		}
	}*/
	cout<<"PLAYER 2 : Enter position (1 to 9) where you want to insert label : ";
	int pos;
	cin>>pos;
	while(!(pos>=1 && pos<=9)){
		cout<<"\nWrong Position Entered,Enter position (1 to 9) where you want to insert label : ";
		cin>>pos;
	}

	bool locFound = false;	
	while(!locFound){
		int row = (pos-1)/3,col = (pos-1)%3;
		if(mat[row][col] != 'X' && mat[row][col] != 'O'){
			mat[row][col] = label;
			locFound = true;	
			checkWin(row,col);			
		}else{
			cout<<"\nLocation Already Filled !\nEnter new Pos : ";
			cin>>pos;
			while(!(pos>=1 && pos<=9)){
				cout<<"\nWrong Position Entered,Enter position (1 to 9) where you want to insert label : ";
				cin>>pos;
			}
		}
	}

}


}


void player::checkWin(int lastRow,int lastCol){

	
	int win =0;
	//checking same row
	for(int i = 0;i<3;i++){
		if(mat[lastRow][i] == label){
			win++;		
		}	
	}
	if(win == 3){
		printMat();		
		cout<<"\n\n"<<label<<" Wins !\n\n";
		exit(0);
		
	}else{
		win = 0;
	}
	//checking same column
	for(int i = 0;i<3;i++){
		if(mat[i][lastCol] == label){
			win++;		
		}	
	}
	if(win == 3){
		cout<<"\n\n"<<label<<" Wins !\n\n";
		printMat();		
		exit(0);
		
	}else{
		win = 0;
	}


	//checking \ Diagonal
	for(int i = lastRow,j=lastCol;i>=0,j>=0;i--,j--){
		if(mat[i][j] == label){
			win++;		
		}		
	}
	for(int i = lastRow+1,j=lastCol+1;i<3,j<3;i++,j++){
		if(mat[i][j] == label){
			win++;		
		}		
	}
	if(win == 3){
		cout<<"\n\n"<<label<<" Wins !\n\n";
		printMat();		
		exit(0);
		
	}else{
		win = 0;
	}
	
	//checking / Diagonal
	for(int i =lastRow,j = lastCol;i>=0,j<3;i--,j++){
		if(mat[i][j] == label){
			win++;
		}
	}

	for(int i =lastRow+1,j = lastCol-1;i<3,j>=0;i++,j--){
		if(mat[i][j] == label){
			win++;
		}
	}
	if(win == 3){
		cout<<"\n\n"<<label<<" Wins !\n\n";
		printMat();		
		exit(0);
			

	}else{
		win = 0;
	}

	
}




























