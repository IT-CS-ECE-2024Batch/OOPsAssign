/* |\     /|     @author: umgbhalla
   | )   ( |     date: 27 Aug 2021 
   | |   | |        
   | |   | |   
   | (___) |   
   (_______) */

/* Create  a  Structure  called  Time  for  performing  arithmetic  with  Time.  
 * Write  a  program  to  test  your structure.  
 * Format for Time is hh(hours):mm(minutes):ss(seconds).  
 * Use integer variables to define hours, minutes and seconds as data of the Structure.  
 * a.Provide a setdata member function that initializes the value of data members of structure variables if not passed then initialized defaultly.  
 * b.Add two Time objects and return a Time object. Function prototype: Time addTime(Time , Time); 
 * c.Subtract two Time objects and return a Time object. Function prototype: Time subtractTime(Time , Time); 
 * d.ShowTime in the form hh:mm:ss. */



#include<iostream>
#include<iomanip>
using namespace std;

struct Time
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
  cout<<"time 1\t:";
  Time t1(10, 50, 59);
  t1.showTime();  // 10:50:59
  cout<<"time 2\t:";
  Time t2(6,33,33);  
  t2.showTime();  // 06:33:33
  cout<<"sum\t:";
  t1.addTime(t1,t2).showTime();  
  cout<<"diff\t:";
  t1.subtractTime(t1,t2).showTime();  

  return 0;
}
