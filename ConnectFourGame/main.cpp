#include <iostream>

#include "ConnectFourAbstract.h"
#include "ConnectFourPlus.h"
#include "ConnectFourDiag.h"
#include "ConnectFourPlusUndo.h"
#include "ConnectFourRegular.h"

int main() {
    int i=0;
    int finishedGames=0;
    int obje=0;
    string Line;
    cout<<"P for PLUS,D for diagonal U for Undo  R for Regular Game"<<endl;
    getline(cin,Line);
    Line[0]=toupper(Line[0]);

    if(Line[0]=='R'){
        ConnectFourRegular oyun;
        oyun.playGame();
        cout<<"main"<<endl;
        return 0;
    }

    else if(Line[0]=='P'){
        ConnectFourPlus oyun;
        oyun.playGame();
        cout<<"main"<<endl;
        return 0;
    }

    else if(Line[0]=='D'){

        ConnectFourDiag oyun;
        oyun.playGame();
        cout<<"main"<<endl;
        return 0;

    }
    else if(Line[0]=='U'){

        ConnectFourPlusUndo oyun;
        oyun.playGame();
        cout<<"main"<<endl;
        return 0;

    }

    return 0;
}