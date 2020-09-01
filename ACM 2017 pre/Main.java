
import java.math.*;
import java.util.*;


public class Main {

	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		long  t,k1,a1,d1,i,j;
		//double te = 0;
		BigInteger sum,x = null;
		BigDecimal bd,result;
		t=input.nextInt();
		for(i=1; i<=t; i++)
		{
			result=BigDecimal.ZERO;
			for(j=0; j<2; j++)
			{
				a1= input.nextInt();
				d1=input.nextInt();
				k1=input.nextInt();
				//te= (k1/2.0);
				sum=BigInteger.valueOf(2*a1+(k1-1)*d1);
				bd= new BigDecimal(sum);
				result=result.add(bd.multiply(BigDecimal.valueOf(k1/2.0)));
			}
			x=result.toBigInteger();
			System.out.println("Case "+i+": "+x);
		}

	}

}
