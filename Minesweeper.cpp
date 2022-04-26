#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;
#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10


void init_map(char ShowMap[MAX_ROW][MAX_COL], char MineMap[MAX_ROW][MAX_COL]) {

	memset(ShowMap, '*', MAX_ROW * MAX_COL);
	memset(MineMap, '0', MAX_ROW * MAX_COL); 


    //To do generate random bomb use size of 'MINE_COUNT'

}


void print_map(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", theMap[row][col]);
		}
		cout << endl;
	}
}

//to do count near location bomb (3*3)
void Update_map(char ShowMap[MAX_ROW][MAX_COL], char MineMap[MAX_ROW][MAX_COL], int row, int col) {
	int count = 0;


    //write number of near bomb to the map
	ShowMap[row][col] = '0' + count; //int to char
}




int main(){
	
	char ShowMap[MAX_ROW][MAX_COL] = { 0 }; //player see
	char MineMap[MAX_ROW][MAX_COL] = { 0 }; // real map
	init_map(ShowMap, MineMap);
	int openedCounter = 0;

	while (true) {
		print_map(ShowMap);
		int row = 0;
		int col = 0;
		cout << "please enter row:";
        cin >> row;
		cout << "please enter col:";
        cin >> col;


        // To do: check input is vaild input 

		
		//To do: Check the in put is in the box or already pick



		if (MineMap[row][col] == '1') {
			cout << "bomb!! you lose" << endl;
			break;
		}


        //To do: clear terminal when board update




		//update map
		Update_map(ShowMap,MineMap,row,col);
		openedCounter++;
		if (openedCounter == MAX_COL * MAX_COL - MINE_COUNT) {
			cout << "you win" << endl;
		}
	}
	
    
    //system("pause");
	return 0;
}