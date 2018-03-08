#ifndef ABSTABL_H
#define	ABSTABL_H

#include "RowAray.h"

class AbsTabl {
    protected:
        int szRow;
        int szCol;
        RowAray **columns;
    public:
        /** The = 0 is not related to const.
        It's used in conjunction with virtual to indicate that the function
        is pure virtual. That means it must be overridden by a sub-class.
        Classes containing pure virtual functions are sometimes
        described as abstract because they cannot be directly instantiated */
        virtual int getSzRow() const = 0;
        virtual int getSzCol() const = 0;
        virtual int getData(int,int) const = 0;
};

#endif
