// Copyright 2020 Brazhnikov Eugene

#ifndef MODULES_CONVECTOR_LENGTH_INCLUDE_CONVERTER_H_
#define MODULES_CONVECTOR_LENGTH_INCLUDE_CONVERTER_H_

class MoneyConverter {
public:
    double rubdollar(double& curr, int  WhichOne)
    {
        if (curr >= 0 && WhichOne == 0) // RUB to EUR
        {
            return curr / 77.73;
        }
        else if (curr >= 0 && WhichOne == 1) //EUR to RUB
        {
            return curr * 77.73;
        }
        else
            return -1;
    }

    double rubeur(double& curr, int WhichOne)
    {
        if (curr >= 0 && WhichOne == 0)
        {
            return curr / 85.73;
        }
        else if (curr >= 0 && WhichOne == 1)
        {
            return curr * 85.73;
        }
        else
            return -1;
    }

    double rubJPY(double& curr, int WhichOne)
    {
        if (curr >= 0 && WhichOne == 0)
        {
            return curr / 71.40;
        }
        else if (curr >= 0 && WhichOne == 1)
        {
            return curr * 71.40;
        }
        else
            return -1;
    }

    double rubSEK(double& curr, int WhichOne)
    {
        if (curr >= 0 && WhichOne == 0)
        {
            return curr / 78;
        }
        else if (curr >= 0 && WhichOne == 1)
        {
            return curr * 78;
        }
        else
            return -1;
    }

    double rubUAH(double& curr, int WhichOne)
    {
        if (curr >= 0 && WhichOne == 0)
        {
            return curr / 2.79;
        }
        else if (curr >= 0 && WhichOne == 1)
        {
            return curr * 2.79;
        }
        else
            return -1;
        
    }

};

#endif
