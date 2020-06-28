#include<bits/stdc++.h>
using namespace std;
// Declare classs and object
class player{
    public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){ cout<<name<<" says  "<<text_to_say<<endl;}
    bool is_dead();
    player(){
        name="None";
        health=100;
        xp=3;
    }

};

int main()
{
    player frank;

    return 0;
}