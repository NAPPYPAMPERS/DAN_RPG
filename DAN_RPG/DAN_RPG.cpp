#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;


int main () {

    
cout<<".#####....####...##..##..........#####...#####....####.."<<endl;
cout<<".##..##..##..##..###.##..........##..##..##..##..##....."<<endl;
cout<<".##..##..######..##.###..........#####...#####...##.###."<<endl;
cout<<".##..##..##..##..##..##..........##..##..##......##..##."<<endl;
cout<<".#####...##..##..##..##..######..##..##..##.......####.."<<endl;
cout<<"........................................................"<<endl<<endl;

cout<<"________________________________________________________"<<endl<<endl;
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
cout<<"@%:.  .=%%:                 GRAKENGARD         .=%@#=*:=@@@@@@@@@@@@@@"<<endl;
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

string showp = "[MAGO MERDINO]:";

for (char showd1 : showp)
{
   cout<<showd1<<flush;
   this_thread::sleep_for(chrono::milliseconds(100));
}
cout<<""<<endl;
string dmm1 = "Ciao avventuriero, sono Mago Merdino, cosa ti porta qui? ";


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
cout<<""<<endl;
string d1;
while (d1 != "+")
{
        cin>>d1;   

string r1 = "oh.. beh.. tanto non mi interessava, BRUH.";

for (char cr1 : r1)
{
    cout<<cr1<<flush;
    this_thread::sleep_for(chrono::milliseconds(100));
}

cout<<""<<endl;

break;
         
}




    return 0;
}