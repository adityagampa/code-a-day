import java.io.*;
import java.util.*;
public class dec16
{
	public static void main(String args[])
{
	Scanner sc= new Scanner(System.in);
	System.out.println("enter n");
	int n = sc.nextInt();
	int a[][]= new int [n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(i==j)
			{
				a[i][j]=0;
			}
			else if(i>j)
			{
				a[i][j]=-1;
			}
			else
			{
				a[i][j]=1;
			}
		}
	}

	for(i=0;i<n;i++){
	 for(j=0;j<n;j++)	
	   System.out.print(a[i][j] + "  ");
	 System.out.println();
	}
	

}
}

	

