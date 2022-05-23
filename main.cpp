#include <iostream>
#include <Windows.h>
#include <fstream>
#include <String>
#include <ctime>
using namespace std;

//universal//
 void displayCard();
 void cardsplit();
 void player1();
 void player2();
 
//loading
void loadingScreen(){
    cout << "Loading Please Wait";
    for (int i =1; i<=3; ++i){
        Sleep(1000);
        cout << "." <<flush;
        Sleep(1000);
        cout << "." <<flush;
        Sleep(1000);
        cout << "." <<flush;
        Sleep(1000);
        cout << "\b\b\b   \b\b\b" <<flush;
    }
    system("cls");
    cout<<"================================================="<<endl;
    cout<<"=======================_____====================="<<endl;
    cout<<"==\\********/****/\\*****|    |===================="<<endl;
    cout<<"===\\**/\\**/****/--\\****|___/====================="<<endl;
    cout<<"====\\/**\\/****/****\\***|***\\====================="<<endl;
    cout<<"================================================="<<endl<<endl;
    Sleep(2000);
    system("cls");
    displayCard();


}

void displayCard(){
    string couts;
    ifstream cards ("Ranks.txt");
    while(getline (cards, couts)){
        cout<<couts<<endl;
    }
    cards.close();
    Sleep(1000);
    cardsplit();
}

void cardsplit(){
    //welcome screen//
    cout<<"============================================"<<endl;
    cout<<"================Building Deck==============="<<endl;
    cout<<"============================================"<<endl;
    //deciding which card to use//
       player1();
       //player2();//
    

}

void player1(){
   string input;
   string line;
   int numb;
   fstream one("player1.txt");
   srand(time(0));
  // numb = 1+(rand()%30);//
  numb = 1;
   cout<<numb;
        if(numb = 1; ++numb){
           input = numb +" Admiral";
               if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                        
                     }
                  }
               }if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) == string::npos){
                        one<<input;
                     }
                  }
               }
        }if(numb == 2){
           input = "General";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) == string::npos){
                        one<<input;
                     }
                  }
               }
        }if(numb == 3){
           input = "Colonel";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) == string::npos){
                        one<<input;
                     }
                  }
               }
        }if(numb == 4){
           input = "Colonel";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) == string::npos){
                        one<<input;
                     }
                  }
               }
        }if(numb == 5){
           input = "Major";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) == string::npos){
                        one<<input;
                     }
                  }
               }
        }if(numb == 6){
           input = "Major";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) == string::npos){
                        one<<input;
                     }
                  }
               }
        }if(numb == 7){
           input = "Captain";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 8){
           input = "Captain";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 9){
           input = "Lieutenant";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 10){
           input = "Lieutenant";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 11){
           input = "Sergeant";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 12){
           input = "Sergeant";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 13){
           input = "Sergeant";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 14){
           input = "Sergeant";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 15){
           input = "Corporal";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 16){
           input = "Corporal";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 17){
           input = "Corporal";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 18){
           input = "Corporal";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 19){
           input = "Corporal";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 20){
           input = "Corporal";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 21){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 22){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 23){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 24){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 25){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 26){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 27){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 28){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }if(numb == 29){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  };
        }if(numb == 30){
           input = "Private";
           if (one.is_open()){
                  while(getline(one, line)){
                     if(line.find(input) != string::npos){
                        player1();
                     }
                  }
               }else {
                  one<<numb<<" ";
                  one<<input<<endl;
                  }
        }
}
void player2(){
   int numb;
    string input;
        ofstream two("player2.txt");
        numb = rand()%30 +1;
        if(numb = 1){
           input = "Admiral";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 2){
           input = "General";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 3){
           input = "Colonel";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 4){
           input = "Colonel";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 5){
           input = "Major";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 6){
           input = "Major";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 7){
           input = "Captain";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 8){
           input = "Captain";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 9){
           input = "Lieutenant";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 10){
           input = "Lieutenant";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 11){
           input = "Sergeant";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 12){
           input = "Sergeant";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 13){
           input = "Sergeant";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 14){
           input = "Sergeant";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 15){
           input = "Corporal";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 16){
           input = "Corporal";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 17){
           input = "Corporal";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 18){
           input = "Corporal";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 19){
           input = "Corporal";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 20){
           input = "Corporal";
           two<<numb<<" ";
            two<<input<<endl;
        }if(numb = 21){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 22){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 23){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 24){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 25){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 26){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 27){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 28){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 29){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }if(numb = 30){
           input = "Private";
           two<<numb<<" ";
           two<<input<<endl;
        }
}


int main(){
    loadingScreen();
}