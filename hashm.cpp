#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;
long long int attempt;
clock_t start_t, end_t;
void xoh(string &h);
void exo2();
void e3();
void reh();
void passcheckhelp();
void table(string &l); /// might get an upgrade of usage
void login(string username , string password);
void admin(); ///super op!!!!
void changepass(string &ouser);
void internet(string &name); /// connects and scans for internets
void specs();
void dhashm();///to accesss use 'hashm --virus --darkhashm'
int deve();
int encrypt();
int devd();
int decypher();
string crackPassword(string pass);
string xo(string &u);
string exo();
string e1(string &n);
string v1e(string &r);
string v1();
string hashm();
string passwordcheck1();
string crackPassword(string pass);
string register1(string &username , string &password , string &passwordreapeat);
string whquestions1(string &question) /// searches the question in google
{
    cout<<"Put a '?' at the end of your sentence.\n";
    string a[100000];
    long int n=0;
    while (a[n]!="?")
    {
        cin>>a[n];
        n++;
    }
}
struct whquestions /// struct for AI
{
    string what;
    string how;
    string when;
    string where;
    string who;
    string which;
    string why;
};
void ArtificialIntellegenc()
{
    cout<<"AI is in development"<<"press 1 for ridirection to main control center , press anything for countinueation"<<endl;
    string countinu;
    cin>>countinu;
    if(countinu=="1")
      hashm();
      else
      {
          string a[100000];
          int n=0;
          while (1)
          {
              cin>>a[n];
              if(a[n]=="exit")
                exit(1);
                else if(a[n]=="main")
                    hashm();
                else if(a[n]=="hi" || a[n]=="Hi" || a[n]=="Hello" || a[n]=="HI" || a[n]=="hello")
                    cout<<"Greetings, I am the AI of the future\n";
                    else if(a[n]=="dummy" || a[n]=="Dummy" || a[n]=="fucker" || a[n]=="bitch" || a[n]=="Bitch" || a[n]=="Fucker")
                        cout<<"NO! you are\n";
                    else if(a[n]=="?" || a[n]=="help")
                       cout<<"I am an AI ask me anything OR tell me to do something!!\n";
                       else if(a[n]=="who" || a[n]=="what"||a[n]=="which" ||a[n]=="how" ||a[n]=="when" ||a[n]=="where" ||a[n]=="why")
                       {
                           ///whquestions1(a[n]);
                       }
                    else
                    {
                        cout<<"AI still for development , Thank you for understanding\n";
                        cout<<"To countinue press 1 ,  to exit enter anything else\n";
                        string que;
                        cin>>que;
                        if(que!="1")
                        exit(1);
                    }
                    n++;
          }
      }

}
int cpluspluserror1(string &start , int &h) /// should be completed
{

                            return 1;
}
int chap(string &start , int &h) /// should be completed
{
       while (start[h]!='"')
                    {
                        cout<<start[h];
                        h++;
                    }
                    h++;
                    if(start[h]!=';')
                    {
                        if(start[h]!='<' && start[h+1]!='<')
                        {
                                cout<<"Compiler error"<<endl;
                                exit(1);
                        }
                        else
                        {
                                h++;
                            if(start[h]=='e' && start[h+1]=='n' && start[h+2]=='d' && start[h+3]=='l')
                                {
                                    cout<<"\n";
                                    h+=4;
                                    {
                                        if(start[h]==';')
                                        {
                                            cout<<"";
                                        }
                                        else
                                        {
                                            return chap(start,h);
                                        }
                                    }
                        }
                        }
                    }
                    else if(start[h]==';')
                    {
                        cout<<"";
                    }
                else
                {
                cout<<"Complier error"<<endl;
                }
}
void cplusplus() ///should be completed
{
    cout<<"Only command available now is 'cout'";
    cout<<"\nDo not include libraries and deafult it is using 'namespace std;'. start with 'int main()'"<<endl;
    int n=3,m=3,h=7;
    string start[100000],braket="}";
    cin>>start[0]>>start[1]>>start[2];
    while (1)
        {
            cin>>start[n];
            if(start[n]=="}")
                break;
            n++;
        }
        m=n;
        n=3;
        while (n<m)
        {
            string backslash="\n";
            if(start[n][0]=='c' && start[n][1]=='o' && start[n][2]=='u' && start[n][3]=='t')
            {
                if(start[n][4]=='<' && start[n][5]=='<' && start[n][6]=='"')
                {
                   chap(start[n],h);
                }
            n++;
        }
        else
        {
            cout<<"In Development"<<endl;
            exit(1);
        }
}
}
void random()
{
      srand((unsigned) time(0));
  int randomNumber;
    randomNumber = rand() % 3 + 1;
if(randomNumber==1)
  cout<<"A useless fact: you are running this program"<<endl;
       else if(randomNumber==2)
           {
cout<<"                             / \  //\'"<<endl;
cout<<"            |\___/|      /   \//  \\'"<<endl;
cout<<"            /0  0  \__  /    //  | \ \'"<<endl;
cout<<"           /     /  \/_/    //   |  \  \'"<<endl;
cout<<"           @_^_@'/   \/_   //    |   \   \'"<<endl;
cout<<"           //_^_/     \/_ //     |    \    \'"<<endl;
cout<<"        ( //) |        \///      |     \     \'"<<endl;
cout<<"      ( / /) _|_ /   )  //       |      \     _\'"<<endl;
cout<<"    ( // /) '/,_ _ _/  ( ; -.    |    _ _\.-~        .-~~~^-."<<endl;
cout<<"  (( / / )) ,-{        _      `-.|.-~-.           .~         `."<<endl;
cout<<" (( // / ))  '/\      /                 ~-. _ .-~      .-~^-.  \'";
cout<<" (( /// ))      `.   {            }                   /      \  \'";
cout<<"  (( / ))     .----~-.\        \-'                 .~         \  `. \^-."<<endl;
cout<<"             ///.----..>        \             _ -~             `.  ^-`  ^-_"<<endl;
cout<<"               ///-._ _ _ _ _ _ _}^ - - - - ~                     ~-- ,.-~"<<endl;
cout<<"                                                                  /.-~"<<endl;
           }
           else
        cout<<"Ever wondered where the dragon logo came from? well here is the source:https://opensource.com/article/18/12/linux-toy-cowsay"<<endl;
    hashm();
}
///driver code
int main()
{
    string enter;
    cin>>enter;
    if(enter=="hashm")
    random();
        else
        e1(enter);
}
///central director
string hashm()
{

    string a[10000];
    cin>>a[0];
    if(a[0]=="--help")
    {
        cout<<"only use this for legal purposes , author r.n"<<endl;
        cout<<"To login use: '--login' \nregister use '--register'\n"<<"Use '--passcheck' to check for the sterngth of your password"<<endl<<"Use '--ping' to ping a website"<<"\nuse '--ip' to get the ip and ping a website"<<endl<<"use --AI to talk to the AI\n";
        cout<<"to hash :"<<endl<<"Use --color to change background color"<<endl<<"Use '--whatin' to get the data in a file: first input the full directory then the file name"<<endl<<"To code in c++ use '--c++'"<<endl<<"Use '--tasks' to get all the tasks running"<<endl;
        cout<<"for md5 hashing use '--md5'"<<endl<<"To hash sha1 use '--sha1'"<<"\nTo encrypt with ryan encrypt use '--re'"<<endl<<"To clear the screen use '--clear'\nto play X,O use '--xo'"<<endl<<"use '--info' for information abouth this progaram"<<endl;
        exit(1);
    }
    else if(a[0]=="--login")
    {
        string p[2];
        cout<<"Enter username and password"<<endl;
        cin>>p[0]>>p[1];
        if(p[0]=="admin" && p[1]=="admin")
            admin();
        else
        login(p[0],p[1]);
    }
    else if(a[0]=="--AI")
        ArtificialIntellegenc();
    else if(a[0]=="--xo")
    {
        cin>>a[1];
          if(a[1]=="--help")
            {
                xoh(a[1]);
            }
        else
        {
            xo(a[1]);
        }
    }
        else if(a[0]=="--ping")
    {
        string ping;
        cin>>ping;
        system(("ping "+ping).c_str());
    }
        else if(a[0]=="--ip")
    {
        string ip;
        cout<<"Enter your websites domain , note:"<<endl;
        cout<<"Do not include https:// or http:// and only use the raw domain not additional things like:\nexample.com/lol https://example.com http://example.com https://example.com/l\nor other types..."<<endl;
        cout<<"The first line is your ip address"<<endl;
        cin>>ip;
        system(("nslookup "+ip).c_str());
        exit(1);
    }
    else if(a[0]=="--whatin")
    {
        cout<<"First enter the complete directory then the file name and the type"<<endl;
        string directory,filename;
        cin>>directory>>filename;
        system(("powershell cd "+directory+" ; type "+filename).c_str());
        exit(1);
    }
    else if(a[0]=="--tasks")
        {
             system("powershell PS");
             exit(1);
        }
    else if(a[0]=="--color")
    {
        string color;
        cin>>color;
        system(("COLOR "+color).c_str());
        cout<<"Color changed , redirecting you to main control center"<<endl;
        hashm();
    }
    else if(a[0]=="--c++")
    {
       cplusplus();
    }
    else if(a[0]=="--virus")
    {
        v1();
    }
    else if(a[0]=="--register")
    {
        string tt,yy,uu;
        cout<<"enter username then password then repeat the password"<<endl;
        cout<<"Tip: you might want to check your password strength with '--passcheck' before registering"<<endl;
        cin>>tt>>yy>>uu;
        register1(tt,yy,uu);
    }
    else if(a[0]=="exit")
    {
        exit(1);
    }
    else if(a[0]=="--passcheck")
    {
        passwordcheck1();
    }
    else if(a[0]=="--re")
    {
        cin>>a[1];
        cout<<"\nuse --help for help\n";
             if(a[1]=="--help")
            {
               reh();
            }
        else if(a[1]=="--e")
        {
           encrypt();
        }
        else if(a[1]=="--d")
        {
            decypher();
        }
        else
        {
           e3();
        }
    }
    else if(a[0]=="--info")
    {
        cout<<"Copyrighted 2021-2021 \nauthor:r.n , all of this programm has been written by r.n except the hashs\n"<<endl;
    }
    else if(a[0]=="--md5")
    {
        cout<<"Sorry this feture does not work yet , if you want to go back use '--back' and to exit use 'exit'"<<endl;
        string k;
        cin>>k;
        if(k=="--back")
        {
            cout<<"redirecting you to central director , from there you can use '--help' to  get help"<<endl;
            hashm();
        }
        else if(k=="exit")
        {
            exit(1);
        }
        else
        {
            e1(k);
        }
    }
        else if(a[0]=="--sha1")
    {
        cout<<"Sorry this feture does not work yet , if you want to go back use '--back' and to exit use 'exit'"<<endl;
        string w;
        cin>>w;
        if(w=="--back")
        {
             cout<<"redirecting you to central director , from there you can use '--help' to  get help"<<endl;
            hashm();
        }
        else if(w=="exit")
        {
            exit(1);
        }
        else
        {
            e1(w);
        }
    }
            else if(a[0]=="--clear")
        {
            system("cls");
            cout<<"Screen cleared , back to central director"<<endl;
            hashm();
        }
    else
    {
        e1(a[0]);
    }
}
/// xo function
string xo(string &u)
{
    int y;
    stringstream ss;
  ss << u;
  ss >> y;
  if(y<1)
  {
    exo2();
  }
        cout<<"Welcome to X,O writen by R.n"<<endl;
        cout<<"Note: that it starts with 'O'"<<endl;
    while (y!=0)
    {
    int n=50 , m=10,l=0;
       char b[m];
       b[1]=' ';
       b[2]=' ';
       b[3]=' ';
       b[4]=' ';
       b[5]=' ';
       b[6]=' ';
       b[7]=' ';
       b[8]=' ';
       b[9]=' ';
    cout<<"Welcome to X,O writen by R.n"<<endl;
    while (1)
    {
        cout<<"to enter the cords"<<endl;
        cout<<"1  2  3"<<endl;
        cout<<"4  5  6"<<endl;
        cout<<"7  8  9"<<endl;
        cin>>m;
       if(l%2==0)
        b[m]='O';
       else b[m]='X';
        m=1;
    cout<<b[m]<<" "<<"|"<<b[m+1]<<" "<<"|"<<b[m+2]<<endl;
    cout<<"--------"<<endl;
    cout<<b[m+3]<<" "<<"|"<<b[m+4]<<" "<<"|"<<b[m+5]<<endl;
        cout<<"--------"<<endl;
    cout<<b[m+6]<<" "<<"|"<<b[m+7]<<" "<<"|"<<b[m+8]<<endl;
if(b[m]!=' '&& b[m+1]!=' '&& b[m+2]!=' ')
    if (b[m]==b[m+1] && b[m+2]==b[m] )///++
    {
        cout<<b[m]<<"  Wins  "<<endl;
                break;
    }
   if(b[m]!=' '&& b[m+4]!=' '&& b[m+8]!=' ')
       if(b[m]==b[m+4] && b[m+8]==b[m])///++
     {
            cout<<b[m]<<"  Wins  "<<endl;
                break;
     }
     if(b[m+3]!=' '&& b[m+5]!=' '&& b[m+4]!=' ')
       if(b[m+4]==b[m+3] && b[m+5]==b[m+4])///++
     {
          cout<<b[m+4]<<"  Wins  "<<endl;
                break;
     }
     if(b[m+1]!=' '&& b[m+4]!=' '&& b[m+7]!=' ')
       if(b[m+1]==b[m+4] && b[m+1]==b[m+7])///++
     {
          cout<<b[m+1]<<"  Wins  "<<endl;
                break;
     }
     if(b[m]!=' '&& b[m+3]!=' '&& b[m+6]!=' ')
       if(b[m]==b[m+3] && b[m]==b[m+6])///++
     {
          cout<<b[m]<<"  Wins  "<<endl;
                break;
     }
     if(b[m+5]!=' '&& b[m+8]!=' '&& b[m+2]!=' ')
       if(b[m+2] == b[m+5] && b[m+2]==b[m+8])///++
     {
          cout<<b[m+2]<<"  Wins  "<<endl;
                break;
     }
     if(b[m+5]!=' '&& b[m+3]!=' '&& b[m+4]!=' ')
       if(b[m+5]==b[m+3] && b[m+4]==b[m+3])///++
     {
          cout<<b[m+3]<<"  Wins  "<<endl;
                break;
     }
     if(b[m+6]!=' '&& b[m+7]!=' '&& b[m+8]!=' ')
    if(b[m+6]==b[m+7] && b[m+6]==b[m+8])///++
     {
          cout<<b[m+6]<<"  Wins  "<<endl;
                break;
     }
          if(b[m+2]!=' '&& b[m+4]!=' '&& b[m+6]!=' ')
    if(b[m+2]==b[m+4] && b[m+6]==b[m+2])///++
     {
          cout<<b[m+5]<<"  Wins  "<<endl;
                break;
     }
        l++;
             if(l==9)
        {
            cout<<" Tie"<<endl;
            break;
        }
}
y--;
}
}
///virus
string v1()
{
    string a[100000];
    cin>>a[0];
    if(a[0]=="--shutdown")
    {
        cout<<"aint gonna happen dude"<<endl<<"use '--back' to go back"<<"else type 'exit'"<<endl;
        string h;
        cin>>h;
        if(h=="--back")
        {
            cout<<"redirecting you to central director , from there you can use '--help' to  get help"<<endl;
            hashm();
        }
        else if(h=="exit")
        {
            exit(0);
        }
        else
        {
            v1e(h);
        }
    }
    else if(a[0]=="--darkhashm")
    {
        dhashm();
    }
    else if(a[0]=="--back")
    {
        cout<<"redirecting you to central director , from there you can use '--help' to  get help"<<endl;
        hashm();
    }
    else
    {
        v1e(a[0]);
    }
}
///xo
void xoh(string &h)
{
    if(h=="--help")
    {
            cout<<" to use xo type: 'hashm --xo [how many rounds]'";
                exit(1);
    }
}
void exo2()
{
    cout<<"there cannot be minus or zero rounds";
    exit(1);
}
string exo()
{
    cout<<"no such command or batch file , use 'hashm --xo --help' maybe that can help you";
    exit(1);
}
///error center
string e1(string &n)
{
    cout<<"No such command , for help use: 'hashm --help'"<<endl;
    exit(1);
}
///erorr virus
string v1e(string &r)
{
    cout<<"No such command or batch file try '--help'"<<endl<<"Error 0*1 '"<<r<<"' not available";
}
int decypher()
{
    int n=1;
        string a[n];
        cout<<"to enter developer mode (to decript) enter 1 else enter 2"<<endl;
        int dev;
        cin>>dev;
        if(dev==1)
            devd();
        else
        {
    cout<<"enter string to decript:"<<endl;
    cin>>a[0];
    if(a[0].size()%8!=0)
    {
        cout<<"error wrong encryption"<<endl;
    exit(1);
    }
    else
    {
       int y=a[0].size(), m=0;
       while (1)
       {
           if(a[0][m]=='r')
                cout<<"9";
           else if(a[0][m]=='T')
           {
            cout<<"0";
           }
           else if(a[0][m]=='j')
            cout<<"8";
           else if(a[0][m+1]=='l')
            cout<<"7";
             else if(a[0][m+1]=='$')
                cout<<"6";
             else if(a[0][m]=='Q')
                cout<<"5";

             else if(a[0][m]=='@')
                cout<<"3";
              else if(a[0][m]=='w')
                cout<<"2";
              else if(a[0][m+1]=='5')
                cout<<"1";
                else if(a[0][m+1]='I')
                cout<<"4";
              else
              {
                cout<<"error wrong encryption"<<endl;
              exit(1);
              }
              m+=8; system("powershell PS");
              if(m==y)
                break;
       }
    }
    }
    exit(1);
}
void e3()
{
    cout<<"No such command , use 'hashm --re --help' for help";
    exit(1);
}
/// ryan encrypt
///help
void reh()
{
    cout<<"use 'hashm --re'"<<endl<<"to encrypt: '--e'"<<endl<<"to decrypt '--d' and to get back to this page use '--help'";
    exit(1);
}
///encrypt dev
int deve()
{
    cout<<"To encrypt a number of strings enter the amount and then the strings you want to be encrypted:"<<endl;
    int n;
    cin>>n;
    n++;
    int e=n;
    string a[e];
    e--;
    while(e>0)
    {
        cin>>a[e];
        e--;
    }
    n--;
    e=n;
    while(e!=0)
    {
    int m=0,y=a[e].size();
    while (y!=0)
    {
     if(a[e][m]=='1')
     cout<<"$566690Q";
        else if(a[e][m]=='0')///+
        cout<<"Ty67%$we";
        else if(a[e][m]=='2')///+
        cout<<"wery@#4a";
        else if(a[e][m]=='3')///+
        cout<<"@#%^&pp6";
        else if(a[e][m]=='4')///+
        cout<<"pIod#fr6";
        else if(a[e][m]=='5')///+
        cout<<"Qwe4$$&=";
        else if(a[e][m]=='6')///+
        cout<<"$$@WERT=";
        else if(a[e][m]=='7')///+
        cout<<"pl))(OT]";
        else if(a[e][m]=='8')///+
        cout<<"jj!**er[";
        else if(a[e][m]=='9')///+
        cout<<"r:&&768p";
    y--;
    m++;
    }
    cout<<endl;
    e--;
    }
    exit(1);
}
///encrypt
int encrypt()
{
    int n=1;
    string a[n];
    cout<<"enter string to encrypt:(only numeric)"<<endl;
    cout<<"to toggle developer mode press 1 else press 2:"<<endl;
    int dev;
    cin>>dev;
    if(dev==1)
    {
        deve();
    }
    else
    {
            cout<<"enter a string to encrypt:(only numeric)"<<endl;
    cin>>a[0];
    int m=0,y=a[0].size();
    while (y!=0)
    {
     if(a[0][m]=='1')
     cout<<"$566690Q";
        else if(a[0][m]=='0')///+
        cout<<"Ty67%$we";
        else if(a[0][m]=='2')///+
        cout<<"wery@#4a";
        else if(a[0][m]=='3')///+
        cout<<"@#%^&pp6";
        else if(a[0][m]=='4')///+
        cout<<"pIod#fr6";
        else if(a[0][m]=='5')///+
        cout<<"Qwe4$$&=";
        else if(a[0][m]=='6')///+
        cout<<"$$@WERT=";
        else if(a[0][m]=='7')///+
        cout<<"pl))(OT]";
        else if(a[0][m]=='8')///+
        cout<<"jj!**er[";
        else if(a[0][m]=='9')///+
        cout<<"r:&&768p";
    y--;
    m++;
    }
    }
    exit(1);
}
///decrypt dev
int devd()
{
    cout<<"To decript a number of strings enter the amount and then the strings you want to be decrypted:"<<endl;
        int n;
        cin>>n;
        n++;
        int e=n;
        string a[n];
        n--;
        while(n!=0)
        {
            cin>>a[n];
            n--;
        }
        e--;
        n=e;
        while (n!=0)
        {
            if(a[n].size()%8!=0)
            {
                cout<<"wrong encryption at line"<<n<<endl;
                abort();
            }
            n--;
        }
        n=e;
        while (n!=0)
        {
                   int y=a[n].size(), m=0;
       while (1)
       {
           if(a[n][m]=='r')
                cout<<"9";
           else if(a[n][m]=='T')
           {
            cout<<"0";
           }
           else if(a[n][m]=='j')
            cout<<"8";
           else if(a[n][m+1]=='l')
            cout<<"7";
             else if(a[n][m+1]=='$')
                cout<<"6";
             else if(a[n][m]=='Q')
                cout<<"5";

             else if(a[n][m]=='@')
                cout<<"3";
              else if(a[n][m]=='w')
                cout<<"2";
              else if(a[n][m+1]=='5')
                cout<<"1";
                else if(a[n][m+1]='I')
                cout<<"4";
              else
              {
                cout<<"error wrong encryption at line "<<n<<endl;
              abort();
              }
              m+=8;
              if(m==y)
                break;
       }
       cout<<endl;
            n--;
        }
        exit(1);
}
///passcheck
string passwordcheck1()
{
      string password;
    cout << "Enter the password to crack : ";
    cin >> password;
    cout << endl << endl << endl << ">\n>> CRACKED THE PASSWORD! >>\n>" << endl <<  endl <<"The password : " << crackPassword(password) << endl;
    cout << "The number of attempts : " << attempt << endl;
    cout << "The time duration  passed : " << (double)(end_t - start_t)/1000 << " seconds" << endl << endl;
    string h;
    cout<<"to go back to the central director use '--back' , to exit use 'exit'"<<endl;
    cin>>h;
    if(h=="exit")
        exit(1);
    else if(h=="--back")
    {
        cout<<"redirecting you to the central director , for help use '--help'"<<endl;
        hashm();
    }
    else
    {
        e1(h);
    }
}
///passcheck 2
string crackPassword(string pass)
{
     int digit[7],alphabetSet=1,passwordLength=1;
    start_t = clock();
    if(pass.size()>62)
    {
        cout<<"Password lenght above max length "<<endl<<"use '--back' to go back , use '--help' for help about this erorr and use '--exit' to exit"<<endl;
        string h;
        cin>>h;
        if(h=="--help")
        {
            passcheckhelp();
        }
        else if(h=="--back")
        {
            cout<<"redirecting you to the main control center , for help use '--help'"<<endl;
            hashm();
        }
        else if(h=="exit")
            exit(1);
        else
            e1(h);
    }
    else
    {
    string ryan[100000];
    ryan[0]="-0123456789";
    ryan[1]= "-abcdefghijklmnopqrstuvwxyz";
    ryan[2]="-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ryan[3]="-0123456789abcdefghijklmnopqrstuvwxyz";
    ryan[4]="-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ryan[5]="-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ryan[6]="-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string test,alphabet = "1337 also daktari is pro";
    while(1){
            switch(passwordLength){
                case 1:
                    while(alphabetSet<4){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        }
                    for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 2:
                    alphabetSet=1;
                    while(alphabetSet<6){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[3];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet = ryan[4];
                        }
                         for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                             for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 3:
                    alphabetSet=1;
                    while(alphabetSet<8){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[3];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet = ryan[4];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait";  break;
                        case 6 : alphabet = ryan[5];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait";  break;
                        case 7 : alphabet = ryan[6];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;
                    }
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 4:
                    alphabetSet=1;
                    while(alphabetSet<8){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait";  break;
                        case 6 : alphabet =ryan[5];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait";  break;
                        case 7 : alphabet =ryan[6];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;
                    }
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 5:
                    alphabetSet=1;
                    while(alphabetSet<8){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[3];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet =ryan[4];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait";  break;
                        case 6 : alphabet = ryan[5];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait";  break;
                        case 7 : alphabet = ryan[6];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;
                    }
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 6:
                    alphabetSet=1;
                    while(alphabetSet<8){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[3];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet = ryan[4];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait";  break;
                        case 6 : alphabet = ryan[5];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait";  break;
                        case 7 : alphabet =ryan[6];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;
                    }
                            for(digit[5]=0;digit[5]<alphabet.length();digit[5]++)
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 7:
                    alphabetSet=1;
                    while(alphabetSet<8){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[3];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet = ryan[4];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait";  break;
                        case 6 : alphabet = ryan[5];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait";  break;
                        case 7 : alphabet = ryan[6];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;
                    }
                        for(digit[6]=0;digit[6]<alphabet.length();digit[6]++)
                            for(digit[5]=0;digit[5]<alphabet.length();digit[5]++)
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 8:
                    alphabetSet=1;
                    while(alphabetSet<8){
                    switch(alphabetSet){
                        case 1 : alphabet = ryan[0];
                                 cout << endl << endl <<"Testing only digits(0123456789) - 10 Characters, please wait";  break;
                        case 2 : alphabet = ryan[1];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait";  break;
                        case 3 : alphabet = ryan[2];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait";  break;
                        case 4 : alphabet = ryan[3];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait";  break;
                        case 5 : alphabet = ryan[4];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait";  break;
                        case 6 : alphabet = ryan[5];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait";  break;
                        case 7 : alphabet = ryan[6];
                                 cout << endl << endl << "Couldn't find the password, increasing the searching level."<< endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;
                    }
                    for(digit[7]=0;digit[7]<alphabet.length();digit[7]++)
                        for(digit[6]=0;digit[6]<alphabet.length();digit[6]++)
                            for(digit[5]=0;digit[5]<alphabet.length();digit[5]++)
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
                                                    if(attempt%2500000==0) cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++)
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    if(pass.compare(test)==0){end_t = clock(); return test;}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
            }
            cout  << endl << endl << endl << endl << "*" << endl;
            cout  << "*** Password length is not " << passwordLength <<  ". Increasing password length! ***";
            cout  << endl << "*" << endl << endl;
            passwordLength++;
    }
 }
}
void passcheckhelp()
{
    cout<<"your password length to crack hits above the limit so the program will not fulfill its duty due to the set max length which is 62"<<endl;
    cout<<"try a new password with a lower length"<<endl;
    exit(1);
}
///login
void login(string username , string password)
{
    int i=0;
    string search=password,lol=username;
    ifstream file("Password.txt");
    string str;
    ///scans file for pass and username
    while (getline(file, str))
    {
       if(str==search)
       {
          i++;
          break;
       }
    }
    ifstream login ("login.txt");
    string kk;
    while (getline(login , kk))
    {
        if(kk==lol)
        {
            i++;
            break;
        }
    }
    if(i==2)
        table(username);
    else
    {
    cout<<"Login data incorrect";
    exit(1);
}
}
///store login data
string register1(string &username , string &password , string &passwordreapeat)
{
    if(password==passwordreapeat)
    {
      ofstream file ("Password.txt" , ios::in | ios::app);
        file << password<<endl;
      ofstream login ("login.txt" , ios::in | ios::app);
      login<<username<<endl;
        cout<<"Account created succsess fully"<<endl;
   file .close();
  exit(1);
    }
    else
    {
        cout<<"password and reapeated passwords do not match";
        exit(1);
    }
}
///login data base
void table(string &l)
{
    cout<<"You are now logged in as "<<l<<endl<<"To get help use '--help' , else enter the desired command"<<endl;
    string j;
    cin>>j;
    if(j=="--main")
    hashm();
    else if(j=="exit")
        exit(1);
    else if(j=="--changepass")
    changepass(l);
    else if(j=="--internet")
        internet(l);
        else if(j=="--specs")
            specs();
                else if(j=="--whatin")
    {
        cout<<"First enter the complete directory then the file name and the type"<<endl;
        string directory,filename;
        cin>>directory>>filename;
        system(("powershell cd "+directory+" ; type "+filename).c_str());
        exit(1);
    }
            else if(j=="--tasks")
                 system("powershell PS");
            else if(j=="--clear")
            {
                system("cls");
                cout<<"Screen cleared"<<endl;
                table(l);
            }
    else if(j=="--help")
        {
             cout<<"if you want to change password use '--changepass',\nuse '--clear' to clear the screen ,\n use '--internet' to connect and scan for wifis around you ,\n use '--specs' for your computer info ,\n to go to the main page (central director) use '--main' and use 'exit' to exit"<<endl;
             cout<<"To get all running tasks use '--tasks'"<<endl<<"Use '--whatin' to get the data in a file: first input the full directory then the file name"<<endl;
             exit(1);
        }
    else
        e1(j);
}
///admin login
void admin()
{
    cout<<"You are now logged in as admin , use your powers wisely"<<endl;
    cout<<"To clear the screen use '--clear'"<<endl;
    cout<<"To exit use 'exit' , to go back to central director use '--direct'"<<endl;
    cout<<"To delete all login data use '--delete'"<<endl;
    cout<<"To connect and scan for networks (optimised to use this when logged in as normal user) use '--internet'"<<endl;
    cout<<"To get your system specs use '--specs'"<<endl;
    cout<<"Use '--show' to show every login info saved (except deleted)"<<endl<<"Use '--tasks' to get all running apps"<<endl;
   cout<<"Use '--whatin' to get the data in a file: first input the full directory then the file name"<<endl;
    string h,m="admin";
    cin>>h;
    if(h=="exit")
        exit(1);
    else if(h=="--direct")
        hashm();
        else if(h=="--clear")
        {
            system("cls");
            cout<<"Screen cleared"<<endl;
            admin();
        }
            else if(h=="--whatin")
    {
        cout<<"First enter the complete directory then the file name and the type"<<endl;
        string directory,filename;
        cin>>directory>>filename;
        system(("powershell cd "+directory+" ; type "+filename).c_str());
        exit(1);
    }
        else if(h=="--tasks")
        {
             system("powershell PS");
             cout<<"\n\n\nredirecting you to the admin table"<<endl;
             admin();
        }
        else if(h=="--delete")
        {
                ofstream file ("Password.txt");
      {
        file << "" ;
    }
    ofstream login("login.txt");
    login<<"" ;
        cout<<"Deleted all login data succsesfully"<<endl;
        exit(1);

        }
        else if(h=="--internet")
            internet(m);
            else if(h=="--specs")
            specs();
            else if(h=="--show")
            {
                cout<<"----------------------------------------------------------"<<endl;
                cout<<"Username data:"<<endl;
                    ifstream login ("login.txt");
    string kk;
    int k=0,l=0;
    while (getline(login , kk))
    {
        l++;
       cout<<l<<". "<<kk<<endl;
    }
          cout<<"----------------------------------------------------------"<<endl;
                cout<<"Password data (in order of username):"<<endl;
    string uu;
    ifstream file ("Password.txt");
    while (getline(file , uu))
    {
        k++;
        cout<<k<<". "<<uu<<endl;
    }
    cout<<"\n\n\nTo exit use 'exit'  \nTo use the admin table again use '--admin'"<<endl;
    string o;
    cin>>o;
    if(o=="exit")
        exit(1);
    else if(o=="--admin")
        admin();
    else
        e1(o);
            }
    else
        e1(h);
}
///change password
void changepass(string &ouser)
{
    cout<<"To change your passcode enter your username and then new your new password and the reapeat of your new password"<<endl;
    string username , password , passwordreapeat;
    cin>>username>>password>>passwordreapeat;
    if(username!=ouser)
    {
        cout<<"Wrong username!";
        exit(1);
    }
    if(password==passwordreapeat)
    {
      ofstream file ("Password.txt" ,  ios::in | ios::app);
      {
        file << password <<endl;
        cout<<"Password changed succsess fully"<<endl;
      }
   file .close();
  exit(1);
    }

    else
    {
        cout<<"password and reapeated password do not match";
        exit(1);
    }
}
/// connects and scans for internets
void internet(string &user)
{
    ofstream xmlFile;
ifstream xmlFile1;

string name="",pass="";
string ntyp="Wi-Fi",netType,fileTest=">test.txt",check,ntype,fil,xfileName,fileName="myWlan.xml";
char c='"',cho='2',cho1='1',c1;
netType=c+ntyp+c+fileTest;
xfileName=c+fileName+c;
int succ=0;

 do
 {
      system("netsh wlan show networks");
      cout<<"   >--------------------         TO REFRESS PRESS :1       \n\n   >--------------------         TO CHOOSE NETWORK PRESS : 2              \n\n   >   ";
      cho=getch();
}while(cho!='2');

cout<<"\n    Enter the desired network name-------:       ";
cin>>name;
do
{
   cout<<"\n    Enter wifi Password------:        ";
    cin>>pass;
    xmlFile.open(fileName.c_str());

    ///Writing a xml file .....................

    xmlFile<<"<?xml version="<<c<<"1.0"<<c<<"?>\n";
    xmlFile<<"<WLANProfile xmlns="<<c<<"http:///www.microsoft.com/networking/WLAN/profile/v1"<<c<<">\n";
    xmlFile<<"<name>";
    xmlFile<<name;
    xmlFile<<"</name>\n<SSIDConfig>\n<SSID>\n<hex>";
    for(int i=0;i<name.length();i++)
    xmlFile<<hex<<(int)name.at(i);
    xmlFile<<"</hex>\n<name>";
    xmlFile<<name;
    xmlFile<<"</name>\n</SSID>\n</SSIDConfig>\n<connectionType>ESS</connectionType>\n<connectionMode>auto</connectionMode>\n<MSM>\n<security>\n<authEncryption>";
    xmlFile<<"\n<authentication>WPA2PSK</authentication>\n<encryption>AES</encryption>\n<useOneX>false</useOneX>\n</authEncryption>\n<sharedKey>";
    xmlFile<<"\n<keyType>passPhrase</keyType>\n<protected>false</protected>\n<keyMaterial>";
    xmlFile<<pass;
    xmlFile<<"</keyMaterial>\n</sharedKey>\n</security>\n</MSM>\n";
    xmlFile<<"<MacRandomization xmlns="<<c<<"http:///www.microsoft.com/networking/WLAN/profile/v3"<<c<<">\n";
    xmlFile<<"<enableRandomization>false</enableRandomization>\n</MacRandomization>\n</WLANProfile>";
    xmlFile.close();

    ///add the xml file to system profile.............
    system(("netsh wlan add profile filename="+xfileName).c_str());
    ///to let system realize what changes have been made...............
    system("timeout /t 2");
    ///to check if connected...........
    system(("netsh interface show interface name="+netType).c_str());

    xmlFile1.open("test.txt");
    while(!xmlFile1.eof())
    {
         xmlFile1>>c1;
         if(c1==':')
         {
              for(int i=0;i<9;i++)
              {
                   xmlFile1>>c1;
                   check=check+c1;
               }
         }
              if(check=="Connected")
              {
                  cout<<"...............................................You are connected!!.................................";
                  succ=1;break;
              }
              if(check!="Connected")check="";
    }
    xmlFile1.close();
    if(succ==1)break;
  }while(succ!=1);
string r;
cout<<"To exit use 'exit' , to go to main director use '--main' and to use this command again use '--internet'"<<endl;
cin>>r;
if(r=="exit")
    exit(1);
else if(r=="--main")
    hashm();
else if(r=="--internet")
    return internet(user);
else
    e1(r);
}
///computer specs
void specs()
{
       SYSTEM_INFO siSysInfo;

   /// Copy the hardware information to the SYSTEM_INFO structure.

   GetSystemInfo(&siSysInfo);

   /// Display the contents of the SYSTEM_INFO structure.

   printf("Hardware information: \n");
   printf("  OEM ID: %u\n", siSysInfo.dwOemId);
   printf("  Number of processors: %u\n",
      siSysInfo.dwNumberOfProcessors);
   printf("  Page size: %u\n", siSysInfo.dwPageSize);
   printf("  Processor type: %u\n", siSysInfo.dwProcessorType);
   printf("  Minimum application address: %lx\n",
      siSysInfo.lpMinimumApplicationAddress);
   printf("  Maximum application address: %lx\n",
      siSysInfo.lpMaximumApplicationAddress);
   printf("  Active processor mask: %u\n",
      siSysInfo.dwActiveProcessorMask);
///source:
/// msdn.microsoft.com/en-us/library/windows/desktop/ms724423(v=vs.85).aspx
///msdn.microsoft.com/en-us/library/windows/desktop/ms724381(v=vs.85).aspx
///www.cplusplus.com/forum/windows/124624/
exit(1);
}
void dhashm()
{
    cout<<"Welcome to darkhashm"<<endl;
    cout<<"Only use for legal peposuses"<<endl;
    string a[1000];
    cin>>a[0];
    if(a[0]=="--help")
    {
          cout<<"Only use for legal peposuses"<<endl;
    cout<<"To shutdown your own computer use '--shutdown'\nTo get ip of a site use '--ip' and then enter your site"<<endl;
       cout<<"Use '--whatin' to get the data in a file: first input the full directory then the file name"<<endl;
    exit(1);
    }
    else if(a[0]=="--shutdown")
    {
        system("shutdown /s");
    }
    else if(a[0]=="--ip")
    {
        string ip;
        cin>>ip;
        system(("ping "+ip).c_str());
        exit(1);
    }
                    else if(a[0]=="--whatin")
    {
        cout<<"First enter the complete directory then the file name and the type"<<endl;
        string directory,filename;
        cin>>directory>>filename;
        system(("powershell cd "+directory+" ; type "+filename).c_str());
        exit(1);
    }

    else
    {
        cout<<"No such command use '--help' for help"<<endl;
        exit(1);
    }
}
