void insertionSort1(int n, vector<int> arr) {
    for (int i = 1; i <n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        arr[j + 1] = temp;
    }
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
}
