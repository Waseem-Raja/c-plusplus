#include <iostream>
using namespace std;
int arr2[3][5];
void printer(int arr[3][5])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " \n"[j == 5 - 1];
        }
    }
}
void initializee(int arr[3][5])
{
    int l = 0, m = 0;
    int c = 1, d = 0, e = 0;
    int step = 5, start = 10;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j == 0)
                arr[i][j] = start;
            else if (i == 0 && j > 0)
            {
                arr[i][j] = arr[i][j - 1] + step;
            }
            else if (i == 1)
            {

                arr[i][j] = arr[l][m] * arr[l][m];
                m++;
            }
            else if (i == 2)
            {

                arr[i][j] = arr[c][d] - arr[e][d];
                d++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            {
                arr2[i][j] = arr[i][j];
            }
        }
    }
}
void statistics(int arr[3][5], int min, int max, int mean, int sum)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            sum = sum + arr[i][j];

            if (arr[0][0] > arr[i][j])
                arr[0][0] = arr[i][j];
        }
    }
    min = arr[0][0];
    mean = sum / (3 * 5);
    cout << "sum :" << sum << endl;
    cout << "mean :" << mean << endl;
    cout << "min :" << min << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (arr[0][0] < arr[i][j])
                arr[0][0] = arr[i][j];
        }
    }

    cout << "max :" << arr[0][0] << endl;
}
void shift(int arr[3][5])
{
    int u = 3, v = 3, w = 3;
    int temp = arr[0][4];
    int temp2 = arr[1][4];
    int temp3 = arr[2][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0)
            {

                if (v >= 0)
                {
                    arr[i][v + 1] = arr[i][v];
                    v--;
                }
                else
                    arr[0][0] = temp;
            }
            else if (i == 1)
            {

                if (u >= 0)
                {
                    arr[i][u + 1] = arr[i][u];
                    u--;
                }
                else
                    arr[1][0] = temp2;
            }
            else if (i == 2)
            {

                if (w >= 0)
                {
                    arr[i][w + 1] = arr[i][w];
                    w--;
                }
                else
                    arr[2][0] = temp3;
            }
        }
    }
}

int main()
{
    int min = 0, max = 0, mean = 0, sum = 0;
    int arr[3][5];
    initializee(arr);
    printer(arr);
    statistics(arr, min, max, mean, sum);
    shift(arr2);
    printer(arr2);
}