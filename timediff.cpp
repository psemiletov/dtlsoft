#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
  if (argc < 1)
     {     
      cout << "time diff params must be hh:mm:ss hh:mm:ss" << endl;
      return 0;
     }


  std::tm tm1 = {};
  std::tm tm2 = {};

  std::istringstream s1 (argv[1]);
  std::istringstream s2 (argv[2]);

  s1 >> get_time (&tm1, "%H:%M:%S");
  s2 >> get_time (&tm2, "%H:%M:%S");

  std::time_t t1 = mktime(&tm1);
  std::time_t t2 = mktime(&tm2);

  double seconds = difftime (t1, t2); 
  int tt = seconds;
  int hour = tt / 3600;
  tt = tt % 3600;
  int min = tt/60;
  tt = tt%60;
  int sec = tt;	

  cout << "pure seconds:" << seconds << endl;
  cout << hour << ":" << min<<":" << sec << endl;

  return 0;
}
