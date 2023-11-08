#include <iostream>
using namespace std;

int main(){
    string imie;
    string odp;
    int pkt = 0;
    string EasterEgg;
    string start;

    cout<<"imie: ";
    cin>>imie;

    cout<<"Witaj w quzie! odpowiedzi pisz malymi literami np. 'a', z przedzialu z a,b,c,d.\nDo kolejnego pytania quiz przechodzi automatycznie nawet po wybraniu zlej odpowiedzi,\ndopiero pod koniec poznasz zdobyte punkty.\nwcisnij dowolny przycisk aby kontynuowac\n";
    cin>>start;
    system("cls");

    for(int i=1; i<=5; i++){
    cout<<"pytanie."<<i<<endl;

        if(i==1){
            cout<<"ktory mamy rok?"<<endl;
            cout<<"a)2019\n";
            cout<<"b)1939\n";
            cout<<"c)239\n";
            cout<<"d)2023\n";
            cin>>odp;
            if(odp == "d"){
            pkt += 10;
            }
            system("cls");
        }


        if(i==2){
            cout<<"Kto jest tworca c++?"<<endl;
            cout<<"a)Cristiano Ronaldo\n";
            cout<<"b)Bjarne Stroustrup\n";
            cout<<"c)John S. Pemberton\n";
            cout<<"d)Elon Musk\n";
            cin>>odp;
            if(odp == "b"){
            pkt += 10;
            }
            system("cls");
        }



        if(i==3){
            cout<<"ile bramek strzelil Lukasz Piszczek w sezonie 2011/12?"<<endl;
            cout<<"a)204\n";
            cout<<"b)999\n";
            cout<<"c)4\n";
            cout<<"d)28\n";
            cin>>odp;
            if(odp == "c"){
            pkt += 10;
            }
            system("cls");
        }


        if(i==4){
            cout<<"ile kochanek mial zeus?"<<endl;
            cout<<"a)204\n";
            cout<<"b)999\n";
            cout<<"c)4\n";
            cout<<"d)28\n";
            cin>>odp;
            if(odp == "d"){
                pkt += 10;
            }
            system("cls");
        }


        if(i==5){
            cout<<"Kiedy zostal stworzony Fortnite"<<endl;
            cout<<"a)26 wrzesnia 2017\n";
            cout<<"b)1 wrzesnia 1939\n";
            cout<<"c)15 stycznia 2018\n";
            cout<<"d)6 pazdziernika 2006\n";
            cin>>odp;
            if(odp=="a"){
                pkt +=10;
            }else if(odp=="d"){
                EasterEgg = "061006";
            }
            system("cls");
        }

    }

    if(pkt == 50){
        cout<<"Koniec quizu, Brawo "<<imie<<"! zdobyles maksymalna ilosc punktow! twoje punkty:"<<pkt<<"/50"<<endl;
    }else{

    cout<<"koniec quizu, twoje punkty: "<<pkt<<"/50"<<endl;
    }
    if(EasterEgg == "061006"){
        cout<<"EasterEgg: "<<EasterEgg;
    }
}
