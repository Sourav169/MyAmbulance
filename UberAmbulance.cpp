#include<bits/stdc++.h>
using namespace std;

map<string,pair<string,int>>add_user;
map<string,pair<string,string>>add_veichel;
map<string,pair<pair<string,string>,string>>offer_veichelType;
map<string,pair<pair<string,string>,int>>offer_veichelSeat;

void addUser(){
    string name,gender;
    int age;
    cin>>name>>gender>>age;
    add_user[name]=make_pair(gender,age);
    for(auto m:add_user){
        cout<<m.first<<" "<<m.second.first<<endl;
    }
}
void addVeichel(){
    string name,car,no;
    cin>>name>>car>>no;
    add_veichel[name]=make_pair(car,no);
    for(auto m:add_veichel){
        cout<<m.first<<" "<<m.second.first<<endl;
    }


}

void offerVeichel(){
    string name,origin,veichel,destination;
    int seat;
    cin>>name>>origin>>veichel>>destination>>seat;
    offer_veichelType[name]=make_pair(make_pair(origin,destination),veichel);
    offer_veichelSeat[name]=make_pair(make_pair(origin,destination),seat);
    for(auto m:offer_veichelSeat){
        cout<<m.first<<" "<<m.second.second<<endl;
    }


}






int main(){
    cout<<"Ride share"<<endl;
    while(1){
        string argument1;
        cin>>argument1;
        if(argument1=="add-user"){
            cout<<"enter user"<<endl;
            addUser();
        }
        if(argument1=="add-veichel"){
            cout<<"enter veichelr"<<endl;
            addVeichel();
        }
        if(argument1=="offer-ride"){
            cout<<"enter veichelr-details"<<endl;
            offerVeichel();
        }

    }
}














