//Joshua Santy
//CompSci 1575
//Assignment 1
//2.11.2023


#include <iostream>
using namespace std;

class Pond
{
    public:
    //Member variables:
    int m_num_rows, m_num_columns;
    int** m_num_fish;
    
    //Default Constructor
    Pond()
    {
        m_num_rows = 0;
        m_num_columns = 0;
        
    }

    //set1 function sets the m values to the inputted values. 
    void set1(int x, int y)
    {
        m_num_rows = x;
        m_num_columns = y;
        return;
    }

    //create function creates the pond given the m values
    void create()
    {
        m_num_fish = new int*[m_num_rows];
        for(int j = 0; j < m_num_rows; j++)
        {
            m_num_fish[j] = new int[m_num_columns];
        }
        return;
    }
    //Destructor 
    ~Pond()
    {
        for(int r = 0; r < m_num_rows; r++) {
            delete [] m_num_fish[r];
        }
        delete [] m_num_fish;
    }

    //Size Function (for debugging)
    int size() const
    {
        return m_num_rows * m_num_columns;
    }

    //Get function (for getting num of fish, then summing; this will be used in a for loop)
    const int& get(int p, int q) const
    {
        return m_num_fish[p][q];
    }

    //Set function, used to change fish values to 0 once dead
    void set(int m, int n)
    {
        m_num_fish[m][n] = 0;
        return;
    }

    //input function, to get num_fish from the user
    void input(int row, int column)
    {
        int num_fish;
        for(int c = 0; c < row; c++) // inputting values by each row 
        {
            for(int d = 0; d < column; d++)
            {
                cout << "num of fish:" << endl;
                cin >> num_fish;
                m_num_fish[c][d] = num_fish;
        }
    }
    
}
};

//void bomb();

int main()
{
    int num_test_cases, num_rows, num_columns, num_fish;
    int b1row, b1column, b2row, b2column, b3row, b3column;

//Where to initalize a Pond?
    cout << "# of cases:" << endl;
    cin >> num_test_cases;
    for(int z = 0; z < num_test_cases; z++)
    {
        Pond pond;
        
        cout << "num of rows:" << endl;       
        cin >> num_rows;
        cout << "num of columns:" << endl;
        cin >> num_columns;
        pond.set1(num_rows, num_columns);
        pond.create();
        pond.input(num_rows, num_columns);
       





    }
    return 0;
}


