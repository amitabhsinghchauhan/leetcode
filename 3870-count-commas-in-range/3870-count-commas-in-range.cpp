class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int m=n;
        while(m>=1000){
            m=m/1000;
            count++;
        }
        if(count==1){
            count=count*(n-999);
        }
        else if(count==2){
            count=count*(n-9999);
        }
        else if(count==3){
            count=count*(n-99999);
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna