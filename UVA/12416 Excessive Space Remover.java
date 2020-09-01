import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main 
{
    public static void main(String[] args) throws IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb=new StringBuffer();
        String m="";
        while((m=br.readLine())!=null)
        {
           int count=0,tempC=0;
           for(int i=0;i<m.length();i++)
           {
               if(m.charAt(i)==' ')
               {
                   tempC++;
               }else
               {
                   if(tempC>count)
                   {
                       count=tempC;
                   }
                   tempC=0;
               }
           }
           sb.append((int)Math.ceil(Math.log(count)/Math.log(2))).append("\n");
        }
        System.out.print(sb);
    }
}