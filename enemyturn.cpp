#include <iostream>

#include <random>

#include "globalstats.h"

#include "enemyturn.h"

using namespace std;



void EnAttack () {

    cout << "Ethereal Ghost Spirit mencakarmu dengan kukunya yang tajam!\n";

    playerhp -= (0.1*playerhp);

    playerhp += (0.2*(playerhp-playerdefense));

    cout << "HP-mu sekarang " << playerhp << endl;

}



void EnAttack2 () {

    cout << "Ethereal Ghost Spirit menyemburkan api merah yang dahsyat ke arahmu!\n";

    playerhp -= (0.1*playerhp);

    playerhp += (0.2*(playerhp-playerresistance));

    cout << "HP-mu sekarang " << playerhp << endl;

}



void EnDefense () {

    cout << "Ethereal Ghost Spirit melindungi dirinya dengan sayapnya yang lebar!\n";

    playerhp -= (0.1*playerdefense);

    cout << "HP-mu sekarang " << playerhp << endl;

}



void EnUltra () {

    cout << "Ethereal Ghost Spirit meluncurkan Ultra Meteor ke arahmu!\n";

    playerhp -= (0.2*playerhp);

    playerhp += (0.3*playerhp) - (0.1*playerdefense);

    cout << "HP-mu sekarang " << playerhp << endl;

}



void randomattack () {

    random_device rd;

    mt19937 gen(rd());

    discrete_distribution<> dist ({0.3, 0.3, 0.3, 0.1});

    

    int randomize = dist (gen);

    

    switch (randomize) {

        case 0:

        EnAttack();

        break;

        case 1:

        EnAttack2();

        break;

        case 2:

        EnDefense();

        break;

        case 3:

        EnUltra();

        break;

    }

    

}



void mainturn() {

    randomattack();

}
