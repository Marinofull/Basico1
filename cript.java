import java.util.Scanner; 

public class cript {
	public static void main(String[] args) {
		int i, k, n, tam;
	    String s;
	    Scanner in = new Scanner(System.in);
	    
//	    scanf("%d\n",&n);
	    n = in.nextInt();
	    
	    for (k = 0; k <= n; ++k)
	    {
//	        gets(s);
	    	s = in.nextLine();
	    	
//	        tam=strlen(s);
	    	tam=s.length();
	        // printf("tamanho eh %d\n", tam);

	        for (i = 0; i < tam; ++i)
	        {
//	            if ( (s.getBytes()[i]>64 && s.getBytes()[i]<91) || (s.getBytes()[i]>96 && s.getBytes()[i]<123) )
	        	if(Character.isLetter(s.getBytes()[i]))
	            {
	                s.getBytes()[i]+=3;
	            }
	        }
	        // printf("shiftado 3 => %s\n",s );

//	        for (i = tam-1, j=0; i >= 0; i--, j++)
//	        {
//	            t[j]=s[i];
//	        }
//	        t[tam]='\0';
	        StringBuffer bu = new StringBuffer(s);
	        s=bu.reverse().toString();

	        // printf("invertido => %s\n",t );

	        for (i = tam/2; i < tam; ++i)
	        {
	            s.getBytes()[i]--;
	        }
//	        printf("%s\n", t);
	        if(k!=0){
	        	System.out.println(s);
	        }
	    }
	    in.close();
	}
}
