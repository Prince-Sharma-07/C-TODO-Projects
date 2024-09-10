#include<iostream>

int main(){
      
    srand(time(NULL));
    int Num = (rand()%100)+1;
    int Guess = 0;
    int Tries = 0;

    std::cout<<"******* NUMBER GUESSING GAME **********"<<std::endl<<std::endl;

    do{   
        std::cout<<"Enter a number between [1-100] : "<<std::endl;
        std::cin>>Guess;
        Tries++;
        if(Guess > Num){
        std::cout<<"Too High!!!"<<std::endl;
        } 
        else if(Guess < Num){
        std::cout<<"Too Low!!!"<<std::endl;
        } 
        else{
        std::cout<<std::endl<<"Hurrah!!! CORRECT # of tries: "<<Tries<<std::endl;
        }
    }while(Num!=Guess);

    std::cout<<std::endl<<"********************************************"<<std::endl;

    return 0;
}