#include<iostream>
using namespace std;

int main()
{
    const int twoThousand = 2000;
    const int fiveHundered = 500;
    const int hundered = 100;
    const int fifty = 50;
    const int twenty = 20;
    const int ten = 10;
    const int five = 5;
    const int two =2;
    const int one = 1;

    cout<<"===================================="<<endl;
    cout<<"Welcome to INR type change estimator"<<endl;
    cout<<"===================================="<<endl;
    cout<<"Enter the sum handed in INR: ";
    int sum {};
    cin>>sum;

    cout<<"Enter the amount to be billed: ";
    int deduct {};
    cin>>deduct;

    int amount {};
    amount = sum - deduct;

    int noOfTwoThousands {}, noOfFiveHundereds {}, noOfHundereds {}, noOfFifties {}, noOfTwenties {}, noOfTens {}, noOfFives {}, noOfTwos {}, noOfOnes {};
    
    noOfTwoThousands = amount/twoThousand;
    amount -= noOfTwoThousands*twoThousand;
    noOfFiveHundereds = amount/fiveHundered;
    amount -= noOfFiveHundereds*fiveHundered;
    noOfHundereds = amount/hundered;
    amount -= noOfHundereds*hundered;
    noOfFifties = amount/fifty;
    amount -= noOfFifties*fifty;
    noOfTwenties = amount/twenty;
    amount -= noOfTwenties*twenty;
    noOfTens = amount/ten;
    amount -= noOfTens*ten;
    noOfFives = amount/five;
    amount -= noOfFives*five;
    noOfTwos = amount/two;
    amount -= noOfTwos*two;
    noOfOnes = amount/one;

    cout<<"Please provide the change as follows: "<<endl;
    cout<<"===================================="<<endl;
    cout<<noOfTwoThousands<<" - Two Thousand Rupee Notes"<<endl<<noOfFiveHundereds<<" - Five Hundered Rupee Notes"<<endl<<noOfHundereds<<" - Hundered Rupee Notes"<<endl<<noOfFifties<<" - Fifty Rupee Notes"<<endl<<noOfTwenties<<" - Twenty Rupee Notes"<<endl<<noOfTens<<" - Ten Rupee Notes"<<endl<<noOfFives<<" - Five Rupee Coins"<<endl<<noOfTwos<<" - Two Rupee Coins"<<endl<<noOfOnes<<" - One Rupee Coins"<<endl;
    cout<<"===================================="<<endl;
    return 0;
