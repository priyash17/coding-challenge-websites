
//Implement the class Box
class Box{
//l,b,h are integers representing the dimensions of the box
private:
int l,b,h;
// The class should have the following functions : 
public:
// Constructors:
Box(){
    l=0;
    b=0;
    h=0;
} 
// Box();
// Box(int,int,int);
Box(int length,int breadth,int height){
    l=length;
    b=breadth;
    h=height;
}
// Box(Box);
Box(const Box &c){
    l=c.l;
    b=c.b;
    h=c.h;
}


// int getLength(); // Return box's length
int getlength(){
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
long long CalculateVolume(){
    long long y;
    long long L=l;
    long long B=b;
    long long H=h;
    y=L*B*H;
    return y;
}

//Overload operator < as specified
bool operator < (const Box& d){
    if(l<d.l){
        return 1;
    }
    if(b<d.b && l==d.l){
        return 1;
    }
    if(h<d.h && l==d.l && b==d.b){
        return 1;
    }
    return 0;
}
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
friend ostream& operator <<(ostream& out,const Box& B){
    out<<B.l<<" "<<B.b<<" "<<B.h;
    return out;
}

};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna