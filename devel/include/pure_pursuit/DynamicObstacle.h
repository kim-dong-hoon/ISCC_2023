// Generated by gencpp from file pure_pursuit/DynamicObstacle.msg
// DO NOT EDIT!


#ifndef PURE_PURSUIT_MESSAGE_DYNAMICOBSTACLE_H
#define PURE_PURSUIT_MESSAGE_DYNAMICOBSTACLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pure_pursuit
{
template <class ContainerAllocator>
struct DynamicObstacle_
{
  typedef DynamicObstacle_<ContainerAllocator> Type;

  DynamicObstacle_()
    : is_dynamic_obs_detected_short(false)
    , is_dynamic_obs_detected_long(false)  {
    }
  DynamicObstacle_(const ContainerAllocator& _alloc)
    : is_dynamic_obs_detected_short(false)
    , is_dynamic_obs_detected_long(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_dynamic_obs_detected_short_type;
  _is_dynamic_obs_detected_short_type is_dynamic_obs_detected_short;

   typedef uint8_t _is_dynamic_obs_detected_long_type;
  _is_dynamic_obs_detected_long_type is_dynamic_obs_detected_long;





  typedef boost::shared_ptr< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> const> ConstPtr;

}; // struct DynamicObstacle_

typedef ::pure_pursuit::DynamicObstacle_<std::allocator<void> > DynamicObstacle;

typedef boost::shared_ptr< ::pure_pursuit::DynamicObstacle > DynamicObstaclePtr;
typedef boost::shared_ptr< ::pure_pursuit::DynamicObstacle const> DynamicObstacleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pure_pursuit::DynamicObstacle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pure_pursuit::DynamicObstacle_<ContainerAllocator1> & lhs, const ::pure_pursuit::DynamicObstacle_<ContainerAllocator2> & rhs)
{
  return lhs.is_dynamic_obs_detected_short == rhs.is_dynamic_obs_detected_short &&
    lhs.is_dynamic_obs_detected_long == rhs.is_dynamic_obs_detected_long;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pure_pursuit::DynamicObstacle_<ContainerAllocator1> & lhs, const ::pure_pursuit::DynamicObstacle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pure_pursuit

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c882ecd689b24462667336642ad7283e";
  }

  static const char* value(const ::pure_pursuit::DynamicObstacle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc882ecd689b24462ULL;
  static const uint64_t static_value2 = 0x667336642ad7283eULL;
};

template<class ContainerAllocator>
struct DataType< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pure_pursuit/DynamicObstacle";
  }

  static const char* value(const ::pure_pursuit::DynamicObstacle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool is_dynamic_obs_detected_short\n"
"bool is_dynamic_obs_detected_long\n"
;
  }

  static const char* value(const ::pure_pursuit::DynamicObstacle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_dynamic_obs_detected_short);
      stream.next(m.is_dynamic_obs_detected_long);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DynamicObstacle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pure_pursuit::DynamicObstacle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pure_pursuit::DynamicObstacle_<ContainerAllocator>& v)
  {
    s << indent << "is_dynamic_obs_detected_short: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_dynamic_obs_detected_short);
    s << indent << "is_dynamic_obs_detected_long: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_dynamic_obs_detected_long);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PURE_PURSUIT_MESSAGE_DYNAMICOBSTACLE_H
