#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
public:
    dynArr();
    dynArr(int rows, int cols);
    ~dynArr();
    void setValue(int value, int row, int col);
    int getValue(int row, int col);

private:
    int **data;
    int rows;
    int cols;
};
#endif
