//Hello World
#include <iostream>
using namespace std;

//Define a structure for a Player in the game. 
struct Player
{
   string name;// to hold the player's name
   int health;// to hold the player's current health
   int xp;//experience points gained by the player
   string inventory[10];//array of strings for the player's inventory
   int inventoryCount=0;//the number of items in the player's inventory
};

//Define a for a Monster in the game


int main(){
    //Print the welcome message
    cout <<"Welcome to the Dragon Realm!"<<endl;

    Player player;
    player.health=100;

    //Prompt the user to enter their name
    cout<<"Please enter your name: ";
    cin>>player.name;

    //Display a personalized welcome message to the player with their name
    cout<<"Welcome "<<player.name<<" to the Dragon Realm!"<<endl;

    //Initialize a flag to control the loop and signify the player's intent to explore.
    bool exploring=true;

    //Declare an int variable to hold the user's choice
    int choice;
    while (exploring)
    {
        //Offer the player a choice of 3 locations: 1 for Moonlight Markets, 2 for Grand Library, 3 for Shimmer Lake
    //Declare an int variable to capture the user's nested choice
    cout<<"Where will "<<player.name<<" go?"<<endl;
    cout<<"1. Moonlight Markets"<<endl;
    cout<<"2. Grand Library"<<endl;
    cout<<"3. Shimmer Lake"<<endl;
    cout<<"Please enter your choice: ";
    cin>>choice;
    //Declare an int variable to capture the user's nested choice
    int nestedChoice;
    //Check user's choice and the display the correct message
    switch(choice){
        case 1:
            cout<<"Welcome to the Moonlight Markets! You see a variety of stalls selling magical items."<<endl;
            break;
        case 2:
            cout<<"Welcome to the Grand Library! You see rows and rows of ancient books."<<endl;
            break;
        case 3:
            cout<<"You chose Shimmering Lake."<<endl;
            //The player arrives at the Shimmering Lake. It is one of the most beautiful lakes the player has ever seen.
            //The player hears a mysteroius melody from the water.
            //They cam either 1. Stay quiet or listen, or 2. Sing along with the melody.
            cout<<player.name<<" arrives at the Shimmering Lake. It is one of the most beautiful lakes that "<<"has seen. they hear a mysterious melody from the water. They can either: "<<endl;
            cout<<"1. Stay quiet and listen"<<endl;
            cout<<"2. Sing along with the melody"<<endl;
            cout<<"Please enter your choice: ";
            //Capture the nested choice
            cin>>nestedChoice;

            //If the player chooses to 1 and remains silent, they hear whispers of the merfolk below, but nothing happens.
            //If the player chooses 2 and sings along, a merfolk surfaces and gifts them a special blue gem as a token of appreciation for their voice.

            //Evaluate the user's nestedChoice
            switch(nestedChoice){
                case 1:
                    cout<<"Remaining silent, "<<player.name<<" hears whispers of the merfolk below, but nothing happens."<<endl;
                    break;
                case 2:
                    cout<<"Singing along, a merfolk surfaces and gifts "<<player.name<<" a special blue gem as a token of appreciation for their voice."<<endl;
                    player.inventory[player.inventoryCount]="Blue Gem";
                    player.inventoryCount++;

                    //Loop through the player's inventory up to the count of items they have
                    cout<<player.name<<"'s Inventory:"<<endl;

                    for(int i=0;i<player.inventoryCount;i++){
                        //Check if the inventory slot is not empty
                        if(!player.inventory[i].empty()){
                            cout<<"- "<<player.inventory[i]<<endl;
                        }
                    }
                    break;
            }
            break;
        case 4:
            exploring=false;
            cout<<"You chose to exit the game."<<endl;
            break;
        default:
            cout<<"You did not enter 1,2,3 or 4!"<<endl;
            continue;
    }
    }
    
    return 0;
}