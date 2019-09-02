/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef ITU_T_H
#define ITU_T_H
//End-of-line (EOL)
#define EOL 000000000001



class ITU_T
{
public:
    struct ITU{
        int horizental = 200;
        int vertical = 200;
        float pels = 25.4;//mm
    };
    ITU_T();
private:
    void __Comp_ITU();
};

#endif // ITU_T_H
