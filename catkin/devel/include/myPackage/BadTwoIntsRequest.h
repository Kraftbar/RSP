// Generated by gencpp from file myPackage/BadTwoIntsRequest.msg
// DO NOT EDIT!


#ifndef MYPACKAGE_MESSAGE_BADTWOINTSREQUEST_H
#define MYPACKAGE_MESSAGE_BADTWOINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace myPackage
{
template <class ContainerAllocator>
struct BadTwoIntsRequest_
{
  typedef BadTwoIntsRequest_<ContainerAllocator> Type;

  BadTwoIntsRequest_()
    : a(0)
    , b(0)  {
    }
  BadTwoIntsRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int32_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BadTwoIntsRequest_

typedef ::myPackage::BadTwoIntsRequest_<std::allocator<void> > BadTwoIntsRequest;

typedef boost::shared_ptr< ::myPackage::BadTwoIntsRequest > BadTwoIntsRequestPtr;
typedef boost::shared_ptr< ::myPackage::BadTwoIntsRequest const> BadTwoIntsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::myPackage::BadTwoIntsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::myPackage::BadTwoIntsRequest_<ContainerAllocator1> & lhs, const ::myPackage::BadTwoIntsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::myPackage::BadTwoIntsRequest_<ContainerAllocator1> & lhs, const ::myPackage::BadTwoIntsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace myPackage

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29bb5c7dea8bf822f53e94b0ee5a3a56";
  }

  static const char* value(const ::myPackage::BadTwoIntsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29bb5c7dea8bf822ULL;
  static const uint64_t static_value2 = 0xf53e94b0ee5a3a56ULL;
};

template<class ContainerAllocator>
struct DataType< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "myPackage/BadTwoIntsRequest";
  }

  static const char* value(const ::myPackage::BadTwoIntsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int64 a\n"
"int32 b\n"
;
  }

  static const char* value(const ::myPackage::BadTwoIntsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BadTwoIntsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::myPackage::BadTwoIntsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::myPackage::BadTwoIntsRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYPACKAGE_MESSAGE_BADTWOINTSREQUEST_H
