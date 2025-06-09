/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        long low = 0, high = n;

        while (low <= high){
            if (guess( (int)((low + high)/2) ) == 0){
                return (int)((low + high)/2);
            }else if (guess( (int)((low + high)/2) ) == -1){
                high = (low + high)/2 - 1;
            }else{
                low = (low + high)/2 + 1;
            }
        }

        return -1;
    }
}