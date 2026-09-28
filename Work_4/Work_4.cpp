#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Task 1

    double x, y;
    double x0, xf, dx;
    int n;
    cout << "\tTask 1 \n" << endl;
    cout << "Enter initial x : ";
    cin >> x0;
    cout << "Enter final x : ";
    cin >> xf;
    cout << "Enter step : ";
    cin >> dx;
    cout << "Enter number of values : ";
    cin >> n;
    cout << endl;
    cout << "x\t\t y" << endl;

    for (int i = 0; i < n; i++)
    {
        x = x0 + i * dx;

        if (x > xf)
            break;

        y = tan(0.5 * x) / (x * x * x + 7.5);
        cout << "____________________________\n" << endl;
        cout << x << "\t\t" << y << endl;
    }



    //Task 2

    double v0, vk, dv;
    double v, result;

    cout << "\n\n\tTask 2 \n" << endl;
    cout << "Enter initial value : ";
    cin >> v0;
    cout << "Enter final value : ";
    cin >> vk;
    cout << "Enter step : ";
    cin >> dv;

    cout << endl;
    cout << "v\t\tresult" << endl;

    v = v0;

    while (v < vk)
    {
        if (v < 1)
        {
            result = pow(1.26, v) + v;
        }
        else
        {
            result = atan(v + 0.4);
        }

        cout << "____________________________\n" << endl;
        cout << v << "\t\t" << result << endl;

        v = v + dv;
    }



    //Task 3

    double xStart, xEnd, xStep;
    double yStart, yEnd, yStep;
    double currentX, currentY, res;

    cout << "\n\n\tTask 3 \n" << endl;
    cout << "Enter initial value of x : ";
    cin >> xStart;
    cout << "Enter final value of x : ";
    cin >> xEnd;
    cout << "Enter step of x: ";
    cin >> xStep;
    cout << "Enter initial value of y: ";
    cin >> yStart;
    cout << "Enter final value of y: ";
    cin >> yEnd;
    cout << "Enter step of y: ";
    cin >> yStep;
    cout << endl;
    cout << "x\t\ty\t\tz" << endl;

    currentX = xStart;

    while (currentX <= xEnd)
    {
        currentY = yStart;

        while (currentY <= yEnd)
        {
            res = cbrt(currentX * currentX + 3 * currentY);

            cout << "_______________________________________\n" << endl;
            cout << currentX << "\t\t"
                << currentY << "\t\t"
                << res << endl;

            currentY = currentY + yStep;
        }

        currentX = currentX + xStep;
    }
}