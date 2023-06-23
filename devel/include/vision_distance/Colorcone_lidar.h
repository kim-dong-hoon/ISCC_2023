// Generated by gencpp from file vision_distance/Colorcone_lidar.msg
// DO NOT EDIT!


#ifndef VISION_DISTANCE_MESSAGE_COLORCONE_LIDAR_H
#define VISION_DISTANCE_MESSAGE_COLORCONE_LIDAR_H


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
struct Colorcone_lidar_
{
  typedef Colorcone_lidar_<ContainerAllocator> Type;

  Colorcone_lidar_()
    : flag(0)
    , dist_x(0.0)
    , dist_y(0.0)  {
    }
  Colorcone_lidar_(const ContainerAllocator& _alloc)
    : flag(0)
    , dist_x(0.0)
    , dist_y(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _flag_type;
  _flag_type flag;

   typedef double _dist_x_type;
  _dist_x_type dist_x;

   typedef double _dist_y_type;
  _dist_y_type dist_y;





  typedef boost::shared_ptr< ::vision_distance::Colorcone_lidar_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_distance::Colorcone_lidar_<ContainerAllocator> const> ConstPtr;

}; // struct Colorcone_lidar_

typedef ::vision_distance::Colorcone_lidar_<std::allocator<void> > Colorcone_lidar;

typedef boost::shared_ptr< ::vision_distance::Colorcone_lidar > Colorcone_lidarPtr;
typedef boost::shared_ptr< ::vision_distance::Colorcone_lidar const> Colorcone_lidarConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision_distance::Colorcone_lidar_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vision_distance::Colorcone_lidar_<ContainerAllocator1> & lhs, const ::vision_distance::Colorcone_lidar_<ContainerAllocator2> & rhs)
{
  return lhs.flag == rhs.flag &&
    lhs.dist_x == rhs.dist_x &&
    lhs.dist_y == rhs.dist_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vision_distance::Colorcone_lidar_<ContainerAllocator1> & lhs, const ::vision_distance::Colorcone_lidar_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vision_distance

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_distance::Colorcone_lidar_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_distance::Colorcone_lidar_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_distance::Colorcone_lidar_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f94403809a4a82603b54e67d56403620";
  }

  static const char* value(const ::vision_distance::Colorcone_lidar_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf94403809a4a8260ULL;
  static const uint64_t static_value2 = 0x3b54e67d56403620ULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_distance/Colorcone_lidar";
  }

  static const char* value(const ::vision_distance::Colorcone_lidar_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 flag\n"
"float64 dist_x\n"
"float64 dist_y\n"
;
  }

  static const char* value(const ::vision_distance::Colorcone_lidar_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
      stream.next(m.dist_x);
      stream.next(m.dist_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Colorcone_lidar_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_distance::Colorcone_lidar_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vision_distance::Colorcone_lidar_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flag);
    s << indent << "dist_x: ";
    Printer<double>::stream(s, indent + "  ", v.dist_x);
    s << indent << "dist_y: ";
    Printer<double>::stream(s, indent + "  ", v.dist_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISION_DISTANCE_MESSAGE_COLORCONE_LIDAR_H
