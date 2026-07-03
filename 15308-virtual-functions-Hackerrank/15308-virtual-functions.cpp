
class Person {
    protected:
    string name;
    int age;
    public:
    virtual void getdata(){
    }
    virtual void putdata(){  
    }
    virtual ~Person() {}
};
class Professor: public Person{
    protected:
    int publications;
    static int cur_id;
    int id;
    public:
    void getdata() override{
        cin>>name;
        cin>>age;
        cin>>publications;
        id=++cur_id;
    }
    void putdata() override{
        cout<<name<<" "<<age<<" "<<publications<< " "<<id<< endl;
    }
};
int Professor::cur_id = 0;
class Student : public Person{
    protected:
    int marks[6];
    static int cur_id;
    int id;
    public:
    void getdata() override{
        cin>>name;
        cin>>age;
        for (int i=0; i<6; i++) {
            cin>>marks[i];
        }
        id=++cur_id;
    }
    void putdata() override{
        int s=0;
        for (int i=0; i<6; i++) {
            s+=marks[i];
        }
        cout<<name<<" "<<age<<" "<<s<<" "<<id<<endl;
    }
};
int Student::cur_id = 0;


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna