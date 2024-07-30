# include<iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
int main(){
	
	srand(time(0));
	int secretnumber = rand() %100+1;
	int guess, attempts = 0;
	
	cout<<"welcome to the guess the number game!"<<endl;
	
	do{
		
		cout<<"Enter your guess(1-100):";
		cin>>guess;
		attempts++;
		
		if(guess< secretnumber){
			cout<<"Too low.Try again!"<<endl;
			
		}else if (guess > secretnumber)
		{
			cout<<"Too high.Try again!"<<endl;
		}else{
			cout<<"congratualation! you guessed the number in"<< attempts <<"attempts"<< endl;
		}
	}while ( guess != secretnumber);
	
	return 0;
}

