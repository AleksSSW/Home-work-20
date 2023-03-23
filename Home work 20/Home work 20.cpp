// Home work 20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void show_arr(int arr[], int size) {
    std::cout << '[';
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " , ";
    std::cout << "\b\b]\n";
}

int search_index(int array[], int size, int item, int begin) {
    for (int i = begin; i < size; i++) {
        if (array[i] == item)
            return i;
    }
    return -1;
}
int search_last_index(int array[], int size, int item, int begin) {
    for (int i = size - 1; i >= begin; i--) {
        if (array[i] == item)
            return i;
    }
    return -1;
}
int arr_min(int array[], int size) {
    int mn = array[0];
    for (int i = 1; i < size; i++)
        if (array[i] < mn)
            mn = array[i];
    return mn;
}
int arr_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
double mean_value(int array[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum / size;
}
void range(int array[], int size, int left, int right) {
    for (int i = 0; i < size; i++)
        if (array[i] >= left && array[i] <= right)
            std::cout << array[i] << ' ';
    std::cout << '\n';
}
void range2(int array[], int size, int left, int right, int step) {
    if (step > 0) {
        for (int i = left; i <= right; i += step)
            std::cout << array[i] << ' ';
    }
    else if (step < 0) {
        for (int i = right; i >= left; i += step)
            std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}
int counter(int array[], int size, int item) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (array[i] == item)
            count++;
    return count;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 100;
    int array[size]{};

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 201 - 100;
    }
    show_arr(array, size);
    std::cout << search_index(array, size, 20, 5) << ' ' << '\n';
    std::cout <<search_last_index(array, size, 11, 25) << ' ' << '\n';
    
    
    
    
    
    
    return 0;
}


