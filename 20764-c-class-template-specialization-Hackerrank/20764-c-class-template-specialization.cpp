

// Define specializations for the Traits class template here.
#include <string>
template<typename T> struct Traits{
    static std::string name(int index){ return "unknown";}
};
template<> struct Traits<Fruit>{
    static::string name(int index){
        switch ((Fruit)index) {
            case Fruit::apple:return "apple";
            case Fruit::orange:return "orange";
            case Fruit::pear:return "pear";
            default: return "unknown";
        }
    }
};
template<> struct Traits<Color>{
    static::string name(int index){
        switch ((Color)index) {
            case Color::red:return "red";
            case Color::green:return "green";
            case Color::orange:return "orange";
            default: return "unknown";
        }
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna