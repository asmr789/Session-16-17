#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <windows.h>

#define MAX_MENU_SIZE 100

struct Dish {
    int id;
    wchar_t name[50];
    float price;
};

struct Dish menu[MAX_MENU_SIZE];

void printMenu(struct Dish menu[], int size) {
    wprintf(L"Danh sách món ăn:\n");
    for (int i = 0; i < size; i++) {
        wprintf(L"%d. ID: %d, Tên: %ls, Giá: %.2f\n", i + 1, menu[i].id, menu[i].name, menu[i].price);
    }
}

void addDish(struct Dish menu[], int *size, int position, struct Dish newDish) {
    if (*size >= MAX_MENU_SIZE || position < 0 || position > *size) {
        wprintf(L"Không thể thêm món ăn tại vị trí này.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        menu[i] = menu[i - 1];
    }
    menu[position] = newDish;
    (*size)++;
    wprintf(L"Đã thêm món ăn thành công.\n");
}

void editDish(struct Dish menu[], int position, struct Dish newDish) {
    if (position < 0 || position >= MAX_MENU_SIZE) {
        wprintf(L"Vị trí không hợp lệ.\n");
        return;
    }
    menu[position] = newDish;
    wprintf(L"Đã sửa món ăn thành công.\n");
}

void deleteDish(struct Dish menu[], int *size, int position) {
    if (position < 0 || position >= *size) {
        wprintf(L"Vị trí không hợp lệ.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        menu[i] = menu[i + 1];
    }
    (*size)--;
    wprintf(L"Đã xóa món ăn thành công.\n");
}

void sortMenu(struct Dish menu[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((ascending && menu[i].price > menu[j].price) || (!ascending && menu[i].price < menu[j].price)) {
                struct Dish temp = menu[i];
                menu[i] = menu[j];
                menu[j] = temp;
            }
        }
    }
    wprintf(L"Đã sắp xếp menu thành công.\n");
}

int linearSearch(struct Dish menu[], int size, wchar_t name[]) {
    for (int i = 0; i < size; i++) {
        if (wcscmp(menu[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "Vietnamese_Vietnam.1258");

    int choice, size = 0;
    struct Dish newDish;
    int position;
    wchar_t name[50];

    do {
        wprintf(L"\nMENU\n");
        wprintf(L"1. In ra giá trị các phần tử có trong menu món ăn\n");
        wprintf(L"2. Thêm một phần tử vào vị trí chỉ định\n");
        wprintf(L"3. Sửa một phần tử ở vị trí chỉ định\n");
        wprintf(L"4. Xóa một phần tử ở vị trí chỉ định\n");
        wprintf(L"5. Sắp xếp các phần tử\n");
        wprintf(L"6. Thoát\n");
        wprintf(L"Lựa chọn của bạn: ");
        wscanf(L"%d", &choice);

        switch (choice) {
            case 1:
                printMenu(menu, size);
                break;
            case 2:
                wprintf(L"Nhập vị trí: ");
                wscanf(L"%d", &position);
                wprintf(L"Nhập id, tên, giá: ");
                wscanf(L"%d %ls %f", &newDish.id, newDish.name, &newDish.price);
                addDish(menu, &size, position, newDish);
                break;
            case 6:
                wprintf(L"Thoát chương trình.\n");
                break;
            default:
                wprintf(L"Lựa chọn không hợp lệ.\n");
        }
    } while (choice != 6);

    return 0;
}
