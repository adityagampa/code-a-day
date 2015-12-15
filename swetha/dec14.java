class dec14{
   
 public static void main(String[] arg)
   
 {
        int[] a = {0,1,1,1,0,0,1,0};
        

		int count=0;		
	for(int i = 0 ; i <8; i++)
		
	{
	if(a[i]==0)
		{
			count++;
		}		
	}
		
		
	for(int i = 0 ; i <8; i++)
		
	{
			
		if(i >= ( 8 - count))
			
		{		
			a[i] = 1;
			
		}
			
		else
			
		{
				
			a[i] = 0;
			
		}
		
	}


	for(int i = 0 ; i < 8 ; i++)
			
	{
		    
		System.out.println(a[i]);
		
	}
    
}

}