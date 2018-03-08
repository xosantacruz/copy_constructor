#ifndef PLUSTAB_H
#define	PLUSTAB_H

#include "Table.h"

class PlusTab : public Table {
    public:
        // Unsigned means that the integer can never be negative
        // Overloaded constructor.
        PlusTab(unsigned int r,unsigned int c) : Table(r, c) { };

        // Overloaded + operator. You have to implement this.
        PlusTab operator+(const PlusTab &rhs) {
            PlusTab lhs(*this);

            for (int i = 0; i < lhs.getSzRow(); ++i) {
                for (int j = 0; j < lhs.getSzCol(); ++j) {
                    int result = lhs.getData(i, j) + rhs.getData(i, j);

                    lhs.setData(i, j, result);
                }
            }

            return lhs;
        }
};

#endif
