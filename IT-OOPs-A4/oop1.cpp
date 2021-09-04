/* |\     /|     @author: umgbhalla
   | )   ( |     date: 27 Aug 2021 
   | |   | |        
   | |   | |   
   | (___) |   
   (_______) */
/* Create  a  class  called  Time  for  performing  arithmetic  with  Time.  
 * Write  a  program  to  test  your class.  
 * Format for Time is hh(hours):mm(minutes):ss(seconds).  
 * Use integer variables to define hours, minutes and seconds as data of the class.  
 * a.Provide a setdata member function that initializes the value of data members of class variables if not passed then initialized defaultly.  
 * b.Add two Time objects and return a Time object. Function prototype: Time addTime(Time , Time); 
 * c.Subtract two Time objects and return a Time object. Function prototype: Time subtractTime(Time , Time); 
 * d.ShowTime in the form hh:mm:ss. */


#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
  public :
    int hour;
    int minute;
    int second;

    Time(int h = 0, int m  = 0, int s = 0)
    {
      hour = h;
      minute = m;
      second = s;
    }

    void setTime(int h, int m, int s)
    {
      hour = h;
      minute = m;
      second = s;
    }

    void showTime()
    {
      cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second << "\n";
    }

    Time addTime(Time a, Time b){
      Time tf;//object created with default value
      int totals = (a.hour + b.hour)*3600 +(a.minute + b.minute)*60 + a.second+b.second;
      int hf=totals/3600;
      totals%=3600;
      int mf=totals/60;
      totals%=60;
      int sf = totals;
      tf.hour=hf;
      tf.minute=mf;
      tf.second=sf;
      return tf;
    }
    Time subtractTime(Time a, Time b){
      Time tf;//object created with default value
      int totals = (a.hour - b.hour)*3600 +(a.minute - b.minute)*60 + a.second-b.second;
      int hf=totals/3600;
      totals%=3600;
      int mf=totals/60;
      totals%=60;
      int sf = totals;
      tf.hour=hf;
      tf.minute=mf;
      tf.second=sf;
      return tf;
    }
};
int main()
{
int hour1, min1, sec1, hour2, min2, sec2;
  cout<<"time 1 in space seperated form {for eg: 12 10 39}\t";
  cin >> hour1 >> min1 >> sec1;
  Time t1(hour1, min1, sec1);
  t1.showTime(); 
  cout<<"time 2 in space seperated form {for eg: 12 10 39}\t";
  cin >> hour2 >> min2 >> sec2;
  Time t2(hour2,min2,sec2);  
  t2.showTime();
  cout<<"sum\t:";
  t1.addTime(t1,t2).showTime();  
  cout<<"diff\t:";
  t1.subtractTime(t1,t2).showTime();  

  cout << "\n Name: Umang Bhalla \n Scholar No: 20U03031   " << endl;
  return 0;
}
