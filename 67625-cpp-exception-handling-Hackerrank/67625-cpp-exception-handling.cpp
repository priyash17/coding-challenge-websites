

void process_input(int n) {
    try{
    int d = largest_proper_divisor(n);
    cout << "result=" << d << endl;
    }
    catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    }
    cout << "returning control flow to caller" << endl;
}





// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna