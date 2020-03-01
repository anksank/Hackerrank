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

public class Solution {

    private static final int INSERT = 1;
    private static final int REMOVE = 2;
    private static final int DISPLAY = 3;
    // A hashmap of number and count
    private static HashMap<Integer, Integer> countMap = new HashMap<Integer, Integer>();
    private static HashMap<Integer, Set<Integer>> hashMap = new HashMap<Integer, Set<Integer>>(); 

    static List<Integer> freqQuery(List<List<Integer>> queries) {
        // A hashmap of count and set of numbers
              
        List<Integer> output = new ArrayList<>();

        for (int i = 0; i < queries.size(); i++) {
            int operation = queries.get(i).get(0);
            int value = queries.get(i).get(1);
            if (operation == INSERT) {
                updateHashMaps(value, 1);
                if (countMap.get(value) != 1) {
                    hashMap.get(countMap.get(value) - 1).remove(value);
                }
            } else if (operation == REMOVE) {
                if (countMap.get(value) != null && countMap.get(value) >= 1) {
                    updateHashMaps(value, -1);
                    // need to remove this value from the linked list at countMap.get(value) + 1         
                    hashMap.get(countMap.get(value) + 1).remove(value);
                }
            } else {
                if (hashMap.get(value) == null || hashMap.get(value).isEmpty()) {
                    output.add(0);
                } else {
                    output.add(1);
                }
            }
        }

        return output;
    }

    static void updateHashMaps(int value, int difference) {
        updateMapCount(value, difference);
        if (hashMap.get(countMap.get(value)) == null || hashMap.get(countMap.get(value)).isEmpty()) {
            Set<Integer> numberset = new HashSet<Integer>();
            numberset.add(value);
            hashMap.put(countMap.get(value), numberset);
        } else {
            hashMap.get(countMap.get(value)).add(value);
        }
    }

    static void updateMapCount(int value, int difference) {
        if (countMap.get(value) != null) {
            countMap.put(value, countMap.get(value) + difference);
        } else {
            countMap.put(value, difference);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        List<List<Integer>> queries = new ArrayList<>();

        IntStream.range(0, q).forEach(i -> {
            try {
                queries.add(
                    Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        List<Integer> ans = freqQuery(queries);

        bufferedWriter.write(
            ans.stream()
                .map(Object::toString)
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}
