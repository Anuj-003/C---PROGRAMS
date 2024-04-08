// This C++ program declares a 1-D array of type 'unsigned byte' having
// size 256*256. It then puts value from 0 through 255 in each row.

#include<iostream>

int main()

{
    int width,height;
    int offset;
    int value;
    width = height = 256;
    value = offset = 0;
    unsigned array_1d[height*width];

    for(int j=0;j<height;j++)
    {
        offset = width*j;
        for(int i=0;i<width;i++)
        {
            array_1d[offset+i] = value++;
        }
        value = 0;
    }
    return 0;
}
