

class Message {
private:
    std::string _text;
    int _id;
public:
    Message(const string& text, const int id) : _text(text), _id(id) {}

    const string& get_text() {
        return _text;
    }

    bool operator<(const Message& message)const{
        if(_id < message._id) return true;
        return false;
    }
};

class MessageFactory {
    int counter = 0;
public:
    MessageFactory() = default;
    Message create_message(const string& text)
    {
        counter++;
        return {text, counter};
    }
};




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna