class Solution {
public:
    long long countCommas(long long n) {
         long long m=n;
        long long c=0; //commas
        while(m>=1000){
            c++;
            m=m/1000;
        }
        if(c==1){
            c=n-999;
        }
        else if(c==2){
            c=(999999-999) + 2*(n-999999); //numbers>=1000000 have 2 commas
        }
        else if(c==3){
            c=3*n-999999999-999999-999; //solving the equation formed
        }
        else if(c==4){
            c=4*n-999999999999-999999999-999999-999;
        }
        else if(c==5){
            c=5*n-999999999999999-999999999999-999999999-999999-999;
        }

        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna