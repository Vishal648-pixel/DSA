class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;//hummne original element ko sotre kiya 
        long long reversed_num = 0;//ek reversed element ke liye varible banaya

        if (x < 0) {//agar x 0 se chota hai to false return karo 
            return false;
        }
        else if (x <= 9) {//agar x 9 se chota aur equal to hai so true return karo kyuki wo single digit hai so uska palindrome ayega hi 
            return true;
        }
        else {
            while (x > 0) {//agar x 0 se bada hai to 
                int mod = x % 10;//to uska last digit store karo 
                reversed_num = reversed_num * 10 + mod;//fir hum remainder ke elements ko ek ek kark
                //add karenge 
                x = x / 10;//fir jo element add kiye use remove karenge original element se 
            }

            if (original == reversed_num) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};