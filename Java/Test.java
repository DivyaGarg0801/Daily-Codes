/*/
class Test
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int sum1=0,sum2=0;
		System.out.println("Enter first integer :");
		int f=sc.nextInt();
		System.out.println("Enter second integer :");
		int s=sc.nextInt();
		for(int i=1;i<=f/2;i++)
		{
			if (f%i==0)
			{
				sum1=sum1+i;
			}
		}
		for(int i=1;i<=s/2;i++)
		{
			if (s%i==0)
			{
				sum2=sum2+i;
			}
		}
		if (sum1==f && sum2==s)
		{
			System.out.println("Amicable Numbers");
		}
		else
		{
			System.out.println("Non Amicable Numbers");
		}
	}
}

*/
/*
 * public class FindDuplicateElements {
    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 2, 3, 4};

        System.out.println("Duplicate elements and their indices:");
        
        for (int i = 0; i < arr.length; i++) {
            boolean isDuplicate = false;

            // Check if this element has already been printed before
            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                boolean foundDuplicate = false;
                System.out.print("Element: " + arr[i] + " found at indices " + i);
                
                for (int j = i + 1; j < arr.length; j++) {
                    if (arr[i] == arr[j]) {
                        System.out.print(", " + j);
                        foundDuplicate = true;
                    }
                }

                if (foundDuplicate) {
                    System.out.println();
                }
            }
        }
    }
}

 */