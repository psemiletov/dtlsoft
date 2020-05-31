#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  cout << "hours:" << endl;
  int hours;
  cin >> hours;

  cout << "minutes:" << endl;
  int minutes;
  cin >> minutes;

  cout << "seconds:" << endl;
  int seconds;
  cin >> seconds;

 //переводим в секунды
  int secs = (hours)*3600 + (minutes)*60 + seconds;

// меру угла из часовой системы в градусную
  float S = secs * 15;

  int A = S / 3600;
  int A1 = A * 3600;
  int S1 = S - A1;
  int B = S1 / 60;
  int B1 = B * 60;
  int C = S1 - B1;

  cout << A << "°" << B << "\'" << C << "\"" << endl;
  cout << "В секундах дуги:" << S << endl;
  
  return 0;
}
