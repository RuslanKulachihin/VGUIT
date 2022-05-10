import java.util.Scanner;
    public class Task_1 {
        public static void main(String[] args) {
            System.out.println("Введите свое имя !!!");
            Scanner length  = new Scanner(System.in);
            String num = length.nextLine();
            System.out.println("Hello " + (args.length > 0 ? "world !!": num +" !!!" ));
        }
    }

