#include <bits/stdc++.h>
using namespace std;

class password {

private:
  int a = 0000;

public:
  // void reset(void) { Pass_W(); }


  void Set_Pass_W(void) {
    int b;
    int p;
    cout << "Set passward (4 digit)    :";
    cin >> p;
  label:
    cout << "Verify passward (4 digit) :\a";
    cin >> b;
    if (p == b) {
      a = p;
      cout<<"Password created successfully "<<endl;
      Pass_W();
    } else {
      cout << endl;
      cout << "        Something Wrong.....!\a" << endl;
      cout << endl;
      goto label;
    }
  }
  void Pass_W(void) {
    int b;
    cout << "Enter passward (4 digit) :";
    cin >> b;
    if (a == b) {
      login();
    } 
    else {
      cout << endl;
      cout << "        Something Wrong.....!" << endl;
      cout << endl;
      Pass_W();
    }
  }
  // void Ch_Pass_W(void) {
  //   int b, c, d;
  // label:
  //   cout << endl;
  //   cout << "Enter passward (4 digit)  :";
  //   cin >> b;
  //   if (b == a) {
  //     Set_Pass_W();
  //   } else {
  //     cout << endl;
  //     cout << "        Something Wrong.....!" << endl;
  //     cout << endl;
  //     goto label;
  //   }
  // }

void login()
{
  cout<<"This is login page"<<endl;
  cout<<"Press 1-> Change password"<<endl;
  cout<<"Press 2-> Manage employee"<<endl;
  int x;
  cin>>x;
  switch(x){
    case 1:
      Set_Pass_W();
      break;

    case 2:
      cout<<"This is manage employee page"<<endl;
      break;
  }
  
}
};