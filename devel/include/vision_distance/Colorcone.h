// Generated by gencpp from file vision_distance/Colorcone.msg
// DO NOT EDIT!


#ifndef VISION_DISTANCE_MESSAGE_COLORCONE_H
#define VISION_DISTANCE_MESSAGE_COLORCONE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vision_distance
{
template <class ContainerAllocator>
struct Colorcone_
{
  typedef Colorcone_<ContainerAllocator> Type;

  Colorcone_()
    : flag(0)
    , x(0.0)
    , y(0.0)  {
    }
  Colorcone_(const ContainerAllocator& _alloc)
    : flag(0)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _flag_type;
  _flag_type flag;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::vision_distance::Colorcone_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_distance::Colorcone_<ContainerAllocator> const> ConstPtr;

}; // struct Colorcone_

typedef ::vision_distance::Colorcone_<std::allocator<void> > Colorcone;

typedef boost::shared_ptr< ::vision_distance::Colorcone > ColorconePtr;
typedef boost::shared_ptr< ::vision_distance::Colorcone const> ColorconeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision_distance::Colorcone_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision_distance::Colorcone_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vision_distance::Colorcone_<ContainerAllocator1> & lhs, const ::vision_distance::Colorcone_<ContainerAllocator2> & rhs)
{
  return lhs.flag == rhs.flag &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vision_distance::Colorcone_<ContainerAllocator1> & lhs, const ::vision_distance::Colorcone_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vision_distance

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vision_distance::Colorcone_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_distance::Colorcone_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_distance::Colorcone_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_distance::Colorcone_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_distance::Colorcone_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_distance::Colorcone_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision_distance::Colorcone_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d2c9ea7b706b77c8e5621805ab397745";
  }

  static const char* value(const ::vision_distance::Colorcone_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd2c9ea7b706b77c8ULL;
  static const uint64_t static_value2 = 0xe5621805ab397745ULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_distance::Colorcone_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_distance/Colorcone";
  }

  static const char* value(const ::vision_distance::Colorcone_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision_distance::Colorcone_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 flag\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::vision_distance::Colorcone_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision_distance::Colorcone_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Colorcone_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_distance::Colorcone_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vision_distance::Colorcone_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flag);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISION_DISTANCE_MESSAGE_COLORCONE_H
