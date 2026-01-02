#include <stdio.h>
#include <limits.h>
#include <float.h>


// Check the Value of All DataTypes range 
void main()
{
    printf("\nShort int %u Bytes %d to %d", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n unsigned short int %u Bytes %d to %d", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("\n int %u Bytes %d to %d", sizeof(int), INT_MIN, INT_MAX);
    printf("\n unsigned int %u Bytes %d to %d", sizeof(unsigned int), 0, UINT_MAX);
    printf("\n long int %u Bytes %d to %d", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("\n unsigned long int %u Bytes %d to %d", sizeof(unsigned long int), 0, ULONG_MAX);
    printf("\n long long int %u Bytes %d to %d", sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("\n unsigned long long int %u Bytes %d to %d", sizeof(unsigned long long int), 0, ULLONG_MAX);
    printf("\n float %u Bytes %f to %f", sizeof(float), FLT_MIN, FLT_MAX);
    printf("\n double %u Bytes %f to %f", sizeof(double), DBL_MIN, DBL_MAX);
    printf("\n long double %u Bytes %f to %f", sizeof(long double), LDBL_MIN, LDBL_MAX);
}