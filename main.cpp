#include "Menu.cpp"
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
class Customer {
private:
  string name;
  int age;
  long phone;
  string email;
  string address;

  // int trooms = 10;
  // int brooms = 0;

public:
  int ID = 0;
  void set() {
    ofstream w;
    w.open("INFO.txt", ios_base::app);
    cout << "Enter your name        : ";
    cin >> name;

    cout << "Enter your age         : ";
    cin >> age;

    cout << "Enter your phone number: ";
    cin >> phone;

    cout << "Enter your email       : ";
    cin >> email;

    cout << "Enter your address     : ";
    cin >> address;

    int cnt = 0;
    string s;
    ifstream r("INFO.txt", ios_base::in);
    while (getline(r, s)) {
      cnt++;
    }
    r.close();
    ID = cnt;
    w << setw(10) << "#f01" << cnt << "  " << setw(15) << name << " "
      << setw(10) << age << " " << setw(10) << phone << " " << setw(15) << email
      << " " << setw(15) << address << endl;
  }

  // void available_rooms() { cout << trooms - brooms << endl; }

  // void booking_rooms() {
  //   int reqrooms;
  //   cout << "Enter number of rooms you want :" << endl;
  //   cin >> reqrooms;
  //   if (reqrooms <= (trooms - brooms)) {
  //     cout << "Enter For how many days do you want room?" << endl;
  //     int days;
  //     cin >> days;
  //     cout << "Your total bill is :" << reqrooms * days * 1000 << endl;
  //     cout << "Do you Want to confirm booking?(Y/N)" << endl;
  //     char choose;
  //     cin >> choose;

  //     if (choose == 'Y') {
  //       cout << "Congratulations your rooms booking is confirmed" << endl;
  //       brooms += reqrooms;
  //       // add goto page of show
  //     } else {
  //       cout << "Booking is not confirmed" << endl;
  //       info();
  //     }

  //   }

  //   else {
  //     cout << "Required Number of Rooms are not available" << endl;
  //     info();
  //   }
  // }
};
class PAGE : public Customer {
  char a;
  menu s;

public:
  void show() {
    cout << "=================================================================="
            "============"
         << endl;
    cout << "                               Welcome to Hotel Taj               "
            "            "
         << endl;
    cout << "                                  A) About                        "
            "            "
         << endl;
    cout << "                                  B) Customer                     "
            "            "
         << endl;
    cout << "                                  C) Help                         "
            "            "
         << endl;
    cout << "                                  D) Setting                      "
            "            "
         << endl;
    cout << "                            (Enter character to move on)          "
            "            "
         << endl;
    cout << "=================================================================="
            "============"
         << endl;
    cin >> a;
    open();
  }
  void About() {
    ifstream inputFile("About.txt");
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    inputFile.close();
    char a;
    cout << "Press any Key : ";
    cin >> a;
    show();
  }
  void Help() {
    ifstream inputFile("Help.txt");
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    inputFile.close();
    char a;
    cout << "Press any Key : ";
    cin >> a;
    show();
  }
  void open() {
    switch (a) {
    case 'A':
      About();
      break;
    case 'B':
      set();
      info();
      break;
    case 'C':
      Help();
      break;
    case 'D':
      show();
      // pending
      // p.Set_Pass_W();
      break;
    default:
      cout << "----------------------------------------------------------------"
              "--------------"
           << endl;
      cout << "                     WARNING :: PLEASE ENTER A VALID CHARACTER  "
              "              "
           << endl;
      cout << "----------------------------------------------------------------"
              "--------------"
           << endl;
      show();
      break;
    }
  }
  void info() {
    cout << "=================================================================="
            "============"
         << endl;
    cout << "                    Choose correct option for What do Want?       "
            "            "
         << endl;
    cout << "                              Press 1) Menu Card                  "
            "            "
         << endl;
    cout << "                              Press 2) Booking                    "
            "            "
         << endl;
    cout << "                              Press 3) BACK TO HOME               "
            "            "
         << endl;
    cout << "=================================================================="
            "============"
         << endl;
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
      s.Card(ID);
      info();
      break;
    case 2:
      show();
      // pending
      // available_rooms();
      // booking_rooms();
      break;
    case 3:
      show();
      break;
    default:
      cout << "----------------------------------------------------------------"
              "--------------"
           << endl;
      cout << "                     WARNING :: PLEASE ENTER A VALID CHARACTER  "
              "              "
           << endl;
      cout << "----------------------------------------------------------------"
              "--------------"
           << endl;
      info();
      break;
    }
  }
};

int main() {
  PAGE a;
  a.show();
}