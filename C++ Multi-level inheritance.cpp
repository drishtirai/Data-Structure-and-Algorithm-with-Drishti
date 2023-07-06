class test: public student 
{
    public:
   float totalmarks=0, avgmarks=0;
    void set_marks(float temp[]) 
    {
    // Add set_marks() method here.
    for(int i=0; i<5; i++)
         {
             totalmarks+=temp[i];
         }
        avgmarks=totalmarks/5;
    }
};

class result: public test
{
    // Add display() method here.
     public:
   void display()
   {
   cout<<roll_number<<" "<<totalmarks<<" "<<avgmarks;
   cout<<endl;
   }
};
