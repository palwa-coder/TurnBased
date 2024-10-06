#include <iostream>
#include "globalstats.h"
#include "playerturn.h"
using namespace std;

void pmainturn() {
    cout << "Giliranmu!\n" << "[1: Attack]\n" << "[2: Magic]\n" << "[3: Defend]\n";
    cin >> playerchoice;
    
    switch (playerchoice) {
        case '1':
        cout << "Kau menebas musuhmu dengan pedang yang tajam!\n";
        enemyhp -= (0.1*enemyhp);
        enemyhp += (0.1*(enemyhp-enemydefense));
        cout << "HP Ethereal Ghost Spirit sekarang " << enemyhp << endl;
        break;
        case '2':
        cout << "Kau melepaskan mantra api yang panas ke arah musuhmu!\n";
        enemyhp -= (0.1*enemyhp);
        enemyhp += (0.1*(enemyhp-enemyresistance));
        cout << "HP Ethereal Ghost Spirit sekarang " << enemyhp << endl;
        break;
        case '3':
        cout << "Kau menggunakan perisai titanium untuk bertahan!\n";
        enemyhp -= (0.1*enemydefense);
        cout << "HP Ethereal Ghost Spirit sekarang " << enemyhp << endl;
        break;
    }
}