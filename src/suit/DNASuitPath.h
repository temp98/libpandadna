#ifndef _H_DNA_SUITPATH_
#define _H_DNA_SUITPATH_

#include "DNASuitPoint.h"

#include <typedReferenceCount.h>
#include <pvector.h>

typedef pvector<PT(DNASuitPoint)> suit_point_vec_t;

class EXPCL_DNA DNASuitPath : public TypedReferenceCount
{
    PUBLISHED:
        DNASuitPath();
        ~DNASuitPath();

        void add_point(PT(DNASuitPoint) point);
        DNASuitPoint* get_point(size_t index);
        size_t get_num_points();
        point_index_t get_point_index(size_t index);
        void reverse_path();

    protected:
        suit_point_vec_t m_suit_points;

    TYPE_HANDLE(DNASuitPath, TypedReferenceCount);
};

#endif
