#ifndef ORDERITEM_H_HEADER_INCLUDED_A6F8E39A
#define ORDERITEM_H_HEADER_INCLUDED_A6F8E39A

//##ModelId=59046F4602C1
class OrderItem
{
  public:
    //##ModelId=5904702800C9
    Boolean Create();

    //##ModelId=5904703003E3
    Boolean SetInfo(Integer ID = 0);

    //##ModelId=590470350058
    String GetInfo();

  private:
    //##ModelId=59046FFA004F
    Integer ItemID;
    //##ModelId=590470090030
    String ItemDescription;
};



#endif /* ORDERITEM_H_HEADER_INCLUDED_A6F8E39A */
