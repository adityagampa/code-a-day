import java.util.*;
import java.io.*;
public class dec162
{	public static void main(String args[])
	{
		
		int i,j,k=2;
		int []a={1,2,3,4,5,6};
		while(k>0)
		{
			int temp=a[0];
			for(j=1;j<6;j++)
			{
				a[j-1]=a[j];
			}
			a[j-1]=temp;
			k--;
		}
		for(i=0;i<6;i++)
		{
			System.out.print(a[i] + " ");
		}
}
}
