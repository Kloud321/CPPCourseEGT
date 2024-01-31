//
// Created by damya on 29.1.2024 г..
//

#ifndef INHERITANCEABSTRACTION_SHAPE_H
#define INHERITANCEABSTRACTION_SHAPE_H


class shape {
public:
    shape(int size);

    int getSize() const;
    void setSize(int size);

    virtual void draw() =0;

private:
    int size;
};


#endif //INHERITANCEABSTRACTION_SHAPE_H
