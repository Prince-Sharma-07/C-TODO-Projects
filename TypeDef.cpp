#include<iostream>
#include<vector>
typedef std::vector<std::pair<std::string , int>>  Strlist_t;

int main(){
    Strlist_t text(5);
    text[0].first = "Prince";
    text[0].second = 20;
    std::cout<<"Name : "<<text[0].first<<std::endl<<"Age : "<<text[0].second<<std::endl;
}


