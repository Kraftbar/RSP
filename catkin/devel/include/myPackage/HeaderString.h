// Generated by gencpp from file myPackage/HeaderString.msg
// DO NOT EDIT!


#ifndef MYPACKAGE_MESSAGE_HEADERSTRING_H
#define MYPACKAGE_MESSAGE_HEADERSTRING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace myPackage
{
template <class ContainerAllocator>
struct HeaderString_
{
  typedef HeaderString_<ContainerAllocator> Type;

  HeaderString_()
    : header()
    , data()  {
    }
  HeaderString_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::myPackage::HeaderString_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::myPackage::HeaderString_<ContainerAllocator> const> ConstPtr;

}; // struct HeaderString_

typedef ::myPackage::HeaderString_<std::allocator<void> > HeaderString;

typedef boost::shared_ptr< ::myPackage::HeaderString > HeaderStringPtr;
typedef boost::shared_ptr< ::myPackage::HeaderString const> HeaderStringConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::myPackage::HeaderString_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::myPackage::HeaderString_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::myPackage::HeaderString_<ContainerAllocator1> & lhs, const ::myPackage::HeaderString_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::myPackage::HeaderString_<ContainerAllocator1> & lhs, const ::myPackage::HeaderString_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace myPackage

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::myPackage::HeaderString_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::myPackage::HeaderString_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPackage::HeaderString_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPackage::HeaderString_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPackage::HeaderString_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPackage::HeaderString_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::myPackage::HeaderString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c99a9440709e4d4a9716d55b8270d5e7";
  }

  static const char* value(const ::myPackage::HeaderString_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc99a9440709e4d4aULL;
  static const uint64_t static_value2 = 0x9716d55b8270d5e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::myPackage::HeaderString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "myPackage/HeaderString";
  }

  static const char* value(const ::myPackage::HeaderString_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::myPackage::HeaderString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::myPackage::HeaderString_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::myPackage::HeaderString_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeaderString_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::myPackage::HeaderString_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::myPackage::HeaderString_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYPACKAGE_MESSAGE_HEADERSTRING_H
