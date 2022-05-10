import java.util.Scanner;
        public class Task_2 {
        public static void main(String[] args) {

            System.out.println("Введите параметры !!!");
            Scanner length  = new Scanner(System.in);
            String num = length.nextLine();
            if (args.length < 1)
            {
                System.out.println("Вы не передавали параметров");
            }
            else
            {
                System.out.println("Вы ввели " + args.length + " параметров");
            }
        }
    }


