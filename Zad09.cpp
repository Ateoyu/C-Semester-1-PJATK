#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand((int) time(nullptr));
    int Num_Generated = rand() % 100 + 1;
    int Num_Guessed;

    cout<<"Welcome to the game!\n"
        <<"I have generated a random number from 1-100.\nTry to guess which it is :D ";

    do {
        cout<<"\nEnter your guess: ";
        cin>>Num_Guessed;

        if(Num_Guessed > Num_Generated) {
            cout << "Too High! Try again.\n";
        }
        else if(Num_Guessed < Num_Generated) {
            cout<<"Too Low! Try again.\n";
        }
        else {
            cout<<"Congrats! You guessed the number!"<<endl;
        }
    }
    while(Num_Guessed != Num_Generated);

    return 0;
}