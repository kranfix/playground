#ifndef MAF_H
#define MAF_H

template<type T>
class maf
{
public:
  maf(int len) : n(len) ;
  T mean();
private:
  int n; // length
  int p; // pivot
  T * V;
};

#endif // MAF_H
