///Accepted
import java.util.Scanner;
import java.math.BigInteger;
///in case of java all class should be name as "Main"
///All programs must begin in a static main method in a Main class.
class Main {

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        BigInteger a,b,d;
        char c;
        while (input.hasNext())
        {
            a=input.nextBigInteger();
            c=input.next().charAt(0);
            b=input.nextBigInteger();

            if(c=='/')
            {
                d=a.divide(b);
                System.out.println(d);
            }
            else if(c=='%')
            {
                d=a.mod(b);
                System.out.println(d);
            }

        }

    }
}
