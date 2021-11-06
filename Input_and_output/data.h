#ifndef data
#define data

#define Integer int    

union python
{
    char name;
    Integer i;
    float decimal;
};


union java  
{
    char name;
    Integer i;
    int decimal;
};

struct ruby
{
    union python datah;
    union java database;
}web;

#endif