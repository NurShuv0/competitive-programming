import java.util.*;

public class tournament {
    public static void main(String[] args) {
     
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t-- > 0)
        {
            int n = input.nextInt();
            int j = input.nextInt();
            int k = input.nextInt();
            int[] v = new int[n];
            for(int i = 0; i < n ; i++)
            {
                v[i] = input.nextInt();
            }
            int mx = v[0];
            for(int i = 1; i < n; i++)
            {
                mx = Math.max(mx, v[i]);
            }
            if(mx > v[j - 1] && k == 1)
            {
                System.out.println("NO");
            }
            else
            {
                System.out.println("YES");
            }
        }
    }
}
