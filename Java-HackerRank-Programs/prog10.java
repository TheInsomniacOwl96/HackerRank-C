import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

static int B;
static int H;
static boolean flag=true;

static {
    try {
    Scanner scan = new Scanner(System.in);
    B = scan.nextInt();
    scan.nextLine();
    H = scan.nextInt();
    scan.close();

    if(B<=0 || H<=0)
    {
        flag=false;
        throw new Exception("demo");
    }

} catch(Exception e)
{
    System.out.println("java.lang.Exception: Breadth and height must be positive");
}
}
public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}

	}//end of main

}//end of class
