package Aula20250820;

/**
 * Classe para representar um aluno
 * @author Marcel
 * @version 1.0
 */

public class Aluno {
		private String nome;
		private int matricula;
		private String curso;
		private int periodo;
		String teste = "ASDDASADSR#$@RQCCFQACFAFC";
		
		public void matricular(String curso, int matricula, int periodo) {
			this.curso = curso;
			this.periodo = periodo;
			this.matricula = matricula;
		}
		
		public void setNome(String nome) {
			this.nome = nome;
		}
		
		public void setCurso(String curso) {
			this.curso = curso;
		}
		
		public String getNome() {
			return this.nome;
		}
		
		public String getCurso() {
			return this.curso;
		}
}
