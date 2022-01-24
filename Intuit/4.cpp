   void findMaximumNum(
    string str, int k, string& max)
{
    // Return if no swaps left
    if (k == 0)
        return;

    int n = str.length();

    // Consider every digit
    for (int i = 0; i < n - 1; i++) {

        // Compare it with all digits after it
        for (int j = i + 1; j < n; j++) {
            // if digit at position i
            // is less than digit
            // at position j, swap it
            // and check for maximum
            // number so far and recurse
            // for remaining swaps
            if (str[i] < str[j]) {
                // swap str[i] with str[j]
                swap(str[i], str[j]);

                // If current num is more
                // than maximum so far
                if (str.compare(max) > 0)
                    max = str;

                // recurse of the other k - 1 swaps
                findMaximumNum(str, k - 1, max);

                // Backtrack
                swap(str[i], str[j]);
            }
        }
    }
}

    string findMaximumNum(string str, int k)
    {
       // code here.
       string max="";
       findMaximumNum(str, k, max);
       return max;
    }
