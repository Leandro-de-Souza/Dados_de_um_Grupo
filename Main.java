import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, quanth, quantm;
	    double menora, maiora, media, soma;
	    
	    System.out.print("Quantas pessoas serao digitadas? ");
	    N = sc.nextInt();
	    
	    double[] alturas = new double[N];
	    char[] generos = new char[N];
	    
	    for (int i = 0; i < N; i++) {
	    	System.out.print("Altura da " + (i + 1) + "a pessoa: ");
	    	alturas[i] = sc.nextDouble();
	    	System.out.print("Genero da " + (i + 1) + "a pessoa: ");
	    	generos[i] = sc.next().charAt(0);
	    }
	    
	    menora = alturas[0];
	    maiora = alturas[0];
	    
	    for (int i = 1; i < N; i++) {
	        if (alturas[i] > maiora) {
	            maiora = alturas[i];
	        }
	        if (alturas[i] < menora) {
	            menora = alturas[i];
	        }
	    }

		quanth = 0;
		quantm = 0;
		soma = 0;

	    for (int i = 0; i < N; i++) {
	        if (generos[i] == 'M') {
	            quanth = quanth + 1;
	        }
	        else {
	            quantm = quantm + 1;
	            soma = soma + alturas[i];
	        }
	    }

	    media = soma / quantm;
	    
	    System.out.println("Menor altura = " + menora);
	    System.out.println("Maior altura = " + maiora);
	    System.out.println("Media das alturas das mulheres = " + String.format("%.2f", media));
	    System.out.println("Numero de homens = " + quanth);
	    
	    sc.close(); 
		
	}

}
