//Judul : Mencari Tikus

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Kamus:
    srand(): function
    tikus <- rand(): int
    tebakTikus: int
    jumlahTebakan: int
    menang: bool
*/

int main(){
    srand(time(NULL));

    int tikus = rand() % 9 + 1;

    int tebakTikus;
    int jumlahTebakan = 0;
    bool ketemu = false;
    char cippy[5][15] = {
        "    _    _    ",
        "   ( \\__/ )  ",
        "    \\ oo /   ",
        "   _/\\__/\\  ",
        "  (_\\_VV_/   ",
    };

    cout << "   +--------------------------+\n";
    cout << "   |  Hi, aku Cippy si tikus  |\n";
    cout << "   |  Ayo temukan aku         |\n";
    cout << "   \\  ------------------------+\n";
    cout << "    V\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 15; j++) {
            cout << cippy[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Berada di lubang manakah aku?\n";
    cout << "[ ]  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]\n";
    cout << " 1    2    3    4    5    6    7    8    9 \n";

    while(ketemu != true){
        cout << "Masukan tebakanmu: ";
        cin >> tebakTikus;
        jumlahTebakan++;

        if(tebakTikus == tikus){
            ketemu = true;
            cout << endl;
            cout << "Selamat kamu menemukanku :)\n";
            cout << endl;
            if(jumlahTebakan <= 3){
                cout << "   +---------------------------+\n";
                cout << "   |  Hebat kamu berhasil      |\n";
                cout << "   |  menebak sebanyak " << jumlahTebakan << " kali  |\n";
                cout << "   \\  -------------------------+\n";
                cout << "    V\n";
                for (int i = 0; i < 6; i++) {
                    for (int j = 0; j < 14; j++) {
                        cout << cippy[i][j];
                    }
                    cout << endl;
                }
            }else{
                cout << "Jumlah tebakanmu adalah " << jumlahTebakan << endl;
            }
        }

        if(jumlahTebakan != 6){
            if(tebakTikus < tikus){
                cout << "Wkwkwk tebakanmu salah, aku di kanan\n";
                cout << endl;
            }else if(tebakTikus > tikus){
                cout << "Wkwkwk tebakanmu salah, aku di kiri\n";
                cout << endl;
            }
        }

        if(jumlahTebakan == 6){
            if(ketemu == false){
                cout << "Cupu banget kamu wkwkwk\n";
                exit(1);
            }
        }
    }


    return 0;
}

/*
Deskripsi:
1. Tikus akan mencari lubang acak
2. Pemain menginputkan lokasi lubang:
    1. jika tebakTikus < tikus, maka tikus di kanan
    2. jika tebakTikus > tikus, maka tikus di kiri
    3. jika tebakTikus == tikus, maka tikus ketemu
3. Jika jumlahTebakan <- 8 & jika menang <- false, maka kamu kalah
4. Jika tikus ketemu, kamu menang
5. Program berhenti
*/
