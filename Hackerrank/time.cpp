#include <iostream>
using namespace std;

int print(int hr, int min)
{
    cout << hr << " : " << min;
}

int ti(int hr, int min)
{
    hr = 23 - hr;
    min = 60 - min;

    print(hr, min);
}

int main()
{
    int starHr, starMin;
    int endhr, endMin;

    cin >> starHr >> starMin;
    cin >> endhr >> endMin;

    int Hr, Min;

    if (starHr > endhr)
    {
        Hr = starHr - endhr;
        Min = starMin - endMin;

        ti(Hr, Min);
    }

    else if (starHr > endhr && starMin > endMin)
    {
        endhr -= 1;
        endMin += 60;

        Hr = starHr - endhr;
        Min = starMin - endMin;

        ti(Hr, Min);
    }

    else if (starHr < endhr && starMin > endMin)
    {
        endhr -= 1;
        endMin += 60;

        Hr = endhr - starHr;
        Min = starMin - endMin;

        print(Hr, Min);
    }

    else
    {
        Hr = endhr - starHr;
        Min = starMin - endMin;

        print(Hr, Min);
    }

    return 0;
}