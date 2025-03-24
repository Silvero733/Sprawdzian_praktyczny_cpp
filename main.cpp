#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>

void zad_1();
void zad_2();
void zad_3();
void zad_4();
void zad_5();
void zad_6();
int los_zad_4();
int main()
{
    srand(time(NULL));
    zad_1();
}
void zad_1(){
     long long ilosc_bakterii = 1;
     float czas = 0;

     while(ilosc_bakterii<5000000000){
        std::cout<<"Ilosc bakterii: "<<ilosc_bakterii<<std::endl;
        std::cout<<"Czas: "<<czas<<" h"<<std::endl;
        ilosc_bakterii *= 2;
        czas+=0.5;
        Sleep(1000);
     }
}

void zad_2(){
    int liczba = 0;
    int liczba_pomocnicza = 0;
    int ilosc_parzystych = 0;
    int ilosc_nieparzystych = 0;

    std::cout<<"Podaj liczbe nie wieksza niz 2 mld: ";
    std::cin>>liczba;
    if(liczba>2000000000){
        std::cout<<"Zbyt duza liczba - maksymalna wartosc to 2mld";
    }
    else{
        while(liczba>0){
            liczba_pomocnicza = liczba%10;
            std::cout<<liczba_pomocnicza<<std::endl;
            if(liczba_pomocnicza%2==0){
                ilosc_parzystych+=1;
            }
            else{
                ilosc_nieparzystych+=1;
            }
            liczba = liczba/10;
        }
        std::cout<<"ilosc parzystch: "<<ilosc_parzystych<<std::endl;
        std::cout<<"ilosc nieparzystch: "<<ilosc_nieparzystych<<std::endl;

    }
}

void zad_3(){
    rand();
    std::cout<<"Wynik losowania Pseudo - Lotto: "<<std::endl;
    for (int i = 0; i <=5; i++){
        std::cout<<rand()%49+1<<" ";
    }
}

void zad_4(){
    int macierz[3][3]={};
    int macierz_transponowana[3][3]={};
    int wyznacznik = 0;

        for (int i = 0; i <= 2; i++){
        for (int j = 0; j<=2; j++){
            macierz[j][i] = los_zad_4();
        }
    }


    for (int i = 0; i <= 2; i++){
        for (int j = 0; j<=2; j++){
            macierz_transponowana[i][j]=macierz[j][i];
        }
    }

    wyznacznik = ((macierz_transponowana[0][0]*macierz_transponowana[1][1]*macierz_transponowana[2][2])+(macierz_transponowana[1][0]*macierz_transponowana[2][1]*macierz_transponowana[0][2])+(macierz_transponowana[2][0]* macierz_transponowana[0][1]*macierz_transponowana[1][2]))-((macierz_transponowana[0][2]*macierz_transponowana[1][1]*macierz_transponowana[2][0])+(macierz_transponowana[1][2]*macierz_transponowana[2][1]*macierz_transponowana[0][0])+(macierz_transponowana[2][2]*macierz_transponowana[0][1]*macierz_transponowana[1][0]));

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j<=2; j++){
            std::cout<<macierz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<std::endl;

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j<=2; j++){
            std::cout<<macierz_transponowana[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<std::endl;

    std::cout<<"wyznacznik: "<<wyznacznik;

}

int los_zad_4(){
    int liczba = 0;
    while(liczba==0){
        liczba = rand()%20-10;
    }
    return liczba;
}

void zad_5(){
    int Plansza[5] = {};
    int pozycja = 0;
    char ruch = ' ';
    std::cout<<"Gdzie ma sie pojawic postac? (od 0 do 4): ";
    std::cin>>pozycja;
    if(pozycja>-1&&pozycja<5){
        while(true){
                system("cls");
            Plansza[pozycja] = 1;
            for(int i = 0; i <= 4; i++){
                std::cout<<Plansza[i]<<std::endl;
            }
            std::cin>>ruch;
            Plansza[pozycja] = 0;
            if (ruch=='w'){
                pozycja-=1;
            }
            else if (ruch=='s'){
                pozycja+=1;
            }
            if(pozycja>4){
                pozycja = 0;
            }
            if(pozycja<0){
                pozycja = 4;
            }
        }
    }
}

void zad_6(){
    int znak = 0;
    std::string wiadomosc = " ";
    std::cout<<"Podaj wiadomosc: ";
    std::getline(std::cin,wiadomosc);
    for(int i = 0; i<= wiadomosc.size()-1;i++){
            if (wiadomosc[i]!=32){
            znak = wiadomosc[i];
            std::cout<<znak;
            }
            else{
                std::cout<<wiadomosc[i];
            }

    }
}
