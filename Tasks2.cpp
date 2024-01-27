// Tasks2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int FirstTask(int array[])
{
    int result = 0;
    for (int i=0;i<sizeof(array);i++)
        if (array[i] > 0)
            result++;
    return result;
}

void SecondTask(int array[3][3][3])
{
    int result[9];
    int counter = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += array[i][j][k];
            }
            result[counter] = sum;
            counter++;
        }
    }

    for (int i = 0; i < 9; i++)
        cout << result[i] << "-";
}

struct Address
{
    char street[20];
    char city[20];
    char zipCode[6];
};

Address setAddress()
{
    Address address;
    cout << "Введите улицу (<20 симв.)" << endl;
    cin >> address.street;
    cout << "Введите город (<20 симв.)" << endl;
    cin >> address.city;
    cout << "Введите ZIP код (<6 симв.)" << endl;
    cin >> address.zipCode;
    return address;
}

void showAddress(Address address)
{
    cout << "ZIP код: " << address.zipCode << "\nГород: " << address.city << "\nУлица: " << address.street;
}

void ThirdTask()
{
    Address address;

        address = setAddress();
        showAddress(address);
   
}

class Matrix
{
private:
    int data[3][3][3] = {};

public:
    void sumOfMatrix(Matrix arrayForSum)
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    data[i][j][k] += arrayForSum.data[i][j][k];
    }
    void setData(int array[3][3][3])
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    data[i][j][k] = array[i][j][k];
    }
    void printData()
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                    cout << data[i][j][k];
                cout << endl;
            }
    }
};

void FourthTask()
{
    int array1[3][3][3] = {{{1,1,1}, {1,1,1}, {1,1,1}},
                          {{1,1,1}, {1,1,1}, {1,1,1}},
                          {{1,1,1}, {1,1,1}, {1,1,1}}};

    int array2[3][3][3] = {{{1,2,3}, {3,2,1}, {2,1,3}},
                           {{-1,0,1}, {1,0,-1}, {0,0,1}},
                           {{2,5,1}, {-1,-1,-1}, {1,5,6}} };
    Matrix firstMatrix, secondMatrix;
   
    firstMatrix.setData(array1);
    secondMatrix.setData(array2);

    firstMatrix.sumOfMatrix(secondMatrix);
    firstMatrix.printData();
}

int main()
{
    setlocale(LC_ALL,"Russian");

    int firstArray1[] = { 1,2,3,-1,-2 ,0,8 };
    int firstArray2[] = { 1,2,3,-1,-2,-5 };

    int secondArray[3][3][3] = { {{1,2,3},{1,1,2},{1,2,4}},
                           {{1,-1,3},{1,-1,3},{1,2,3}},
                           {{1,2,-1},{1,2,3},{1,2,3}}};


    //cout << FirstTask(firstArray1)<<endl;
    cout << FirstTask(firstArray2);
    //SecondTask(secondArray);
    //ThirdTask();
    //FourthTask();
    return 0;
}