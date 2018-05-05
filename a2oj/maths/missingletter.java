import java.util.HashSet;
import java.until.Scanner;

public class missingletter
{
    public static void main(String [], args)
    {
        Scanner sc  =  new Scanner(System.in);
        String s  = sc.next();
        HashSet<String> hs  = new HashSet<>();
        for(int i=0;i<=s.length();i++)
        {
            for(char c = 'a';c<='z';c++)
            {
                 hs.add(s.substring(0,i)+c+s.substring(i));
            }
        }

        System.out.println(hs.size());
        System.exit(0);
    }
}