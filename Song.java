////Beatriz Souza de Cerqueira
//01/29/2024
//Assignment 2. Get You a Cat -  this program prints the song Bought Me a Cat, which has repeated
//verses, so the code summarize the redundancy of the lyrics for a more organized output method.


public class Song {
	public static void main(String[] args) {
		BoughtCat();
		BoughtHen();
		BoughtDuck();
		BoughtGoose();
		BoughtSheep();
		BoughtPig();

}
	public static void BoughtCat(){
		System.out.println("Bought me a cat and the cat pleased me,");
		System.out.println("I fed my cat under younder tree.");
		CatSound();
	}
	public static void CatSound(){
		System.out.println("Cat goes fiddle-i-fee.");
	}
		public static void BoughtHen() {
			System.out.println("Bought me a hen and the hen pleased me,\r\n"
					+ "I fed my hen under yonder tree.");
			HenSound();
			CatSound();
		}
		public static void HenSound() {
			System.out.println("Hen goes chimmy-chuck, chimmy-chuck,");
		}
		public static void BoughtDuck() {
			System.out.println("Bought me a duck and the duck pleased me,\r\n"
					+ "I fed my duck under yonder tree.");
			DuckSound();
			HenSound();
			CatSound();
		}
		public static void DuckSound() {
			System.out.println("Duck goes quack, quack,");
		}
		public static void BoughtGoose() {
			System.out.println("Bought me a goose and the goose pleased me,\r\n"
					+ "I fed my goose under yonder tree.");
			GooseSound();
			DuckSound();
			HenSound();
			CatSound();
			
		}
		public static void GooseSound() {
			System.out.println("Goose goes hissy, hissy,");
		}
		public static void BoughtSheep() {
			System.out.println("Bought me a sheep and the sheep pleased me,\r\n"
					+ "I fed my sheep under yonder tree.");
			SheepSound();
			GooseSound();
			DuckSound();
			HenSound();
			CatSound();
		}
		public static void SheepSound() {
			System.out.println("Sheep goes baa, baa,");
		}
		public static void BoughtPig () {
			System.out.println("Bought me a pig and the pig pleased me,\r\n"
					+ "I fed my pig under yonder tree.");
			PigSound();
			SheepSound();
			GooseSound();
			DuckSound();
			HenSound();
			CatSound();
		}
		public static void PigSound() {
			System.out.println("Pig goes oink, oink,");
		}
	}


