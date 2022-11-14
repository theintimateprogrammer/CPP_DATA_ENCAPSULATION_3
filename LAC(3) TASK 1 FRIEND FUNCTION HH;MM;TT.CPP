 #include <iostream>
  using namespace std; 
  class time {
   
  private: 
     int hours; 
     int minutes;
     int seconds; 
     
   public: 
   void gettime(void); 
   void puttime(void); 
   void add time(time t1,time t2);
   
    }; 
	void time::gettime(void) { 
	cout << "enter time in hours :"; 
	cin>>hours; 
	cout << "enter time in minutes :"; 
	cin>>minutes;
	cout << "enter time in seconds :";
	cin>>seconds;
	  
	   } 
	   
   void time::puttime(void) { 
   cout << endl; 
   cout << "time after add: "; 
   cout << hours << ":" << minutes << ":" << seconds << endl;
   
    }
	
	 void time::add time(time t1,time t2) { 
	 this->seconds=t1.seconds+t2.seconds; 
	 this->minutes=t1.minutes+t2.minutes + this->seconds/60;;
	 this->hours= t1.hours+t2.hours + (this->minutes/60); 
	 this->minutes %=60; this->seconds %=60;
	  
	   } 
	   
int main() { 

    time t1,t2,t3; 
    t1.gettime();
    t2.gettime(); //add two times t3.addtime(t1,t2); t3.puttime(); }
}

