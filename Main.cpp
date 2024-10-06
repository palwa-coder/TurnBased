#include <iostream>
#include <string>
#include "globalstats.h"
#include "cutejudge.h"
#include "enemyturn.h"
#include "playerturn.h"
using namespace std;

int main()
{
    char menu;
    string nama;
    int keputusan;
    
    cout << " ~~~ Duel with Ghost ~~~ \n";
    cout << "*Harap masukkan input sesuai dengan opsi yang tersedia dalam tanda kurung siku[]*\n";
    cout << "[Enter]\n";
    cin.get();
    cout << "| Main Menu |\n";
    cout << "[1: Mulai]\n" << "[2: Tingkat Kesulitan]\n" << "[3: Keluar]\n";
    cin >> menu;
    
    switch (menu) {
        case '1':
        cout << "Selamat bermain!\n";
        break;
        case '2':
        cout << "[1: Easy]\n" << "[2: Medium]\n" << "[3: Hard]\n";
        cin >> menu;
            switch (menu) {
                case '1':
                playerhp += 1000*0.4;
                playerattackpower += 750*0.4;
                playermagicpower += 500*0.4;
                playerdefense += 650*0.4;
                playerresistance += 400*0.4;
                enemyhp -= 1000*0.4;
                enemyattackpower -= 750*0.4;
                enemymagicpower -= 500*0.4;
                enemydefense -= 650*0.4;
                enemyresistance -= 400*0.4;
                cout << "Tingkat kesulitan Easy dipilih. Silakan bersantai!\n" << "[Enter]\n";
                cin.get();
                break;
                case '2':
                playerhp += 0;
                playerattackpower += 0;
                playermagicpower += 0;
                playerdefense += 0;
                playerresistance += 0;
                enemyhp -= 0;
                enemyattackpower -= 0;
                enemymagicpower -= 0;
                enemydefense -= 0;
                enemyresistance -= 0;
                cout << "Tingkat kesulitan Medium dipilih. Pilihan yang bagus!\n" << "[Enter]\n";
                cin.get();
                break;
                case '3':
                playerhp -= 1000*0.4;
                playerattackpower -= 750*0.4;
                playermagicpower -= 500*0.4;
                playerdefense -= 650*0.4;
                playerresistance -= 400*0.4;
                enemyhp += 1000*0.4;
                enemyattackpower += 750*0.4;
                enemymagicpower += 500*0.4;
                enemydefense += 650*0.4;
                enemyresistance += 400*0.4;
                cout << "Tingkat kesulitan Hard dipilih. Kau siap menghadapi tantangan?\n" << "[Enter]\n";
                cin.get();
                break;
            }
        break;
        case '3':
        exit (0);
    }
    
    cin.get();
    cout << "*Gunakan [Enter] untuk memunculkan dialog berikutnya*\n";
    cin.get();
    cout << "Kau terbangun di rumah yang tampak familiar.\n";
    cin.get();
    cout << "Ketika kau keluar rumah, kau bertemu dengan seorang kakek tua.\n";
    cin.get();
    cout << "Kakek itu melihatmu dengan lega.\n";
    cin.get();
    cout << "Kakek  : Ah, ternyata kau... [masukkan nama]: ";
    cin >> nama;
    cout << endl;
    cin.get();
    cout << "Kakek  : Akhirnya kau sudah terbangun! Para rakyat sedang dalam bahaya!\n";
    cin.get();
    cout << "'-_- (*Perasaanku tidak enak*)\n";
    cin.get();
    cout << "Kakek  : Kau lah satu-satunya harapan mereka, " << nama << "!\n";
    cin.get();
    cout << "[1: Bantu Kakek]\n" << "[2: Tidur Lagi]\n";
    cin >> keputusan;
    
    if (keputusan == 1) {
            cout << "Kau memutuskan untuk menyelamatkan rakyat dari bahaya.\n";
            cin.get();
    }
    else if (keputusan == 2) {
            cout << "Game Over! Kenapa kau malah tidur?\n";
            exit (0);
    }
    
    cin.get();
    cout << " #### BATTLE MODE ACTIVATED #### \n";
    cin.get();
    cutejudge();
    cout << " MUSUH : ETHEREAL GHOST SPIRIT \n";
    
    while (playerhp > 0 && enemyhp > 0) {
        cin.get();
        mainturn();
        cin.get();
        pmainturn();
        cin.get();
    }
    
    if (playerhp > enemyhp) {
        cin.get();
        cout << "Selamat! Kau berhasil menyelamatkan rakyat dari monster pertama!\n";
    }
    else if (playerhp < enemyhp) {
        cin.get();
        cout << "Game Over! Ethereal Ghost Spirit mulai memakan jiwamu!\n";
    }
    return 0;
}
