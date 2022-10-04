// UserDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int health;
    enum Weapons
    {
        SWORD = 1,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE
    };
    health = 13000;
    Weapons currentweapon;
    currentweapon = SAMURAI;
    cout << "My Current Health is: " << health << endl;
    cout << "My Current Weapon of Choice is: " << currentweapon << endl;


}


