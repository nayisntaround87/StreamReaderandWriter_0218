#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0,5; //melemparkan sebuah integer maka
        cout << "pernyataan tidak akan di eksekusi" << endl;
    }
    catch(int a)
    {
        // blok ini akan di eksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    catch (...)
    {
        /*jika selain integer maka block ini akan di eksekusi*/
        cout << "default pengecualian di eksekusi" << endl;
    }

    return 0;
    
}