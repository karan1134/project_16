#include <iostream>
#include <conio.h>
#include <rw/random.h>
#include <string.h>
#include <armory.h>
//---------------------------------------------------------------------------
void Table(string Name, double Number, int Group, int Period, string Formula, string Charge, double Mass, int Neutrons, string Special)
{
Neutrons = (Mass - Number);
clrscr();
gotoxy(1,2);
cout<< "Element Name:  " << Name << "\n\n";
cout<< "Formula:       " << Formula << "\n";
cout<< "Atomic Number: " << Number << "\n";
cout<< "Atomic Mass:   " << Mass << "\n";
cout<< "Group:         " << Group << "\n";
cout<< "Period:        " << Period << "\n";
cout<< "Charge:        " << Charge << "\n";
cout<< "Neutrons:      " << Neutrons << "\n";
if (Special != "None")
{
cout<< "Note:          " << Special << "\n";
}
Pause();
clrscr();
gotoxy(1,2);
}
//---------------------------------------------------------------------------
void Help()
{
clrscr();
gotoxy(1,2);
cout<< "HELP\n\n";
cout<< "Help            - Opens this window.\n";
cout<< "Clear           - Clears current screen.\n";
cout<< "Prefix          - Lists prefix terms.\n";
cout<< "Element Formula - Displays information of element (eg: Sn).\n";
cout<< "Atomic Number   - Displays information of element (eg: 50).\n";
cout<< "Element Name    - Displays information of element (eg: tin).\n";
cout<< "Credits         - Information on the programmer.\n";
cout<< "Quit            - Quits the program.\n";
Pause();
clrscr();
gotoxy(1,2);
}
//---------------------------------------------------------------------------
void Credits()
{
char CreditsKey;
clrscr();
gotoxy(1,2);
cout<< "CREDITS\n\n";
cout<< "I made the PERIODIC TABLE program near the end of 2018. I\n";
cout<< "had just discovered the world of C++ program, and was eager\n";
cout<< "to test it out. This is the result.\n";
cout<< "I have always enjoyed chemistry, and so it was no surprise to\n";
cout<< "me when a periodic table program was the first idea that\n";
cout<< "popped into my head.\n";
cout<< "I hope you have all enjoyed the program as an educational tool.\n";
cout<< "Enjoy the program, use it often, and my vision will be fufilled.\n\n";
cout<< "\tProgrammed by Carlo (completed 2001)\n";
Pause();
clrscr();
gotoxy(1,2);
}
//---------------------------------------------------------------------------
void Prefix()
{
clrscr();
gotoxy(1,2);
cout<< "PREFIX\n\n";
cout<< "mono          - One (1)\n";
cout<< "di            - Two (2)\n";
cout<< "tri           - Three (3)\n";
cout<< "tetra         - Four (4)\n";
cout<< "penta         - Five (5)\n";
cout<< "hexa          - Six (6)\n";
cout<< "hepta         - Seven (7)\n";
cout<< "octa          - Eight (8)\n";
cout<< "nona or ennea - Nine (9)\n";
cout<< "deca          - Ten (10)\n";
Pause();
clrscr();
gotoxy(1,2);
}
//---------------------------------------------------------------------------
int main()
{
randomize();
Wait();
int Color = 1+random(8);
if (Color == 1)
{
textcolor(RED);
}
else if (Color == 2)
{
textcolor(MAGENTA);
}
else if (Color == 3)
{
textcolor(BLUE);
}
else if (Color == 4)
{
textcolor(GREEN);
}
else if (Color == 5)
{
textcolor(WHITE);
}
else if (Color == 6)
{
textcolor(YELLOW);
}
else if (Color == 7)
{
textcolor(BROWN);
}
else if (Color == 8)
{
textcolor(CYAN);
}
clrscr();
gotoxy(1,11);
cout<< "\a\t\t\t       PERIODIC TABLE         \n";
cout<< "\a\t\t\t   *--------------------*     \n";
cout<<endl;
cout<< "\a\t\t\t      Program by Shivani        \n";
cout<< "\a\t\t\t          c.  2018      \n";
gotoxy(35,15);
Pause();
textcolor(WHITE);
textbackground(BLUE);
clrscr();
gotoxy(1,2);
//---------------------------------------------------------------------------
// VARIABLES
string Formula,
       Name,
       Command,
       Charge,
       Special = "None";
int    Group,
       Period;
double Mass,
       Neutrons,
       Number;
//---------------------------------------------------------------------------
do{
cout<< "COMMAND: ";
cin>> Command;
if ((Command == "Help") || (Command == "HELP") || (Command == "help"))
{
Help();
}
else if ((Command == "Credits") || (Command == "CREDITS") || (Command == "credits"))
{
Credits();
}
else if ((Command == "Clear") || (Command == "CLEAR") || (Command == "clear"))
{
clrscr();
gotoxy(1,2);
}
else if ((Command == "Prefix") || (Command == "PREFIX") || (Command == "prefix"))
{
Prefix();
}
//---------------------------------------------------------------------------
else if ((Command == "1") || (Command == "hydrogen") || (Command == "H"))
{
Name = "hydrogen";
Number = 1;
Group = 1;
Period = 1;
Formula = "H";
Charge = "1+";
Mass = 1.01;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "2") || (Command == "helium") || (Command == "He"))
{
Name = "helium";
Number = 2;
Group = 18;
Period = 1;
Formula = "He";
Charge = "0";
Mass = 4.00;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "3") || (Command == "lithium") || (Command == "Li"))
{
Name = "lithium";
Number = 3;
Group = 1;
Period = 2;
Formula = "Li";
Charge = "1+";
Mass = 6.94;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "4") || (Command == "beryllium") || (Command == "Be"))
{
Name = "beryllium";
Number = 4;
Group = 2;
Period = 2;
Formula = "Be";
Charge = "2+";
Mass = 9.01;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "5") || (Command == "boron") || (Command == "B"))
{
Name = "boron";
Number = 5;
Group = 13;
Period = 2;
Formula = "B";
Charge = "3+";
Mass = 10.81;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}

