#include<iostream>
#include<string>
using namespace std;
int main(){
    string name1;
    string name2;
    cin >> name1;
    cin>> name2;
    int i=0,j=0;
    for(int i=0; i<name1.length();i++){
        for(int j=0; j<name2.length();j++){
            if(name1[i]==name2[j]){
                name1=name1.erase(i,1);
                name2=name2.erase(j,1);
            }
        }
    }
    int n;
    n=(name1.length())+(name2.length());
    string game="FLRM";
    if(n<=4){
        game=game.erase((n-1),1);
    }
    else {
        if ((n%4)==0) game=game.erase(4,1);
       else game=game.erase(((n%4)-1),1);
    }
    if(n<=3){
         game=game.erase((n-1),1);
    }
    else {
         if ((n%3)==0) game=game.erase(3,1);
        else game=game.erase(((n%3)-1),1);
    }
    if(n<=2){
        game=game.erase((n-1),1);
    }
    else {
         if ((n%2)==0) game=game.erase(2,1);
        else game=game.erase(((n%2)-1),1);
    }
    if (game=="F"){
        cout<<"Friendship"<<endl;
    }
    if (game=="L"){
        cout<<"One-sided love"<<endl;
    }
    if (game=="R"){
        cout<<"Relationship"<<endl;
    }
    if (game=="M"){
        cout<<"Married"<<endl;
    }
    return 0;
}