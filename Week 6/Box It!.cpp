
class Box{
private:
int l;
int b;
int h;
public:
// The class should have the following functions : 

// Constructors: 
Box(){
    l = 0;
    b = 0; 
    h = 0;
};
Box(int l1, int b1, int h1){
    l = l1;
    b = b1;
    h = h1;
}
Box (Box& a)
{
    l = a.l;
    b = a.b;
    h = a.h;
}


// int getLength(); // Return box's length
int getLength()
{
    return l;
}
// int getBreadth (); // Return box's breadth
int getBreadth (){
    return b;
}
// int getHeight ();  //Return box's height
int getHeight (){
    return h;
}
// long long CalculateVolume(); // Return the volume of the box
long long CalculateVolume() {
        return static_cast<long long> (l) * b * h;
    }
//Overload operator < as specified
bool operator<(Box& a){
    if (l < a.l) return true;
    else if (b < a.b and l == a.l) return true;
    else if (h < a. h and b == a.b and l == a.l) return true;
    
    return false;
}


//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
 friend std::ostream& operator<<(std::ostream& os, const Box& box) {
        os << box.l << " " << box.b << " " << box.h;
        return os;
    }
};