else if ((Command == "6") || (Command == "carbon") || (Command == "C"))
{
Name = "carbon";
Number = 6;
Group = 14;
Period = 2;
Formula = "C";
Charge = "4+";
Mass = 12.01;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "7") || (Command == "nitrogen") || (Command == "N"))
{
Name = "nitrogen";
Number = 7;
Group = 15;
Period = 2;
Formula = "N";
Charge = "3-";
Mass = 14.01;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "8") || (Command == "oxygen") || (Command == "O"))
{
Name = "oxygen";
Number = 8;
Group = 16;
Period = 2;
Formula = "O";
Charge = "2-";
Mass = 16.00;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "9") || (Command == "flourine") || (Command == "F"))
{
Name = "fluorine";
Number = 9;
Group = 17;
Period = 2;
Formula = "F";
Charge = "1-";
Mass = 19.00;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "10") || (Command == "neon") || (Command == "Ne"))
{
Name = "neon";
Number = 10;
Group = 18;
Period = 2;
Formula = "Ne";
Charge = "0";
Mass = 20.18;
Special = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "11") || (Command == "sodium") || (Command == "Na"))
{
Name = "sodium";
Number = 11;
Group = 1;
Period = 3;
Formula = "Na";
Charge = "1+";
Mass = 22.99;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "12") || (Command == "magnesium") || (Command == "Mg"))
{
Name = "magnesium";
Number = 12;
Group = 2;
Period = 3;
Formula = "Mg";
Charge = "2+";
Mass = 24.31;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "13") || (Command == "aluminum") || (Command == "Al"))
{
Name = "aluminum";
Number = 13;
Group = 13;
Period = 3;
Formula = "Al";
Charge = "3+";
Mass = 26.98;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "14") || (Command == "silicon") || (Command == "Si"))
{
Name = "silicon";
Number = 14;
Group = 14;
Period = 3;
Formula = "Si";
Charge = "4+";
Mass = 28.09;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "15") || (Command == "phosphorous") || (Command == "P"))
{
Name = "phosphorus";
Number = 15;
Group = 15;
Period = 3;
Formula = "P";
Charge = "3-";
Mass = 30.97;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "16") || (Command == "sulfur") || (Command == "S"))
{
Name = "sulfur";
Number = 16;
Group = 16;
Period = 3;
Formula = "S";
Charge = "2-";
Mass = 32.06;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "17") || (Command == "chlorine") || (Command == "Cl"))
{
Name = "chlorine";
Number = 17;
Group = 17;
Period = 3;
Formula = "Cl";
Charge = "1-";
Mass = 35.45;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "18") || (Command == "argon") || (Command == "Ar"))
{
Name = "argon";
Number = 18;
Group = 18;
Period = 3;
Formula = "Ar";
Charge = "0";
Mass = 39.95;
Special = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "19") || (Command == "potassium") || (Command == "K"))
{
Name = "potassium";
Number = 19;
Group = 1;
Period = 4;
Formula = "K";
Charge = "1+";
Mass = 39.10;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "20") || (Command == "calcium") || (Command == "Ca"))
{
Name = "calcium";
Number = 20;
Group = 2;
Period = 4;
Formula = "Ca";
Charge = "2+";
Mass = 40.08;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "21") || (Command == "scandium") || (Command == "Sc"))
{
Name = "scandium";
Number = 21;
Group = 3;
Period = 4;
Formula = "Sc";
Charge = "3+";
Mass = 44.96;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "22") || (Command == "titanium") || (Command == "Ti"))
{
Name = "titanium";
Number = 22;
Group = 4;
Period = 4;
Formula = "Ti";
Charge = "4+ \\ 3+";
Mass = 47.88;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "23") || (Command == "vanadium") || (Command == "V"))
{
Name = "vanadium";
Number = 23;
Group = 5;
Period = 4;
Formula = "V";
Charge = "5+ \\ 4+";
Mass = 50.94;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "24") || (Command == "chromium") || (Command == "Cr"))
{
Name = "chromium";
Number = 24;
Group = 6;
Period = 4;
Formula = "Cr";
Charge = "3+ \\ 2+";
Mass = 52.00;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "25") || (Command == "manganese") || (Command == "Mn"))
{
Name = "manganese";
Number = 25;
Group = 7;
Period = 4;
Formula = "Mn";
Charge = "2+ \\ 4+";
Mass = 54.94;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "26") || (Command == "iron") || (Command == "Fe"))
{
Name = "iron";
Number = 26;
Group = 8;
Period = 4;
Formula = "Fe";
Charge = "3+ \\ 2+";
Mass = 55.85;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "27") || (Command == "cobalt") || (Command == "Co"))
{
Name = "cobalt";
Number = 27;
Group = 9;
Period = 4;
Formula = "Co";
Charge = "2+ \\ 3+";
Mass = 58.93;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "28") || (Command == "nickel") || (Command == "Ni"))
{
Name = "nickel";
Number = 28;
Group = 10;
Period = 4;
Formula = "Ni";
Charge = "2+ \\ 3+";
Mass = 58.69;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "29") || (Command == "copper") || (Command == "Cu"))
{
Name = "copper";
Number = 29;
Group = 11;
Period = 4;
Formula = "Cu";
Charge = "2+ \\ 1+";
Mass = 63.55;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "30") || (Command == "zinc") || (Command == "Zn"))
{
Name = "zinc";
Number = 30;
Group = 12;
Period = 4;
Formula = "Zn";
Charge = "2+";
Mass = 65.38;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "31") || (Command == "gallium") || (Command == "Ga"))
{
Name = "gallium";
Number = 31;
Group = 13;
Period = 4;
Formula = "Ga";
Charge = "3+";
Mass = 69.72;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "32") || (Command == "germanium") || (Command == "Ge"))
{
Name = "germanium";
Number = 32;
Group = 14;
Period = 4;
Formula = "Ge";
Charge = "4+";
Mass = 72.61;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "33") || (Command == "arsonic") || (Command == "As"))
{
Name = "arsonic";
Number = 33;
Group = 15;
Period = 4;
Formula = "As";
Charge = "3-";
Mass = 74.92;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "34") || (Command == "selenium") || (Command == "Se"))
{
Name = "selenium";
Number = 34;
Group = 16;
Period = 4;
Formula = "Se";
Charge = "2-";
Mass = 78.96;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "35") || (Command == "bromine") || (Command == "Br"))
{
Name = "bromine";
Number = 35;
Group = 17;
Period = 4;
Formula = "Br";
Charge = "1-";
Mass = 79.90;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "36") || (Command == "krypton") || (Command == "Kr"))
{
Name = "krypton";
Number = 36;
Group = 18;
Period = 4;
Formula = "Kr";
Charge = "0";
Mass = 83.80;
Special = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}

