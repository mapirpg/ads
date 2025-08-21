package Aula20250820;

public class Escola {
	public static void main(String[] args) {
		Aluno gustavo = new Aluno();
				
		gustavo.setCurso("Informática");
		gustavo.setNome("Gustavo");
		
		String teste = gustavo.teste;
		
		System.out.println(teste);
		
		System.out.println("Curso do " + gustavo.getNome() + ": " + gustavo.getCurso());
				
	}
}
