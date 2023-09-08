import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Nextround {

	public static void main(String[] args) {
		List<Integer> l = new ArrayList<Integer>();
        Scanner sc  = new Scanner(System.in);		
		int test  = sc.nextInt();
		int k = sc.nextInt();
		int cnt=0;
		for(int i = 0; i<test; i++) {			

			l.add(sc.nextInt());
		}	
		int n= l.get(k-1);
		
		for(int i = 0; i<test; i++) {			

			if(l.get(i)>0 && l.get(i)>=n) 
				cnt++;
		}		
		System.out.println(cnt);
	}

}

