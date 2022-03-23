#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel{
    class Notebook{
     private:
    

     
     public:
        void static write( int page, int row, int column,Direction x, const string &s);
        string static read(int page, int row, int column,Direction x, int len);
        void static erase( int page, int row, int column,Direction x, int len);
        void static show(int page);
    };
    
}

