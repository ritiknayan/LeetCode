class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR to find differing bits
        int differingBits = start ^ goal;
        
        // Count the number of set bits (1s) in differingBits
        int count = 0;
        while (differingBits > 0) {
            count += differingBits & 1; // Add the last bit of differingBits to count
            differingBits >>= 1; // Shift right by 1 to process the next bit
        }
        
        return count;
    }
};
