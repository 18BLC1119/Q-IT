class ArraySorter{
    public static void insertionSort(float[] a)
    {
        float[] temp = new float[a.length];
        temp[0]=a[0];
        for (int i = 1; i < a.length; i++) {
            float key = a[i];
            int j = i-1;
            while (j >= 0 && temp[j] > key) {
                temp[j + 1] = temp[j];
                j = j - 1;
            }
            temp[j + 1] = key;
        }
        for(int i=0;i<a.length;i++)
        {
            a[i]=temp[i];
        }
    }
    public static void printArray(float[] a)
    {
        for(int i=0;i<a.length;i++)
        {
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        float[] a={5,4,3,2,1};
        System.out.println("Before insertion sort is called, a is ");
        printArray(a);
        insertionSort(a);
        System.out.println("After insertion sort is called, a is ");
        printArray(a);
    }
}