else if ((Command == "37") || (Command == "rubidium") || (Command == "Rb"))
{
Name = "rubidium";
Number = 37;
Group = 1;
Period = 5;
Formula = "Rb";
Charge = "1+";
Mass = 85.47;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "38") || (Command == "stronthum") || (Command == "Sr"))
{
Name = "stronthum";
Number = 38;
Group = 2;
Period = 5;
Formula = "Sr";
Charge = "2+";
Mass = 87.62;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "39") || (Command == "ythrium") || (Command == "Y"))
{
Name = "ythrium";
Number = 39;
Group = 3;
Period = 5;
Formula = "Y";
Charge = "3+";
Mass = 88.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "40") || (Command == "zirconium") || (Command == "Zr"))
{
Name = "zirconium";
Number = 40;
Group = 4;
Period = 5;
Formula = "Zr";
Charge = "4+";
Mass = 91.22;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "41") || (Command == "niobium") || (Command == "Nb"))
{
Name = "niobium";
Number = 41;
Group = 5;
Period = 5;
Formula = "Nb";
Charge = "5+ \\ 3+";
Mass = 92.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "42") || (Command == "molybdenum") || (Command == "Mo"))
{
Name = "molybdenum";
Number = 42;
Group = 6;
Period = 5;
Formula = "Mo";
Charge = "6+";
Mass = 95.94;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "43") || (Command == "techenium") || (Command == "Tc"))
{
Name = "techenium";
Number = 43;
Group = 7;
Period = 5;
Formula = "Tc";
Charge = "7+";
Mass = 98.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "44") || (Command == "ruthenium") || (Command == "Ru"))
{
Name = "ruthenium";
Number = 44;
Group = 8;
Period = 5;
Formula = "Ru";
Charge = "3+ \\ 4+";
Mass = 101.07;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "45") || (Command == "rhodium") || (Command == "Rh"))
{
Name = "rhodium";
Number = 45;
Group = 9;
Period = 5;
Formula = "Rh";
Charge = "3+";
Mass = 102.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "46") || (Command == "palladium") || (Command == "Pd"))
{
Name = "palladium";
Number = 46;
Group = 10;
Period = 5;
Formula = "Pd";
Charge = "2+ \\ 4+";
Mass = 106.42;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "47") || (Command == "silver") || (Command == "Ag"))
{
Name = "silver";
Number = 47;
Group = 11;
Period = 5;
Formula = "Ag";
Charge = "1+";
Mass = 107.87;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "48") || (Command == "cadmium") || (Command == "Cd"))
{
Name = "cadmium";
Number = 48;
Group = 12;
Period = 5;
Formula = "Cd";
Charge = "2+";
Mass = 112.41;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "49") || (Command == "indium") || (Command == "In"))
{
Name = "indium";
Number = 49;
Group = 13;
Period = 5;
Formula = "In";
Charge = "3+";
Mass = 114.82;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "50") || (Command == "tin") || (Command == "Sn"))
{
Name = "tin";
Number = 50;
Group = 14;
Period = 5;
Formula = "Sn";
Charge = "4+ \\ 2+";
Mass = 118.69;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "51") || (Command == "antimony") || (Command == "Sb"))
{
Name = "antimony";
Number = 51;
Group = 15;
Period = 5;
Formula = "Sb";
Charge = "3+ \\ 5+";
Mass = 121.75;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "52") || (Command == "tellurium") || (Command == "Te"))
{
Name = "tellurium";
Number = 52;
Group = 16;
Period = 5;
Formula = "Te";
Charge = "2-";
Mass = 127.60;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "53") || (Command == "iodine") || (Command == "I"))
{
Name = "iodine";
Number = 53;
Group = 17;
Period = 5;
Formula = "I";
Charge = "1-";
Mass = 126.90;
Special = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "54") || (Command == "xenon") || (Command == "Xe"))
{
Name = "xenon";
Number = 54;
Group = 18;
Period = 5;
Formula = "Xe";
Charge = "0";
Mass = 131.29;
Special = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "55") || (Command == "cosium") || (Command == "Cs"))
{
Name = "cosiumn";
Number = 55;
Group = 1;
Period = 6;
Formula = "Cs";
Charge = "1+";
Mass = 132.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "56") || (Command == "barium") || (Command == "Ba"))
{
Name = "barium";
Number = 56;
Group = 2;
Period = 6;
Formula = "Ba";
Charge = "2+";
Mass = 137.33;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "57") || (Command == "lanthanum") || (Command == "La"))
{
Name = "lanthanum";
Number = 57;
Group = 3;
Period = 6;
Formula = "La";
Charge = "3+";
Mass = 138.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "58") || (Command == "cerium") || (Command == "Ce"))
{
Name = "cerium";
Number = 58;
Group = 5;
Period = 6;
Formula = "Ce";
Charge = "3+";
Mass = 140.12;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if ((Command == "59") || (Command == "pruseodymium") || (Command == "Pr"))
{
Name = "pruseodymium";
Number = 59;
Group = 6;
Period = 6;
Formula = "Pr";
Charge = "3+";
Mass = 140.91;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
 else if ((Command == "60") || (Command == "neodymium") || (Command == "Nd"))
{
Name = "neodymium";
Number = 60;
Group = 7;
Period = 6;
Formula = "Nd";
Charge = "3+";
Mass = 144.24;
Special = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
      
