import java.util.*;
public class code71A {
	public static void main(String[] args) {
		try (Scanner inScanner = new Scanner(System.in)) {
            int n = 0;
            String[] strings = new String[100];
            n = inScanner.nextInt();
            for (int i = 0; i < n; i++) {
            	strings[i] = inScanner.next();
            	
            }

            for (int i = 0; i < n; i++) {
            	int length = strings[i].length();
            	if (length > 10) {
            		int temp=length-2;
            		System.out.println(strings[i].charAt(0) + String.valueOf(temp) + strings[i].charAt(length - 1));
            	} else {
            		System.out.println(strings[i]);
            	}
            }
        }

	}

}
