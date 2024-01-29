package Chapter2;

public class nested_loop {
	public static void main(String[] args) {
		for (int i=1; i<=4;i++) { //first loop is for the amount of lines
			for(int j=1; j<=i; j++) { // second loop will repeat the characters on each line
				System.out.print(i);
			}
			System.out.println();
		}
	}
}
