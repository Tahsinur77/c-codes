#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class Item{
private:

     string name;
     int quantity;
     float price;
public:


void setName(string name){
    this->name=name;
    }
    string getName(){
    return name;
    }
    void setQuantity(int quantity){
    this->quantity=quantity;
    }
     int getQuantity()
    {
    return quantity;
    }


   void setPrice(float price){
    this->price=price;
    }
    float getPrice(){
    return price;
    }

Item(){
     cout<<"I am default constructor"<<endl;
}
Item(string name,int quantity,float price){

     this->name= name;
     this->quantity=quantity;
    this->price=price;
}
void display(){
cout<<name<<" "<<quantity<<" "<<price<<endl;

}

};

int main()
{

   freopen("item.txt","r",stdin);
    int n = 2;
    string name;
    int quantity;
    double price;


   vector<Item> v;

    string a;
    int b;
   double c;
   double sum = 0 ;
   for(int i = 0 ; i <n ; i++){
       cin>>a>>b>>c;
        Item s1(a,b,c);
        v.push_back(s1);
        sum+= c;
   }
    for(int i = 0 ; i < n ; i++){
        v[i].display();
    }
    cout<<"Price = "<<sum<<endl;


    return 0;
}
