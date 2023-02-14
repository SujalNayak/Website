public class Test1 {
public static void main(String[] args) {
    String str = new String("royal");
    System.out.println(str);
    str.concat("edu");
    System.out.println("after Concat=>"+ str); 
    StringBuffer sb = new StringBuffer("royal");
    System.out.println(sb); sb.append("eud");
    System.out.println("After Append => " + sb);
    sb.reverse(); System.out.println(sb);
    System.out.println(sb.length());
    String rev = sb.toString();
    System.out.println(rev); //take 1 string from user and check its palindrome
    }
}