#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

class player {

    public:

    string pname;

};

int main () {

    
                                                                          
                                                                          
cout<<"`7MM'''Yb.      db      `7MN.   `7MF' `7MM'''Mq.  `7MM'''Mq.   .g8'''bgd  "<<endl;
cout<<"  MM    `Yb.   ;MM:       MMN.    M     MM   `MM.   MM   `MM..dP'     `M  "<<endl;
cout<<"  MM     `Mb  ,V^MM.      M YMb   M     MM   ,M9    MM   ,M9 dM'       `  "<<endl;
cout<<"  MM      MM ,M  `MM      M  `MN. M     MMmmdM9     MMmmdM9  MM           "<<endl;
cout<<"  MM     ,MP AbmmmqMA     M   `MM.M     MM  YM.     MM       MM.    `7MMF'"<<endl;
cout<<"  MM    ,dP'A'     VML    M     YMM     MM   `Mb.   MM       `Mb.     MM  "<<endl;
cout<<".JMMmmmdP'.AMA.   .AMMA..JML.    YM   .JMML. .JMM..JMML.       `'bmmmdPY"<<endl;

cout<<"_________________________________________________________________________"<<endl<<endl;
string pname;
cout<<"ciao avventuriero! prima di iniziare, scrivi il tuo nome: "; cin>>pname;

if (pname.size() < 3)
{
    while (pname.size() < 3)
    {
        cout<<"nome troppo piccolo, riprova: "<<endl; cin>>pname; 
    }
    
}


cout<<"ciao "<<pname<<"!"<<endl<<endl;

cout<<"decidi che classe diventare!"<<endl<<endl;

cout<<"SPADACCINO:          ARCIERE:                MAGO:"<<endl;
cout<<"abile con la         abile con               abile con il Bastone,"<<endl;
cout<<"spada, e molto       l'arco, agile,          si può curare tramite incantesimi"<<endl;
cout<<"resistente.          ma poca resistenza.     poca vita,resistenza e potenza"<<endl<<endl;

string SPADACCINO,spadaccino,Spadaccino,ARCIERE,arciere,Arciere,MAGO,mago,Mago;

string classe;
while (classe != "SPADACCINO" ||  classe != "spadaccino" || classe != "Spadaccino" || classe != "ARCIERE" ||  classe != "arciere" || classe != "Arciere" || classe != "MAGO" || classe != "Mago" || classe != "mago")
{


cout<<"scrivi quale classe scegli: "; cin>>classe;

int php = 0,pme = 0 ,par = 0,ppot = 0;


if (classe == "SPADACCINO" ||  classe == "spadaccino" || classe == "Spadaccino")
{
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣶⣿⣿⣿⣶⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⢟⣭⣴⣶⡦⠍⠛⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠈⠳⣶⣤⣤⣶⣿⠿⢫⣾⣿⣿⠋⠀⠀⠀⠀⢸⣿⡟⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠈⠉⠉⠉⠁⣰⣿⣿⣿⠇⠀⢀⣀⣤⣴⣾⣧⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⡟⢠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⣠⣿⣿⣿⡟⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⢀⣠⣶⣿⣿⡿⠋⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⠀⠀⠀⠀"<<endl;
    cout<<"⠉⠛⠛⠛⠛⠛⠉⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣛⣥⣶⣆⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⠏⣥⣤⡙⢟⣫⡴⠿⠿⠿⠷⠿⣷⡀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⡜⢿⡿⢃⣌⢻⣟⠛⠻⠶⠶⢶⣾⣿⡄"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡄⣾⣿⣿⣷⡝⢿⣷⣶⣶⣦⡾⠟⠁"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣟⣛⣻⠿⠿⢧⢹⣿⣿⣿⣿⣦⡙⢷⡶⠋⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣝⠻⣿⣿⣛⠷⠌⢿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣮⣝⠻⣿⣶⣦⣤⣉⠛⠿⢿⠁⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠰⣾⣿⣿⣿⣿⣿⣿⣿⣿⣶⣭⣛⠿⢿⣧⢷⣤⡀⠀⠀⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠛⠛⠿⣿⣿⣿⣿⣷⡦⠉⢿⣿⡷⠦⠀⠀⠀"<<endl;
    cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⡿⠋⠀⠀⠈"<<endl<<endl;
    

    php = 20;
    pme = 10;
    par = 30;
    ppot = 30;

    cout<<pname<<"!"<<" ecco le tue statistiche:"<<endl;
    cout<<"HP = "<<php<<endl;
    cout<<"ENERGIA = "<<pme<<endl;
    cout<<"ARMATURA = "<<par<<endl;
    cout<<"POTENZA ="<<ppot<<endl;


    break;
}

else if (classe == "ARCIERE" ||  classe == "arciere" || classe == "Arciere")
{
 cout<<"   ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⠎⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⢀⣠⣴⣶⡶⠿⠿⠛⠛⠉⠀⠀⠀⢂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠙⠶⢤⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⣰⣶⣮⡁⠠⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⣘⡻⢿⣿⣦⣄⡉⠢⢄⡀⠀⠀⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⢰⣿⡇⠀⠙⠻⣿⣿⣷⣦⡈⠑⠤⣀⠀⠀⠀⣠⣴⣶⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⢿⣧⠀⠀⠀⠀⠉⠻⣿⣿⣿⣷⣦⣍⠲⢄⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠈⢿⣧⠀⠀⠀⠀⠀⠈⠻⢟⢿⣿⣿⣇⣿⣷⣮⡙⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠻⣧⡀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⢰⣶⣭⡳⣄⡀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠹⣧⠀⠀⠀⠀⠀⠀⠀⣬⣿⣿⣿⣿⣿⡟⣼⣿⣿⣿⣶⣿⣵⣶⣄⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠀⣿⠀⠀⡀⠠⠀⠀⠁⢿⣿⣿⣿⣿⠏⣼⣿⣟⠿⠿⣿⣿⣿⣿⣿⣇"<<endl;
 cout<<"⠀⠀⠀⠀⡠⠗⠂⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⢸⣿⡿⠋⠀⠀⠀⠈⠉⠉⠉⠉"<<endl;
 cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⡏⠻⣿⣷⣟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡿⣿⣄⠈⠙⠻⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⡈⠙⠛⠦⢄⠀⠉⠳⣄⠀⠀⠀⠀⠀⠀"<<endl;
 cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠈⢂⠀⠀⠀⠀⠀"<<endl<<endl;

    php = 15;
    pme = 20;
    par = 25;
    ppot = 25;

    cout<<pname<<"!"<<" ecco le tue statistiche:"<<endl;
    cout<<"HP = "<<php<<endl;
    cout<<"ENERGIA = "<<pme<<endl;
    cout<<"ARMATURA = "<<par<<endl;
        cout<<"POTENZA ="<<ppot<<endl;

break;
}

else if (classe == "MAGO" || classe == "Mago" || classe== "mago")
{
cout<<"   ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠞⠛⠉⠉⠛⠻⢷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⠀⠀⠀⠀⠀⠰⡍⠻⣷⣄⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠘⣷⣌⡛⠷⣯⣽⣧⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡏⣀⣀⣀⠀⠀⠀⠀⢀⣀⣀⢹⣿⢿⣾⠟⠙⢿⣦⡀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣿⡄⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣼⡧⠶⠖⠚⠛⠛⠉⠉⠙⠛⠛⠲⠶⢾⣧⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⣀⣤⡶⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⢶⣤⣀⠀⠀⠀⠀"<<endl;
cout<<"⠀⣠⣶⣿⣿⣥⣤⣤⣤⣤⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣠⣤⣤⣤⣤⣬⣽⣿⣶⣄⠀"<<endl;
cout<<"⠐⣿⣻⣿⣿⣿⡿⠀⢠⡏⠙⡟⠻⣭⣍⣙⣛⣿⣿⣛⣋⣩⣭⠟⢻⠏⢹⡆⠀⢿⣿⣿⣿⡟⣿⠃"<<endl;
cout<<"⠀⠙⢿⣯⣟⡷⠦⣤⡾⢀⣤⡇⠈⠙⠯⣽⣿⡇⢸⣿⣯⠽⠋⠁⢸⡆⡀⢿⣤⠴⢾⣻⣽⡾⠋⠀"<<endl;
cout<<"⠀⠀⠀⠈⠛⠛⠿⡾⢡⠏⢸⡄⠀⠀⠉⣉⣼⠁⠈⢧⣈⠉⠀⠀⢀⣇⠹⡌⢷⡿⠟⠛⠁⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⡼⣡⡟⢠⡿⣷⣄⢀⣰⣁⣭⣀⣀⣬⣈⣧⡀⣠⢾⢿⣄⢹⣌⢧⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠰⢿⡟⢠⢿⡄⠙⠓⠛⠛⠁⠀⢠⣄⠀⠈⠙⠛⠛⠋⢀⡿⡄⢻⡿⠇⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⣾⣡⡎⠈⢷⣤⣀⣀⡠⠤⠚⠉⠉⠓⠦⢄⣀⣀⣤⡞⠁⠹⣌⣷⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠙⣿⢠⠂⢸⡆⠀⠹⡶⠟⠉⠁⠈⠉⠻⢶⠏⠀⢠⡇⠀⡄⣿⠋⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⢿⢿⢰⡏⣷⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⣾⣹⣇⡿⡿⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠈⠈⢿⠻⣿⠿⣧⡄⠀⠀⠀⠀⠀⠀⢠⣴⠿⢿⠟⢿⠃⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢳⣾⡄⠀⠀⢀⣶⡿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⢿⣄⣠⡾⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;

    php = 10;
    pme = 40;
    par = 15;
    ppot = 20;

    cout<<pname<<"!"<<" ecco le tue statistiche:"<<endl;
    cout<<"HP = "<<php<<endl;
    cout<<"ENERGIA = "<<pme<<endl;
    cout<<"ARMATURA = "<<par<<endl;
    cout<<"POTENZA ="<<ppot<<endl;
  break;
}



else if (classe != "SPADACCINO" ||  classe != "spadaccino" || classe != "Spadaccino" || classe != "ARCIERE" || classe != "Arciere" || classe != "arciere" || classe != "MAGO" || classe != "Mago" || classe != "mago")
{
    cout<<"errore"<<endl<<endl;
}}

srand(time(NULL));

int casuality =  rand() % 11;



int ooo = 0;

cout<<"[SCRIVI QUALSIASI NUMERO DIVERSO DA 0 PER PROSEGUIRE]: ";

cin>>ooo;

string inizio = "inizio";

while (ooo != 0)
{

cout<<"ecco la mappa di gioco:"<<endl<<endl;

cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@%*-#@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@+-**@@@@@@@@@@- .=%*=@@@@@#.-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@#--%%%%+..:%@%- .:#%@@=:#%-..:-:.  ..=***%@#+=*@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@*=.    ..     ..  .::-:              .   .%@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@%@@%@%@-.             ..       [] SUPER MEGA   .:#@@@@@@@@@@"<<endl;
cout<<"@@@@:..*@@@@-.                  .#:          DUNGEON      .*#@@@@@@@@@"<<endl;
cout<<"@@@@@%**@@@@=                    :+.                       .-+*%@@@@@@"<<endl;
cout<<"@@@@@@@@@*=.                     .:=:.                        .=@@@@@@"<<endl;
cout<<"@@@@@@+...                       .:*:.                         .-@@@@@"<<endl;
cout<<"@#-=%@:                          :=                             .#@@@@"<<endl;
cout<<"@%-..                                                            =@@@@"<<endl;
cout<<"@@@+.                                                           .-@@@@"<<endl;
cout<<"@@@#.                                                           .*@@@@"<<endl;
cout<<"@@@@-                                    ..                     +@@@@@"<<endl;
cout<<"@@@@#.     []                         .:#@@#%*:.          ...  .:@@@@@"<<endl;
cout<<"@@#*+. TRANSBURGO                      .=+*@@@%:    .-+-++=%+...-**%@@"<<endl;
cout<<"@@=..                           []     ...+@@@@@*...=@@@@@@@##%%-::=@@"<<endl;
cout<<"@*.    .:..                  CAPITALE    .-=.:*@@@#%@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@%:.  .=%%:                 DRAKENGARD         .=%@#=*:=@@@@@@@@@@@@@@"<<endl;
cout<<"@@@+::....:                                     .+@@=--*@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@*%@=. ---:..    ..                          .#+#@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@*=+@@@@@@#: ...                          ...+@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@*....+-.                        ..-#@@%@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@%+%@@@*.                           .:@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@*:.                           .#%#@@#@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@#.                             ....*@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@:              [] VILLAGGIO      .-%@@@@@...+@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@*..                 BASE        ...*@@@@@@+-..*"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@#:.                               .*@@@@@@@@##@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@#:-...          .....   [@] INIZIO .*@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@%**-+-=#=#%@@@@*:.        .:#@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*..     .=+@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*..--: :@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=...+@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

break;

}

string tt = "ti trovi in basso a destra della mappa:";

for (char tt1 : tt)
{
    cout<<tt1<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));

}

