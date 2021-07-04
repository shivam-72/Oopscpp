//this is complete class
class rectangle{
       private:
       int length;
       int breadth;
       public:
       rectangle();//default constructor
       rectangle(int l,int b);//parameterised constructor
       rectangle(rectangle &r);//copy constructor
       void setLength(int l);//mutator
       void setBreadth(int b);//mutator
       int getlength(); //accessor
       int getbreadth(); //accessor
       int area();       //facilitators
       int perimeter();//facilitators
       int issquare();//enquiry
       ~rectangle();// destructer

};