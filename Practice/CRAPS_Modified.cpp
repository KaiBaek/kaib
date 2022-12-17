/* Block B - Kai Baek - CRAPS version 2.0
                November 3rd, 2022
                ( Modified version)
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <sys/time.h>
#include <unistd.h>

using namespace std;



void ShowIntroScreen(void);
void ShowInformation (unsigned long Money);
short GetBet (void);
unsigned int DoDiceThrow();
unsigned short DoMoneyCalc(short DiceValue, short Bet, short BetMoney);
unsigned long GetAmount(void);




int main()  
{

unsigned long MoneyEarned;
unsigned long Money;

short DiceValue;
short Bet;
short BetMoney;

    struct timeval t1;
    gettimeofday(&t1, NULL);
    srand(t1.tv_usec); // Seed in Miliseconds rather than in seconds, but this repeats every 24days. 


// Show intro and setup game

ShowIntroScreen();
Money = 1000;

/* Play while player has money 
    keep 100 dollars for the cab home */

do {
    ShowInformation (Money);
    // Get bet information
    Bet = GetBet();
    BetMoney = GetAmount();

    
    short die2 = DoDiceThrow();

    DiceValue = die1 + die2;

    MoneyEarned = DoMoneyCalc (DiceValue, Bet, BetMoney);

    
    Money -= BetMoney;
    // Show the number
    if(MoneyEarned == 0)
    {
        cout << "You lost. Number was: " << DiceValue << endl;
        cout << endl << endl;
    }
    else
    {
        cout << "You won " << MoneyEarned - BetMoney;
        cout << " dollrs. Number was: " << DiceValue << endl;
        cout << endl << endl;

        Money += MoneyEarned;

    }

}while (Money > 100);
cout << "Game Over. Keep $" << Money << "foe the ride home";
cout << endl;

return 0;
  
}

void ShowIntroScreen(void)
{
    cout << "          Welcome to Craps 2.0";
    cout << endl << endl;
    cout << "Here are the rules:";
    cout << endl << endl;

    cout << "You have 1000 dollars to start gambling.   ";
    cout << endl << endl;

    cout << "You can do three different bets. You can bet on  ";
    cout << "numbers 2 and 12 which will give";
    cout << "you a win ratio of";
    cout << "5 to 1 if you win. You can bet the numbers 4 and 10 ";
    cout << "which will give you a win ration of 2.5 to 1" << endl;
    cout << "You can also bet the numbers 3 and 9 which will give you";
    cout << "a win ratio of 1.7 to 1 if you win." << endl;
    cout << "The last kind of bet you can do is on the numbers 6";
    cout << " and 8 which will give you a win ratio of 1.5 to 1.";
    cout << endl << endl;

    cout << "The minimum amount to bet is 10 dollars and the ";
    cout << "maximum 100 dollars.";
    cout << endl << endl;

    cout << "Have fun playing.";
    cout << endl << endl;


}

void ShowInformation (unsigned long Money)
{
    cout << "You have : " << Money << " dollars.";
    cout << endl;
}

short GetBet (void)
{
    short BetType = 0;
    /* Get Bet */

    /* If bet invalid bet */


    while(1){

    cout << "Enter type of bet ( 1 = '6/8' 2 = '4/10' 3 = '2/12' 4 = '3/9' ): ";
    cin >> BetType;

    if ((BetType == 1)|| (BetType == 2)|| (BetType == 3)||(BetType == 4))
    {
        return BetType;
        break;
    }
    else
    {
        cout << "Your input for bet is invalid, please re enter it!" << endl;
        cin.clear(); // Orignally, if user input special character, it goes infinite loop, but with this 
        rewind(stdin); // I can prevent this happening.
    }

}
}




    unsigned long GetAmount(void)
    {
        unsigned short BetAmount;

        /* Get bet amount */
        while(1){
        cout << "Enter amount to bet (min 10 - max 100): ";
        cin >> BetAmount;

        short b = (short)BetAmount;

        
            if(BetAmount-b == 0) // this is checking whether the input is integer or not. 
                                // if the value is not integer, then this 
            {
                break;
            }
            else
            {
                cout << "Your input is invalid. try again";
            }
        }

        /* If bet out of range fix it*/
        if(BetAmount < 10)
        {
            BetAmount = 10;
        }

        if(BetAmount > 100)
        {
            BetAmount = 100;
        }

        return BetAmount;
    }

unsigned short DoMoneyCalc(short DiceValue, short Bet, short BetMoney)
{
    unsigned long MoneyEarned = 0;

    /* See which type of bet the player made */
    switch (Bet)
    {
       

        case 1:
        if((DiceValue == 6)||(DiceValue == 8))
        {
            MoneyEarned = BetMoney * 1.5;
        }
        break; 

        /* 4/10 - pay amount of 2.5:1 */
        case 2:
        if((DiceValue == 10)||(DiceValue == 4))
        {
            MoneyEarned = BetMoney * 2.5;
        }
        break; 

        /* 2/12 - pay amount of 5:1 */
        case 3:
        if((DiceValue == 2)||(DiceValue == 12))
        {
            MoneyEarned = BetMoney * 5;
        }
        break;

        case 4:
        if((DiceValue == 3)||(DiceValue == 9))
        {
            MoneyEarned = BetMoney * 1.7;
        }
        break;

        default:
        MoneyEarned = 0;
        break;
    }
    return MoneyEarned;

    }
unsigned int DoDiceThrow(){

    int dicevalue = rand() % 6 + 1;
    
    return dicevalue;
}