string pausa = " ";

for (char pausad : pausa)
{
    cout<<pausad<<flush;
    this_thread::sleep_for(chrono::milliseconds(2000));
}


cout<<""<<endl;

string showp = "[MAGO MERLINO]:";

for (char showd1 : showp)
{
   cout<<showd1<<flush;
   this_thread::sleep_for(chrono::milliseconds(100));
}
cout<<""<<endl;
string dmm1 = "Ciao avventuriero, sono Mago Merlino, cosa ti porta qui? ";


for (char pausad1 : pausa)
{
    cout<<pausad1<<flush;
    this_thread::sleep_for(chrono::milliseconds(2000));
}

for (char showd2 : dmm1)
{
    cout<<showd2<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}

// al posto della risposta aperta aggiungo delle risposte pre-impostate

cout<<""<<endl;
        string d1 = "la voglia di avventura!";
        string d2 = "Tu patatino mio <3 !";
        string d3 = "daniele mi ha costretto a giocare a sto gioco.";
        string rispostad123;

cout<<"[A]: ";

for (char d11 : d1)
{
    cout<<d11<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}

cout<<""<<endl;

cout<<"[B]: ";

for (char d21 : d2)
{
    cout<<d21<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}
cout<<""<<endl;
cout<<"[C]: ";
for (char d31 : d3)
{
    cout<<d31<<flush;
    this_thread::sleep_for(chrono::milliseconds(50));
}
cout<<""<<endl;





