#include <iostream>
using namespace std;

int isSnake(int num){
    if(num==97){
        return num-80;
    }else if(num==93){
        return num-60;
    }else if(num==74){
        return num-34;
    }else if(num==56){
        return num-30;
    }else if(num==23){
        return num-16;
    }else{
        return num;
    }
}

int isLadder(int num){
    if(num==8){
        return num+14;
    }else if(num==27){
        return num+26;
    }else if(num==42){
        return num+26;
    }else if(num==61){
        return num+30;
    }else if(num==75){
        return num+20;
    }else{
        return num;
    }
}

void Game(){
    int p1=0,p2=0,p,dice,count;
    srand(time(0));
    while(1){
        cout<<"Enter player name: ";
        cin>>p;
        count = 0;
        reroll: dice = (rand()%10)+1;
        if(dice>6){
            dice = 1;   
        }
        cout<<"Dice rolled: "<<dice<<endl;
        if(p==1){
            p1 += dice;
            p1 = isSnake(p1);
            p1 = isLadder(p1);
            if(p1 == 100){
                cout<<"Player 1 wins!"<<endl;
                break;
            }
            if(p1>100){
                p1 -= dice;
            }
            if(dice == 6 && count<3){
                cout<<"Player 1 gets another turn!"<<endl;
                goto reroll;
            }
        }else if(p==2){
            p2 += dice;
            p2 = isSnake(p2);
            p2 = isLadder(p2);
            if(p2 == 100){
                cout<<"Player 2 wins!"<<endl;
                break;
            }
            if(p2>100){
                p2 -= dice;
            }
            if(dice == 6 && count<3){
                cout<<"Player 2 gets another turn!"<<endl;
                goto reroll;
            }
        }else{
            cout<<"Invalid player no. try again"<<endl;
        }
        cout<<"Player 1 score: "<<p1<<" Player 2 score: "<<p2<<endl;
    }
}

int main(){
    Game();
    return 0;
}