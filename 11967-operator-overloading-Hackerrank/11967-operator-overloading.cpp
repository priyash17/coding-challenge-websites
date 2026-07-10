


class Matrix {
  public:
  vector<vector<int>>a; 
  Matrix operator+ (const Matrix& b){
    Matrix rl;
    int c=a[0].size();
    int r=a.size();
    rl.a.resize(r, vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            rl.a[i][j]=a[i][j]+b.a[i][j];
        }
    }
    return rl;
  }
};




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna