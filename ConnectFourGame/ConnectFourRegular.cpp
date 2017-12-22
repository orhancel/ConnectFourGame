//
// Created by ORHAN on 21.12.2017.
//

#include "ConnectFourRegular.h"


int ConnectFourRegular::CheckWin(const int &position,const char &type){


    int TempPos=position;
    /*Dikey kazanma kontrolü*/
    for (int i = 0; i < 3; ++i) {
        TempPos+=DimensionX;

        if (TempPos>=(DimensionX*DimensionY))
            break;
        else if( GetPosToVector(TempPos)!=type)
            break;
        if (i==2){
            /*Board[TempPos]=type+('a'-'A');
            Board[TempPos-Dimension]=type+('a'-'A');
            Board[TempPos-2*Dimension]=type+('a'-'A');
            Board[TempPos-3*Dimension]=type+('a'-'A');*/

            return 1;
        }

    }


    /*Yatay kazanma kontrolü*/
    TempPos=(position/DimensionX)*DimensionX;
    for (int i = 0; i < DimensionX-3; ++i) {
        if( TempPos<DimensionX*DimensionY  &&GetPosToVector(TempPos)==type){
            for (int j = 0; j <3 ; ++j) {

                if(TempPos+j+1>=DimensionX*DimensionY )
                    break;
                else if(GetPosToVector(TempPos+j+1)!=type)
                    break;
                if(j==2){
                    /* Board[TempPos+j+1]=type+('a'-'A');
                     Board[TempPos+j+1-1]=type+('a'-'A');
                     Board[TempPos+j+1-2]=type+('a'-'A');
                     Board[TempPos+j+1-3]=type+('a'-'A');*/

                    return 2;
                }

            }
        }
        TempPos++;

    }

    TempPos=position;
/*Soldan sağa çapraz kazanma kontrolü*/
    while( TempPos>0){
        if(TempPos%DimensionX!=0 )
            TempPos-=(DimensionX+1);
        else
            break;
    }
    if(TempPos<0)
        TempPos+=(DimensionX+1);


    while (TempPos<(DimensionX*DimensionY)){
        if(  GetPosToVector(TempPos)==type){
            for (int i = 0; i < 4; ++i) {

                if( ((TempPos+(DimensionX+1)*i)>=DimensionX*DimensionY)  )
                    break;



                else if( GetPosToVector( TempPos+(DimensionX+1)*i)!=type)
                    break;

                if(i==3){
                    /*   Board[TempPos+(Dimension+1)*i]=type+('a'-'A');
                       Board[TempPos+(Dimension+1)*i-Dimension-1]=type+('a'-'A');
                       Board[TempPos+(Dimension+1)*i-2*Dimension-2]=type+('a'-'A');
                       Board[TempPos+(Dimension+1)*i-3*Dimension-3]=type+('a'-'A');*/
                    return 3;
                }
                else if(((TempPos+(DimensionX+1)*i)%DimensionX)==DimensionX-1)
                    break;

            }
            if(TempPos%DimensionX==DimensionX-1)
                break;
        }
        TempPos+=DimensionX+1;

    }

    TempPos=position;

    /*Sağdan sola çapraz kazanma kontrolü*/

    while(TempPos%DimensionX!=(DimensionX-1) && TempPos>0 ){
        TempPos-=(DimensionX-1);
    }
    if(TempPos<0)
        TempPos+=(DimensionX-1);
    int x=TempPos;
    while (TempPos<(DimensionX*DimensionY)-2){
        if(TempPos%DimensionX==0)
            break;
        if(GetPosToVector(TempPos)==type){
            for (int i = 0; i < 4; ++i) {

                if((TempPos+(DimensionX-1)*i)>=DimensionX*DimensionY  )
                    break;
                if( GetPosToVector(TempPos+(DimensionX-1)*i)!=type)
                    break;
                if(i==3){
                    /*   Board[TempPos]=type+('a'-'A');
                       Board[TempPos-Dimension+1]=type+('a'-'A');
                       Board[TempPos-2*Dimension+2]=type+('a'-'A');
                       Board[TempPos-3*Dimension+3]=type+('a'-'A');*/
                    return 4;
                }
                else if((TempPos+(DimensionX-1)*i)%DimensionX==0)
                    break;

            }

        }
        TempPos+=(DimensionX-1);


    }



    return -1;



}
