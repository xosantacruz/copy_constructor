#ifndef ABSROW_H
#define	ABSROW_H

class AbsRow {
    protected:
        int size;
        int *rowData;
    public:
        virtual int getSize() const = 0;
        virtual int getData(int) const = 0;
};

#endif
