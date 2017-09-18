#include<cstdlib>
#include<ctime>
#include<iostream>


using namespace std;

int main()
{
    srand( time(0) );
    int guess;
    int randomnumber;

    randomnumber=rand() % 10 + 1;

        cout<<"Guess a random number between 1 and 10"<<endl;
        cin>>guess;


            if(guess==randomnumber)
             {
             cout<<"You, guessed correctly! You win!"<<endl;
             }   
                else if(guess>randomnumber)
                 {
                 int offby;
                 offby = guess - randomnumber;
                 cout<<"You were off by "<<offby<<". Sorry, you lose."<<endl;
                 }
                    else if(guess<randomnumber)
                     {
                     int offby;
                     offby = randomnumber - guess;
                     cout<<"You were off by "<<offby<<". Sorry, you lose."<<endl;
                     }


    return 0; 
    }    
