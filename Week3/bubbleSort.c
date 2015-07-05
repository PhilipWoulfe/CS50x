void sort(int array[], int n)
{
    for(int k = 0; k < n - 1; k++)
    {
        int swaps = 0;

        // swap adjacent elements if out of order
        


        
            // iterate through array
            for (int i = 0; i < n - 1 - k; i++) // every time you pass through the array, the last digit is sorted, therefore you only need to sort up to array length - 1 - number of swaps
            {
                // check if array[n] and array[n + 1] arre in order
                if (array[i] > array[i + 1])
                {
                    int temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    swaps++;
                }
            }
        if(!swaps)
            break;
    }
}
