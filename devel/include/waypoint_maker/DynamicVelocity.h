// Generated by gencpp from file waypoint_maker/DynamicVelocity.msg
// DO NOT EDIT!


#ifndef WAYPOINT_MAKER_MESSAGE_DYNAMICVELOCITY_H
#define WAYPOINT_MAKER_MESSAGE_DYNAMICVELOCITY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace waypoint_maker
{
template <class ContainerAllocator>
struct DynamicVelocity_
{
  typedef DynamicVelocity_<ContainerAllocator> Type;

  DynamicVelocity_()
    : throttle(0.0)
    , steering(0.0)  {
    }
  DynamicVelocity_(const ContainerAllocator& _alloc)
    : throttle(0.0)
    , steering(0.0)  {
  (void)_alloc;
    }



   typedef double _throttle_type;
  _throttle_type throttle;

   typedef double _steering_type;
  _steering_type steering;





  typedef boost::shared_ptr< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> const> ConstPtr;

}; // struct DynamicVelocity_

typedef ::waypoint_maker::DynamicVelocity_<std::allocator<void> > DynamicVelocity;

typedef boost::shared_ptr< ::waypoint_maker::DynamicVelocity > DynamicVelocityPtr;
typedef boost::shared_ptr< ::waypoint_maker::DynamicVelocity const> DynamicVelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::waypoint_maker::DynamicVelocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::waypoint_maker::DynamicVelocity_<ContainerAllocator1> & lhs, const ::waypoint_maker::DynamicVelocity_<ContainerAllocator2> & rhs)
{
  return lhs.throttle == rhs.throttle &&
    lhs.steering == rhs.steering;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::waypoint_maker::DynamicVelocity_<ContainerAllocator1> & lhs, const ::waypoint_maker::DynamicVelocity_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace waypoint_maker

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39f463d271c2ca10c14182802c72c029";
  }

  static const char* value(const ::waypoint_maker::DynamicVelocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39f463d271c2ca10ULL;
  static const uint64_t static_value2 = 0xc14182802c72c029ULL;
};

template<class ContainerAllocator>
struct DataType< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "waypoint_maker/DynamicVelocity";
  }

  static const char* value(const ::waypoint_maker::DynamicVelocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 throttle\n"
"float64 steering\n"
;
  }

  static const char* value(const ::waypoint_maker::DynamicVelocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.throttle);
      stream.next(m.steering);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DynamicVelocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::waypoint_maker::DynamicVelocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::waypoint_maker::DynamicVelocity_<ContainerAllocator>& v)
  {
    s << indent << "throttle: ";
    Printer<double>::stream(s, indent + "  ", v.throttle);
    s << indent << "steering: ";
    Printer<double>::stream(s, indent + "  ", v.steering);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAYPOINT_MAKER_MESSAGE_DYNAMICVELOCITY_H
