#include<iostream>
int main(){
    int costPrice,profit,loss,sellPrice;
    
    std::cout<<"input the actual cost of the goods : \n";
    std::cin>>costPrice;
    std::cout<<"input the sell price of goods: \n";
    std::cin>>sellPrice;
    std::cout<<"dou you like to calculate profit or loss \n";
    
    if (sellPrice>costPrice){
        std::cout<<"you are in profit of : "<<sellPrice-costPrice<<" rupees \n";

    }
    else if (sellPrice<costPrice)
    {
       std::cout<<"you are in loss of : "<<costPrice-sellPrice<<" rupees \n";

    }
    else{
        std::cout<<"you are in balance neither loss nor profit";
    }
}
