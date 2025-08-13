package poo;

import java.lang.reflect.Array;

public class Aula20250813 {
	
	public static void main(String[] args) {
		
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 11; j++) {
				mult(i, j);
			}
		}
	}
	
	static void mult(int a, int b) {
		int s = a * b;
		System.out.println("Soma: " + s);
	}
	
	
	
	
	
	
	
	
}
