void quicksort(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = lomuto(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}