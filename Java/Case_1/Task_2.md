
		
2. Написать программу, получающую на вход в качестве аргумента несколько
   параметров. В программе вывести “Вы ввели” + М (количество параметров) + “параметров”. 
   Если параметры не передавались, вывести ”Вы не передавали параметров”.

import java.util.Scanner;
public class HelloWorld {

	public static void main(String[] args) {
		System.out.println("Введите параметры !!!");
		Scanner length  = new Scanner(System.in);
		String num = length.nextLine();
	if (args.length < 1) {
		System.out.println("Вы не передавали параметров");
	} 
	else {
		System.out.println("Вы ввели " + args.length + " параметров");
	}
    }
}

