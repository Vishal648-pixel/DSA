
class Solution {
public:
    int guessNumber(int n) {
        int low = 1;  // Starting range
        int high = n; // Ending range

        while (low <= high) {
            int mid = low + (high - low) / 2; // Middle element

            int val = guess(mid); // API se guess check karna

            if (val == 0) { // Number mil gaya
                return mid;
            }
            else if (val == -1) { // Guess bada hai, left jao
                high = mid - 1;
            }
            else { // Guess chhota hai, right jao
                low = mid + 1;
            }
        }

        return -1; // Number nahi mila
    }
};
