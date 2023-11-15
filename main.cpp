#include <iostream>
using namespace std;

int main(){
    string imie;
    int pkt = 0;
    string odp;
    string EasterEgg = "xd";
    string xd;

    cout<<"wpisz imie: ";
    cin>>imie;
    cout<<"Witaj "<<imie<<", odpowiadaj na pytania pojedynczymi odpowiedziami a,b,c,d np. 'a', baw sie dobrze xp\nwpisz cokolwiek aby kontynuowac"<<endl;
    cin>>xd;

    system("cls");

    for(int i=1; i<=5; i++){
        if(i==1){
        cout<<"Pytanie "<<i<<". ktory mamy rok?\na) 2023\nb) 1940\nc) 546\nd) 2000\n";
        cin>>odp;
        if(odp=="a"){
            pkt = pkt+10;
        }
        system("cls");
        }else if(i==2){
            cout<<"Pytanie "<<i<<". kto zdobyl zlota pilke w 2017r.?\na) Lionel Messi\nb) Cristiano Ronaldo\nc) Neymar Junior\nd) Robert Lewandowski\n";
            cin>>odp;
            if(odp=="b"){
                pkt = pkt+10;
            }
            system("cls");
        }else if(i==3){
            cout <<"Pytanie "<<i<<". Ile jest kolorow oczu na swiecie?\na) 1\nb) 2\nc) 3\nd) 4\n";
            cin>>odp;
            if(odp=="c"){
                pkt = pkt+10;
            }
            system("cls");
        }else if(i==4){
            cout<<"Pytanie "<<i<<". Jak miala na imie dziewczyna duch w 2 czesci dziadow?\na) Rozia\nb) Magda\nc) Patrycja\nd)Zuzia\n";
            cin>>odp;
            if(odp=="d"){
                pkt = pkt+10;
            }
            system("cls");
        }else if(i==5){
            cout<<"Pytanie "<<i<<". Kiedy powstal Fortnite battle royale?\na) 1 wrzesnia 1939\nb) 6 pazdziernika 2006\nc) 26 wrzesnia 2017\nd) 28 sierpnia 2020\n";
            cin>>odp;
            if(odp=="c"){
                pkt = pkt+10;
            }else if(odp=="b"){
                EasterEgg = "urodziny";
            }
            system("cls");
        }

    }
    if(EasterEgg == "urodziny"){
        cout<<"koniec quizu, twoje punkty: "<<pkt<<"/50 "<<" ODBLOKOWANO EasterEgg'a !!1 "<<EasterEgg;
    }else{
        cout<<"koniec quizu, twoje punkty: "<<pkt<<"/50";
    }

}
