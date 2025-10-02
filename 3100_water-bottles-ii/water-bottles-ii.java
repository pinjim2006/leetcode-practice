class Solution {
    public int maxBottlesDrunk(int numBottles, int numExchange) {
        int result = numBottles;
        while(numBottles >= numExchange){
            numBottles -= numExchange;
            numExchange++;
            numBottles++;
            result++;
        }
        return result;
    }
}