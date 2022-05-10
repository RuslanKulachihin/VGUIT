1. Реализовать программу, получающую на вход в качестве аргумента имя человека и выводящую 
   “Hello” + имя, в противном случае, если параметр не передавался, “ Hello world”.

import java.util.Scanner;
public class HelloWorld {

	public static void main(String[] args) {
               System.out.println("Введите свое имя !!!");
		Scanner length  = new Scanner(System.in);
		String num = length.nextLine();
		System.out.println("Hello " + (args.length > 0 ? "world !!": num +" !!!" ));			
		}
	}
		
