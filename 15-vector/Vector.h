template<typename T>
class Vector
{
    int cs;
    int ms;
    T *arr;

public:
    Vector()
    {
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void push_back(int d)
    {
        if (cs == ms)
        {
            T *oldArr = arr;
            arr = new T[2 * ms];
            ms = 2 * ms;
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    T front()
    {
        return arr[0];
    }
    T back()
    {
        return arr[cs - 1];
    }
    int capacity()
    {
        return ms;
    }

    bool empty()
    {
        return cs == 0;
    }
    T at(int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int operator[](int i)
    {
        return arr[i];
    }
};