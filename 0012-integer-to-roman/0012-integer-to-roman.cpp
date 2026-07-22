class Solution {
public:
    string add(int a,string s,int n){
        if (n==0)
        return s;
        switch(a){
            case 1:
            if(n<4){
                for(int i=0;i<n;i++){
                s="I"+s;
                }return s;
            }
            if(n==4){
                s="IV"+s;
                return s;
            }
            if(n<9){
                for(int i=0;i<(n-5);i++){
                s="I"+s;
                }s="V"+s;;
                return s;
            }
            if(n==9){
                s="IX"+s;
                return s;
            }
            case 2:
            if(n<4){
                for(int i=0;i<n;i++){
                s="X"+s;
                }return s;
            }
            if(n==4){
                s="XL"+s;
                return s;
            }
            if(n<9){
                for(int i=0;i<(n-5);i++){
                s="X"+s;
                }s="L"+s;
                return s;
            }
            if(n==9){
                s="XC"+s;
                return s;
            }
            case 3:
            if(n<4){
                for(int i=0;i<n;i++){
                s="C"+s;
                }return s;
            }
            if(n==4){
                s="CD"+s;;
                return s;
            }
            if(n<9){
                for(int i=0;i<(n-5);i++){
                s="C"+s;
                }s="D"+s;
                return s;
            }
            if(n==9){
                s="CM"+s;
                return s;
            }
            case 4:
            if(n<4){
                for(int i=0;i<n;i++){
                s="M"+s;}
                return s;
            }
            
            }
            return s;
        }
    

    string intToRoman(int num) {
        string s="";
        int r,t=0;
        while(num!=0){
            r=num%10;
            t++;
            s=add(t,s,r);
            num/=10;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna