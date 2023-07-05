/*package whatever //do not write package name here */

import java.util.*;

class NearestGreaterNobyInterchangingDigits {
    
    public static TreeSet<Integer> list = new TreeSet<>();
    
    static void smallestNumber(String str, String ans){
        if(str.length()==0){
            list.add(Integer.parseInt(ans));
            return;
        }
        for(int i=0; i<str.length(); i++){
            char ch = str.charAt(i);
            String ros = str.substring(0,i) + str.substring(i+1);
            smallestNumber(ros,ans+ch);
        }
    }
    
    
    
	public static void main (String[] args) {
	    Scanner sc  = new Scanner(System.in);
	    int a = sc.nextInt();
	    int b = sc.nextInt();
	    
	    String s = a+"";
	    smallestNumber(s,"");
	    Iterator itr = list.iterator();
	    
	    System.out.println(list);
	    
	    int res = -1;
	    while(itr.hasNext()){
	        int no = (Integer) itr.next();
	        if(no>b){
	            res = no;
	            break;
	        }
	    }
	    System.out.println(res);
	}
}