#ifndef ORDER_H_HEADER_INCLUDED_A6F8D24A
#define ORDER_H_HEADER_INCLUDED_A6F8D24A

//##ModelId=590240760354
class Order
{
  public:
    //##ModelId=5902416D0242
    Boolean Create();

    //##ModelId=590241810146
    Boolean Set Info(Integer OrderNum , String Customer, Date OrderDate , Date FillDate );

    //##ModelId=590241AA0155
    String GetInfo();

  private:
    //##ModelId=59046F8E0175
    Integer OrderNumber;
    //##ModelId=59046F9F0030
    String CustromerName;
    //##ModelId=59046FB001A0
    Date OrderDate;
    //##ModelId=59046FC401B8
    Date OrderFillDate;
};



#endif /* ORDER_H_HEADER_INCLUDED_A6F8D24A */
