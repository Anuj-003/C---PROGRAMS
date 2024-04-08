// C ++ program to make simple ppm image

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    ofstream image;
    image.open("photo.ppm");

    srand(time(0));

    if(image.is_open())
    {
        // Place header info
        image<<"P3"<<endl;
        image<<"250 250"<<endl;
        image<<"255"<<endl;

        for(int y=0;y<250;y++)
        {
            for(int x=0;x<250;x++)
            {
                // image<<x<<" "<<x<<" "<<x<<endl;
                //image<<(x*y)%255<<" "<<(x*y)%255<<" "<<(x*y)%255<<endl;    // Can implement different logic to produce different output
                image<<rand()%255<<" "<<rand()%255<<" "<<rand()%255<<endl;
            }
        }
    }
    image.close();
    return 0;
}
