import java.util.*;
public class Code {
	public static void main(String[] args) {
		Scanner sc=new scanner(System.in);
		int n,d,sum=0;
		System.out.println("enter the number");
		n=sc.nextInt;
		while(n!=0){
		    d=n%10;
		    sum+=d;
		n=n/10;
	}
	System.out.println("sum of digits"+sum);
}
}

