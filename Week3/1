void sort(int array[], int size)
{
    // iterate over array
    for(int i = 0; i < size - 1; i++)
    {
        // smallest element and its position in sorted array
        int smallest = array[i];
        int position = i;

        // look through unsorted part of array
        for (int k = i + 1; k < size; k++)
        {
            // find the next smallest element
            if (array[k] < smallest)
            {
                smallest = array[k];
                position = k;
            }
        }
        // swap
        int temp = array[i];
        array[i] = smallest;
        array[position] = temp;
    }
}
