//
// Created by Santiago Baena Rivera on 10/05/16.
//
#include <iostream>

using namespace std;

void game(int tam, int arcos[tam], bool conec[tam], int comienzo);


void checkWins(int winnerAirpot, bool winner);



int main() {
    int nroAero = 0;
    int start = 0;

    cin >> nroAero >> start;

    int aero[nroAero][nroAero];
    bool visited[nroAero][nroAero];

    for (int i = 0; i < nroAero; ++i) {
        for (int j = 0; j < nroAero; ++j) {
            aero[i][j] = 0;
            visited[i][j]=false;
        }
    }

    for (int s = 0; s < (nroAero-1); ++s){
        int arist1 = 0;
        int arist2 = 0;
        cin >> arist1 >> arist2;
        aero[arist1-1][arist2-1] = arist2;
        aero[arist2-1][arist1-1] = arist1;
        visited[arist1-1][arist2-1]= true;
        visited[arist2-1][arist1-1] = true;
    }
    for(int z=0; z < nroAero; ++z) {
        for (int h = 0; h < nroAero; ++h) {
            cout << visited[z][h];
        }
        cout << endl;
    }

    game(nroAero,aero[nroAero],visited[nroAero],start);

    return 0;
}

void game(int tam, int arcos[tam], bool conec[tam], int comienzo) {
    bool winner = false;
    int l = 0;



    checkWins(l, winner);
}

void checkWins(int winnerAirpot, bool winner) {
    (winner ? cout << "First player wins flying to airport" << winnerAirpot : cout << "First player loses") << endl;
}