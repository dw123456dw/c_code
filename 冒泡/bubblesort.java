public class bubblesort
{
	public static void main(String args[])
	{
		int []arr={10,9,8,7,6,5,4,3,2,1,0};
		
		for(int i=1;i<arr.length;i++)
		{
			for(int j=1;j<arr.length+1-i;j++)
			{
				if(arr[j-1]>arr[j])
				{
					int temp=0;
					temp=arr[j-1];
					arr[j-1]=arr[j];
					arr[j]=temp;
				}

			}
			
		}
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
	}
}