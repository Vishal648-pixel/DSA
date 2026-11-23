class Solution {
public:
    int guessNumber(int n) {
        int low =0;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=guess(mid);
            if (val==0){ //mid==pick 
                return mid ;
            }
            else if (val==-1) {//mid>pick
                high=mid-1;
            }
            else{ //mid<pick
                low=mid+1;
            }
        }
        return -1;
    }
};