#include <iostream>
//#include "Input.cpp"
//#include "Logic.cpp"
//#include "Setup.cpp"

using namespace std;

bool gameOver;
const int WIDTH = 20;
const int HEIGHT = 20;
int X, Y, fruitX, fruitY, SCORE;
enum DIRECTION{ STOP = 0, LEFT, RIGHT, UP, DOWN};
DIRECTION DIR;

void Setup(){
    gameOver = false;
    DIR = STOP;
    X = WIDTH / 2;
    Y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    SCORE = 0;
}
void Draw(){
    system("cls");
    for(int i = 0; i < WIDTH; i++){
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            if(j == 0)cout << "#";
            else cout << " ";
            if(j == WIDTH-1)cout << "#";
        }
    }
    for (int i = 0; i < WIDTH; ++i) {
        cout<< "#";
    }
}
void Input(){

}
void Logic(){

}
int main(){
    Setup();
    //while(!gameOver){
        Draw();
        Input();
        Logic();
    //}
    return 0;
}
