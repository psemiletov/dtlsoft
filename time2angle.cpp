#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>


using namespace std;

int main (int argc, char *argv[])
{
 if (argc < 1)
    return 0;

  std::tm tm1 = {};
  std::istringstream s1 (argv[1]);

  s1 >> get_time (&tm1, "%H:%M:%S");


 //переводим в секунды
  int secs = (tm1.tm_hour)*3600 + (tm1.tm_min)*60 + tm1.tm_sec;

// меру угла из часовой системы в градусную
  float S = secs * 15;

  int A = S / 3600;
  int A1 = A * 3600;
  int S1 = S - A1;
  int B = S1 / 60;
  int B1 = B * 60;
  int C = S1 - B1;

  cout << "В десятичных градусах: " << (float) S / 3600 << endl;
  cout << A << "°" << B << "\'" << C << "\"" << endl;
  cout << "В секундах дуги:" << S << endl;

  return 0;
}
