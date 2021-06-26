import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'appendAndDelete' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. STRING s
     *  2. STRING t
     *  3. INTEGER k
     */

    public static String appendAndDelete(String s, String t, int k) {
    
        // find the combined length of strings
        int combinedStringLength = s.length() + t.length();
    
        // if both strings are same, any value of k other than 1 would work
        // if k >= combined length of strings, answer is Yes
        if ((s.equals(t) && k != 1) || combinedStringLength <= k) {
            return "Yes";
        }
        
        // find the length of the shorter String
        int minCharCount = s.length() < t.length() ? s.length() : t.length();
        
        // find the index till which the string is same.
        int commonIndex = 0;
        for (commonIndex = 0; commonIndex < minCharCount; commonIndex++) {
            if (s.charAt(commonIndex) != t.charAt(commonIndex)) {
                break;
            }
        }
        
        // find the sum of count of characters different in both strings
        int differentCharCountS = s.length() - commonIndex;
        int differentCharCountT = t.length() - commonIndex;
        int totalCount = differentCharCountS + differentCharCountT;
        
        // if k is greater than or equal to the above sum
        // and if the difference is even, return Yes, else return No
        if (k >= totalCount && (k - totalCount) % 2 == 0) {
            return "Yes";
        } else {
            return "No";
        }
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String t = bufferedReader.readLine();

        int k = Integer.parseInt(bufferedReader.readLine().trim());

        String result = Result.appendAndDelete(s, t, k);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
