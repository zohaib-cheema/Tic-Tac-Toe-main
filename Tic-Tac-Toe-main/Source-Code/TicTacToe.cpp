#include <iostream>
#include <string>
using namespace std;

int main() {
	int winner=0;

	string 	array[3][3];

	cout<<"Welcome to your Tic Tac Toe Game"<<endl;
	cout<<"Enter First Player's Name"<<endl;

	string input1;
	getline(cin,input1);

	cout<<"Enter Second Player's Name"<<endl;
	string input2;
	getline(cin,input2);


	cout<<input1 <<" & "<< input2 <<" Let's Begin!"<<endl;

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			array[i][j]="-";
		}
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}

	// GAME STARTS & REPEAT1 STARTS TOO && TURN1 STARTS

	cout<<input1<<" It is your turn first!"<<endl;
	cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input3;
	cin>>input3;

	cout<<"Column Number:"<<endl;
	int input4;
	cin>>input4;

	if(input3>2 || input4>2 || input3<0 || input4<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}

	if(input3==0 && input4==0)
	{
		array[0][0]="x";
	}
	if(input3==0 && input4==1)
	{
		array[0][1]="x";
	}
	if(input3==0 && input4==2)
	{
		array[0][2]="x";
	}

	if(input3==1 && input4==0)
	{
		array[1][0]="x";
	}
	if(input3==1 && input4==1)
	{
		array[1][1]="x";
	}

	if(input3==1 && input4==2)
	{
		array[1][2]="x";
	}
	if(input3==2 && input4==0)
	{
		array[2][0]="x";
	}
	if(input3==2 && input4==1)
	{
		array[2][1]="x";
	}
	if(input3==2 && input4==2)
	{
		array[2][2]="x";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}
	// REPEAT1 & TURN 1 ENDS HERE
	// REPEAT2 & TURN2 STARTS HERE
	cout<<input2<<" It is your turn now!"<<endl;
	cout<<"Select the Row and Column you would like to place you circle in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input5;
	cin>>input5;

	cout<<"Column Number:"<<endl;
	int input6;
	cin>>input6;

	if(input5>2 || input6>2 || input5<0 || input6<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}
	if(input5==input3 && input6==input4)
	{ cout<<"This position on the grid has already been marked, try a different block!";
	}
	if(input5==0 && input6==0)
	{
		array[0][0]="o";
	}
	if(input5==0 && input6==1)
	{
		array[0][1]="o";
	}
	if(input5==0 && input6==2)
	{
		array[0][2]="o";
	}

	if(input5==1 && input6==0)
	{
		array[1][0]="o";
	}
	if(input5==1 && input6==1)
	{
		array[1][1]="o";
	}

	if(input5==1 && input6==2)
	{
		array[1][2]="o";
	}
	if(input5==2 && input6==0)
	{
		array[2][0]="o";
	}
	if(input5==2 && input6==1)
	{
		array[2][1]="o";
	}
	if(input5==2 && input6==2)
	{
		array[2][2]="o";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}
	//REPEAT2 & TURN 2 ENDS HERE
	//REPEAT3 & TURN 3 STARTS HERE
	cout<<input1<<" It is your second turn now!"<<endl;
	cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input7;
	cin>>input7;

	cout<<"Column Number:"<<endl;
	int input8;
	cin>>input8;

	if(input7>2 || input8>2 || input7<0 || input8<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}
	if((input7==input3 && input8==input4) || (input7==input5 && input8==input6))
	{ cout<<"This position on the grid has already been marked, try a different block!";
	}
	if(input7==0 && input8==0)
	{
		array[0][0]="x";
	}
	if(input7==0 && input8==1)
	{
		array[0][1]="x";
	}
	if(input7==0 && input8==2)
	{
		array[0][2]="x";
	}

	if(input7==1 && input8==0)
	{
		array[1][0]="x";
	}
	if(input7==1 && input8==1)
	{
		array[1][1]="x";
	}

	if(input7==1 && input8==2)
	{
		array[1][2]="x";
	}
	if(input7==2 && input8==0)
	{
		array[2][0]="x";
	}
	if(input7==2 && input8==1)
	{
		array[2][1]="x";
	}
	if(input7==2 && input8==2)
	{
		array[2][2]="x";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}
	// REPEAT 3 AND TURN 3 ENDS HERE
	// REPEAT 4 AND TURN 4 STARTS HERE

	cout<<input2<<" It is your second turn now!"<<endl;
	cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input9;
	cin>>input9;

	cout<<"Column Number:"<<endl;
	int input10;
	cin>>input10;

	if(input9>2 || input10>2 || input9<0 || input10<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}
	if((input9==input3 && input10==input4) || (input9==input5 && input10==input6) || (input9==input7 && input10==input8))
	{ cout<<"This position on the grid has already been marked, try a different block!";
	}
	if(input9==0 && input10==0)
	{
		array[0][0]="o";
	}
	if(input9==0 && input10==1)
	{
		array[0][1]="o";
	}
	if(input9==0 && input10==2)
	{
		array[0][2]="o";
	}

	if(input9==1 && input10==0)
	{
		array[1][0]="o";
	}
	if(input9==1 && input10==1)
	{
		array[1][1]="o";
	}

	if(input9==1 && input10==2)
	{
		array[1][2]="o";
	}
	if(input9==2 && input10==0)
	{
		array[2][0]="o";
	}
	if(input9==2 && input10==1)
	{
		array[2][1]="o";
	}
	if(input9==2 && input10==2)
	{
		array[2][2]="o";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}
	//REPEAT4 AND TURN 4 ENDS HERE
	// REPEAT5 AND TURN 5 STARTS HERE
	cout<<input1<<" It is your third turn now!"<<endl;
	cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input11;
	cin>>input11;

	cout<<"Column Number:"<<endl;
	int input12;
	cin>>input12;

	if(input11>2 || input12>2 || input11<0 || input12<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}
	if((input11==input3 && input12==input4) || (input11==input5 && input12==input6) || (input11==input7 && input12==input8) || (input11==input9 && input12==input10))
	{ cout<<"This position on the grid has already been marked, try a different block!";
	}
	if(input11==0 && input12==0)
	{
		array[0][0]="x";
	}
	if(input11==0 && input12==1)
	{
		array[0][1]="x";
	}
	if(input11==0 && input12==2)
	{
		array[0][2]="x";
	}

	if(input11==1 && input12==0)
	{
		array[1][0]="x";
	}
	if(input11==1 && input12==1)
	{
		array[1][1]="x";
	}

	if(input11==1 && input12==2)
	{
		array[1][2]="x";
	}
	if(input11==2 && input12==0)
	{
		array[2][0]="x";
	}
	if(input11==2 && input12==1)
	{
		array[2][1]="x";
	}
	if(input11==2 && input12==2)
	{
		array[2][2]="x";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}

	// TURN 5 ENDS AND WINNER ANALYSIS1 STARTS HERE
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){

			if(array[i][j]=="x" && array[i][j+1]=="x" && array[i][j+2]=="x"){
				cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
				cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
				winner++;
				break;
			}
			if(array[i][j]=="x" && array[i+1][j]=="x" && array[i+2][j]=="x"){
				cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
				cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
				winner++;
				break;
			}
		}
	}
	if(array[0][0]=="x" && array[1][1]=="x" && array[2][2]=="x"){
		cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
		cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
		winner++;
	}

	//WINNER ANALYSIS1 ENDS HERE
	//TURN 6 STARTS HERE
	cout<<input2<<" It is your third turn now!"<<endl;
	cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input13;
	cin>>input13;

	cout<<"Column Number:"<<endl;
	int input14;
	cin>>input14;

	if(input13>2 || input14>2 || input13<0 || input14<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}
	if((input13==input3 && input14==input4) || (input13==input5 && input14==input6) || (input13==input7 && input14==input8) || (input13==input9 && input14==input10) || (input13==input11 && input14==input12))
	{ cout<<"This position on the grid has already been marked, try a different block!";
	}
	if(input13==0 && input14==0)
	{
		array[0][0]="o";
	}
	if(input13==0 && input14==1)
	{
		array[0][1]="o";
	}
	if(input13==0 && input14==2)
	{
		array[0][2]="o";
	}

	if(input13==1 && input14==0)
	{
		array[1][0]="o";
	}
	if(input13==1 && input14==1)
	{
		array[1][1]="o";
	}

	if(input13==1 && input14==2)
	{
		array[1][2]="o";
	}
	if(input13==2 && input14==0)
	{
		array[2][0]="o";
	}
	if(input13==2 && input14==1)
	{
		array[2][1]="o";
	}
	if(input13==2 && input14==2)
	{
		array[2][2]="o";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}
	//TURN 6 ENDS HERE
	//WINNER ANALYSIS2 STARTS HERE
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){

			if(array[i][j]=="o" && array[i][j+1]=="o" && array[i][j+2]=="o"){
				cout<<"CONGRATUALTIONS "<< input2 << " you won the game!"<<endl;
				cout<<"Better luck next time "<< input1 << " to play again re-run the module!"<<endl;
				winner++;
				break;
			}
			if(array[i][j]=="o" && array[i+1][j]=="o" && array[i+2][j]=="o"){
				cout<<"CONGRATUALTIONS "<< input2 << " you won the game!"<<endl;
				cout<<"Better luck next time "<< input1 << " to play again re-run the module!"<<endl;
				winner++;
				break;
			}
		}
	}
	if(array[0][0]=="o" && array[1][1]=="o" && array[2][2]=="o"){
		cout<<"CONGRATUALTIONS "<< input2 << " you won the game!"<<endl;
		cout<<"Better luck next time "<< input1 << " to play again re-run the module!"<<endl;
		winner++;
	}
	//WINNER ANALYSIS2 ENDS HERE
	// TURN 7 STARTS HERE
	cout<<input1<<" It is your fourth turn now!"<<endl;
	cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

	cout<<"Row Number:"<<endl;
	int input15;
	cin>>input15;

	cout<<"Column Number:"<<endl;
	int input16;
	cin>>input16;

	if(input15>2 || input16>2 || input15<0 || input16<0)
	{
		cout<<"Error: the range of rows is from Zero to Two"<<endl;
	}
	if((input15==input3 && input16==input4) || (input15==input5 && input16==input6) || (input15==input7 && input16==input8) || (input15==input9 && input16==input10) || (input15==input11 && input16==input12) || (input15==input13 && input16==input14))
	{ cout<<"This position on the grid has already been marked, try a different block!";
	}
	if(input15==0 && input16==0)
	{
		array[0][0]="x";
	}
	if(input15==0 && input16==1)
	{
		array[0][1]="x";
	}
	if(input15==0 && input16==2)
	{
		array[0][2]="x";
	}

	if(input15==1 && input16==0)
	{
		array[1][0]="x";
	}
	if(input15==1 && input16==1)
	{
		array[1][1]="x";
	}

	if(input15==1 && input16==2)
	{
		array[1][2]="x";
	}
	if(input15==2 && input16==0)
	{
		array[2][0]="x";
	}
	if(input15==2 && input16==1)
	{
		array[2][1]="x";
	}
	if(input15==2 && input16==2)
	{
		array[2][2]="x";
	}

	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			if(i<1 && j<3)
			{ cout<<array[i][j];}

			if(i<2 && j<3 && i>0)
			{cout<<array[i][j];}

			if(i<3 && j<3 && i>1)
			{cout<<array[i][j]; }
		}
		cout<<""<< endl;
	}
	//TURN 7 ENDS HERE
	//WINNER ANALYSIS3 STARTS HERE
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){

			if(array[i][j]=="x" && array[i][j+1]=="x" && array[i][j+2]=="x"){
				cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
				cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
				winner++;
				break;
			}
			if(array[i][j]=="x" && array[i+1][j]=="x" && array[i+2][j]=="x"){
				cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
				cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
				winner++;
				break;
			}
		}
		if(array[0][0]=="x" && array[1][1]=="x" && array[2][2]=="x"){
			cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
			cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
			winner++;
		}
		// WINNER ANALYSIS3 ENDS HERE
		// TURN 8 STARTS HERE
		cout<<input2<<" It is your fourth and last turn now!"<<endl;
		cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

		cout<<"Row Number:"<<endl;
		int input17;
		cin>>input17;

		cout<<"Column Number:"<<endl;
		int input18;
		cin>>input18;

		if(input17>2 || input18>2 || input17<0 || input18<0)
		{
			cout<<"Error: the range of rows is from Zero to Two"<<endl;
		}
		if((input17==input3 && input18==input4) || (input17==input5 && input18==input6) || (input17==input7 && input18==input8) || (input17==input9 && input18==input10)
				|| (input17==input11 && input18==input12) || (input17==input13 && input18==input14) || (input17==input15 && input18==input16))

		{ cout<<"This position on the grid has already been marked, try a different block!";
		}
		if(input17==0 && input18==0)
		{
			array[0][0]="o";
		}
		if(input17==0 && input18==1)
		{
			array[0][1]="o";
		}
		if(input17==0 && input18==2)
		{
			array[0][2]="o";
		}

		if(input17==1 && input18==0)
		{
			array[1][0]="o";
		}
		if(input17==1 && input18==1)
		{
			array[1][1]="o";
		}

		if(input17==1 && input18==2)
		{
			array[1][2]="o";
		}
		if(input17==2 && input18==0)
		{
			array[2][0]="o";
		}
		if(input17==2 && input18==1)
		{
			array[2][1]="o";
		}
		if(input17==2 && input18==2)
		{
			array[2][2]="o";
		}

		for(int i =0;i<3;i++)
		{
			for(int j =0;j<3;j++)
			{
				if(i<1 && j<3)
				{ cout<<array[i][j];}

				if(i<2 && j<3 && i>0)
				{cout<<array[i][j];}

				if(i<3 && j<3 && i>1)
				{cout<<array[i][j]; }
			}
			cout<<""<< endl;
		}
		// TURN 8 ENDS HERE
		//WINNER ANALYSIS 4 STARTS HERE
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){

				if(array[i][j]=="o" && array[i][j+1]=="o" && array[i][j+2]=="o"){
					cout<<"CONGRATUALTIONS "<< input2 << " you won the game!"<<endl;
					cout<<"Better luck next time "<< input1 << " to play again re-run the module!"<<endl;
					winner++;
					break;
				}
				if(array[i][j]=="o" && array[i+1][j]=="o" && array[i+2][j]=="o"){
					cout<<"CONGRATUALTIONS "<< input2 << " you won the game!"<<endl;
					cout<<"Better luck next time "<< input1 << " to play again re-run the module!"<<endl;
					winner++;
					break;
				}
			}
		}
		if(array[0][0]=="o" && array[1][1]=="o" && array[2][2]=="o"){
			cout<<"CONGRATUALTIONS "<< input2 << " you won the game!"<<endl;
			cout<<"Better luck next time "<< input1 << " to play again re-run the module!"<<endl;
			winner++;
		}
		// WINNER ANAYLSIS 4 ENDS HERE
		// TURN 9 STARTS HERE
		cout<<input1<<" It is your fifth and last turn now!"<<endl;
		cout<<"Select the Row and Column you would like to place you cross in - considering row/column one as row/column zero"<<endl;

		cout<<"Row Number:"<<endl;
		int input19;
		cin>>input19;

		cout<<"Column Number:"<<endl;
		int input20;
		cin>>input20;

		if(input19>2 || input20>2 || input19<0 || input20<0)
		{
			cout<<"Error: the range of rows is from Zero to Two"<<endl;
		}
		if((input19==input3 && input20==input4) || (input19==input5 && input20==input6) || (input19==input7 && input20==input8) || (input19==input9 && input20==input10)
				|| (input19==input11 && input20==input12) || (input19==input13 && input20==input14) || (input19==input15 && input20==input16) || (input19==input17 && input20==input18))
		{ cout<<"This position on the grid has already been marked, try a different block!";
		}
		if(input19==0 && input20==0)
		{
			array[0][0]="x";
		}
		if(input19==0 && input20==1)
		{
			array[0][1]="x";
		}
		if(input19==0 && input20==2)
		{
			array[0][2]="x";
		}

		if(input19==1 && input20==0)
		{
			array[1][0]="x";
		}
		if(input19==1 && input20==1)
		{
			array[1][1]="x";
		}

		if(input19==1 && input20==2)
		{
			array[1][2]="x";
		}
		if(input19==2 && input20==0)
		{
			array[2][0]="x";
		}
		if(input19==2 && input20==1)
		{
			array[2][1]="x";
		}
		if(input19==2 && input20==2)
		{
			array[2][2]="x";
		}

		for(int i =0;i<3;i++)
		{
			for(int j =0;j<3;j++)
			{
				if(i<1 && j<3)
				{ cout<<array[i][j];}

				if(i<2 && j<3 && i>0)
				{cout<<array[i][j];}

				if(i<3 && j<3 && i>1)
				{cout<<array[i][j]; }
			}
			cout<<""<< endl;
		}
		// TURN 9 ENDS HERE
		// WINENR ANALYSIS 5 STARTS HERE
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){

				if(array[i][j]=="x" && array[i][j+1]=="x" && array[i][j+2]=="x"){
					cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
					cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
					winner++;
					break;
				}
				if(array[i][j]=="x" && array[i+1][j]=="x" && array[i+2][j]=="x"){
					cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
					cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
					winner++;
					break;
				}
			}
		}
		if(array[0][0]=="x" && array[1][1]=="x" && array[2][2]=="x"){
			cout<<"CONGRATUALTIONS "<< input1 << " you won the game!"<<endl;
			cout<<"Better luck next time "<< input2 << " to play again re-run the module!"<<endl;
			winner++;
		}

	}
}

