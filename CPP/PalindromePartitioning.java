import java.util.*;

class PalindromePartitioning {
    
    static boolean isPalindrome(String string, int i, int j){
        while(i<j){
            if(string.charAt(i)!=string.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
    static int minPalPartition(String string, int i, int j){
        if(i>=j || isPalindrome(string,i,j))
            return 0;
        int ans = Integer.MAX_VALUE, count;
        
        for(int k=i; k<j ; k++){
            count = minPalPartition(string,i,k) + minPalPartition(string, k+1,j)+1;
            ans = Math.min(ans,count);
        }
        return ans;
    }
    
    
	public static void main (String[] args) {
	    Scanner sc  = new Scanner(System.in);
	    String a = sc.next();
	    
	    System.out.println(minPalPartition(a, 0,a.length()-1));
	}
}