// Generated by gencpp from file track_race/Test.msg
// DO NOT EDIT!


#ifndef TRACK_RACE_MESSAGE_TEST_H
#define TRACK_RACE_MESSAGE_TEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace track_race
{
template <class ContainerAllocator>
struct Test_
{
  typedef Test_<ContainerAllocator> Type;

  Test_()
    : delta(0.0)
    , speed(0.0)  {
    }
  Test_(const ContainerAllocator& _alloc)
    : delta(0.0)
    , speed(0.0)  {
  (void)_alloc;
    }



   typedef float _delta_type;
  _delta_type delta;

   typedef float _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::track_race::Test_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::track_race::Test_<ContainerAllocator> const> ConstPtr;

}; // struct Test_

typedef ::track_race::Test_<std::allocator<void> > Test;

typedef boost::shared_ptr< ::track_race::Test > TestPtr;
typedef boost::shared_ptr< ::track_race::Test const> TestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::track_race::Test_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::track_race::Test_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::track_race::Test_<ContainerAllocator1> & lhs, const ::track_race::Test_<ContainerAllocator2> & rhs)
{
  return lhs.delta == rhs.delta &&
    lhs.speed == rhs.speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::track_race::Test_<ContainerAllocator1> & lhs, const ::track_race::Test_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace track_race

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::track_race::Test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::track_race::Test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::track_race::Test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::track_race::Test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::track_race::Test_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::track_race::Test_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::track_race::Test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d9346376c8249865364e5146af93372";
  }

  static const char* value(const ::track_race::Test_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d9346376c824986ULL;
  static const uint64_t static_value2 = 0x5364e5146af93372ULL;
};

template<class ContainerAllocator>
struct DataType< ::track_race::Test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "track_race/Test";
  }

  static const char* value(const ::track_race::Test_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::track_race::Test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 delta\n"
"float32 speed\n"
;
  }

  static const char* value(const ::track_race::Test_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::track_race::Test_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.delta);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Test_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::track_race::Test_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::track_race::Test_<ContainerAllocator>& v)
  {
    s << indent << "delta: ";
    Printer<float>::stream(s, indent + "  ", v.delta);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRACK_RACE_MESSAGE_TEST_H
