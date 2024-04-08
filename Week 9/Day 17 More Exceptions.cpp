

//Write your code here

struct Calculator {
      public:
      int n;
      
      int power(int n, int p)
      {
          try {
          if (n < 0 or p < 0) throw invalid_argument("n and p should be non-negative");
          
          return pow(n,p);
          }
          catch (exception& e){
              throw invalid_argument ("n and p should be non-negative");
          }
      }
    
};


