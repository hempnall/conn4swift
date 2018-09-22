#include <iostream>
#include <vector>
#include "game.h"
#include "manualplayer.h"
#include "autoplayer.h"

using namespace std;

int main()
{

//    {
////        int moves[] =  { 1,1,2,2,4,4 };
////        Board b(moves,6);
////        AutoPlayer p2(1,3);
////        cout << p2.getMove(b);
//    }

//    {
////        int moves[] =  { 1,1,2,2,4,3,1,4 };
////        Board b(moves,8);
////        AutoPlayer p2(1,3);
////        cout << p2.getMove(b);
//    }

////    {
////        int moves[] =  { 2,2,3,3 };
////        Board b(moves,4);
////        AutoPlayer p2(1,3);
////        cout << p2.getMove(b);
////    }

////    {
////        int moves[] =  { 3,0,5,0,5,0,0,0,5,0,6,4,4,1,4};
////        Board b(moves,sizeof(moves) / sizeof(int));
//// //       cout << b;
////        AutoPlayer p2(2,1);
//////        b.push_counter(4);
//////        b.push_counter(5);
//////       // if (b.win_in_direction(1,0,4,5,3,0,-1)) {
//////        if (b.win() ) {
//////            cout << "win" << b;
//////        }
////        cout << p2.getMove(b);
////    }


//    {
////        int moves[] = { 3 , 4 , 3,4,3,0,1};
////        Board b(moves,sizeof(moves) / sizeof(int));
////        AutoPlayer p2(2,3);
////        cout << "move=" << p2.getMove(b);

//    }

//    {
////        int moves[] = { 2,2,2,0,0,3 ,2,3,3,0,4,0,4};
////        Board b(moves,sizeof(moves) / sizeof(int));
////        AutoPlayer p2(2,7);
////       cout << "move=" << p2.getMove(b);
//    }


    ManualPlayer p1(1);
    AutoPlayer p2(2,7);

    Game g(p1,p2);
    g.startGame();

    return 0;
}