while (rispostad123 != "A" || rispostad123 != "a" || rispostad123 != "b" || rispostad123 !=  "B" || rispostad123 != "c" || rispostad123 != "C" )
{
string r2 = "OH.. CHE TATO! BACIAMI TUTTOOO!!!!!!";
string r3 = "mi dispiace soldato, sopportalo.";        

cin>>rispostad123;   

string r1 = "oh.. beh.. tanto non mi interessava, BRUH.";
if (rispostad123 == "A" || rispostad123 == "a")
{


for (char cr1 : r1)
{
    cout<<cr1<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}
}

if (rispostad123 == "B" || rispostad123 == "b")
{
    
    for (char cr2 : r2)
    {

        cout<<cr2<<flush;
        this_thread::sleep_for(chrono::milliseconds(100));

    }

}

if (rispostad123 == "C" || rispostad123 == "c")
{

for (char cr3 : r3)
{

cout<<cr3<<flush;
this_thread::sleep_for(chrono::milliseconds(100));

}
}



cout<<""<<endl;

break;
         
}
for (char pausa1 : pausa)
{
    cout<<pausa1<<flush;

    this_thread::sleep_for(chrono::milliseconds(1000));
}

for (char showp2 : showp)
{
    cout<<showp2<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}

cout<<""<<endl;


string indovinello = "ti faccio un indovinello, di che colore era il cavallo";
string indovinelloo = "bianco di napoleone?";

                            string risposta_bianco = "a";

while (risposta_bianco != "bianco" || risposta_bianco != "Bianco" || risposta_bianco != "BIANCO")
{


for (char ind : indovinello)
{
    cout<<ind<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}

cout<<""<<endl;

for (char ind1 : indovinelloo)
{
    cout<<ind1<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}
cout<<""<<endl;

cin>>risposta_bianco;

if (risposta_bianco == "bianco"|| risposta_bianco == "Bianco" || risposta_bianco == "BIANCO")
{
    string ricm = "Bravo! ecco a te alcune monete...";

    for (char ricm1 : ricm)
    {
        cout<<ricm1<<flush;

        this_thread::sleep_for(chrono::milliseconds(100));
    }
    int money = 5;
    float xp = 1;

    break;
}

else {

string bruh = "BRUH, la domanda era facile... dai, mi sento gentile, riprova.";
for (char bruh1 : bruh)
{
    cout<<bruh1<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}
cout<<""<<endl;
}

}

    return 0;
}