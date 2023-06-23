// Generated by gencpp from file lidar_camera_calibration/marker_6dof.msg
// DO NOT EDIT!


#ifndef LIDAR_CAMERA_CALIBRATION_MESSAGE_MARKER_6DOF_H
#define LIDAR_CAMERA_CALIBRATION_MESSAGE_MARKER_6DOF_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/Float32MultiArray.h>

namespace lidar_camera_calibration
{
template <class ContainerAllocator>
struct marker_6dof_
{
  typedef marker_6dof_<ContainerAllocator> Type;

  marker_6dof_()
    : header()
    , num_of_markers(0)
    , dof()  {
    }
  marker_6dof_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , num_of_markers(0)
    , dof(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _num_of_markers_type;
  _num_of_markers_type num_of_markers;

   typedef  ::std_msgs::Float32MultiArray_<ContainerAllocator>  _dof_type;
  _dof_type dof;





  typedef boost::shared_ptr< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> const> ConstPtr;

}; // struct marker_6dof_

typedef ::lidar_camera_calibration::marker_6dof_<std::allocator<void> > marker_6dof;

typedef boost::shared_ptr< ::lidar_camera_calibration::marker_6dof > marker_6dofPtr;
typedef boost::shared_ptr< ::lidar_camera_calibration::marker_6dof const> marker_6dofConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator1> & lhs, const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.num_of_markers == rhs.num_of_markers &&
    lhs.dof == rhs.dof;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator1> & lhs, const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lidar_camera_calibration

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b58090eb705a228fefaefd143c65c540";
  }

  static const char* value(const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb58090eb705a228fULL;
  static const uint64_t static_value2 = 0xefaefd143c65c540ULL;
};

template<class ContainerAllocator>
struct DataType< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lidar_camera_calibration/marker_6dof";
  }

  static const char* value(const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"int32 num_of_markers\n"
"std_msgs/Float32MultiArray dof\n"
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
"\n"
"================================================================================\n"
"MSG: std_msgs/Float32MultiArray\n"
"# Please look at the MultiArrayLayout message definition for\n"
"# documentation on all multiarrays.\n"
"\n"
"MultiArrayLayout  layout        # specification of data layout\n"
"float32[]         data          # array of data\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/MultiArrayLayout\n"
"# The multiarray declares a generic multi-dimensional array of a\n"
"# particular data type.  Dimensions are ordered from outer most\n"
"# to inner most.\n"
"\n"
"MultiArrayDimension[] dim # Array of dimension properties\n"
"uint32 data_offset        # padding elements at front of data\n"
"\n"
"# Accessors should ALWAYS be written in terms of dimension stride\n"
"# and specified outer-most dimension first.\n"
"# \n"
"# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\n"
"#\n"
"# A standard, 3-channel 640x480 image with interleaved color channels\n"
"# would be specified as:\n"
"#\n"
"# dim[0].label  = \"height\"\n"
"# dim[0].size   = 480\n"
"# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\n"
"# dim[1].label  = \"width\"\n"
"# dim[1].size   = 640\n"
"# dim[1].stride = 3*640 = 1920\n"
"# dim[2].label  = \"channel\"\n"
"# dim[2].size   = 3\n"
"# dim[2].stride = 3\n"
"#\n"
"# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/MultiArrayDimension\n"
"string label   # label of given dimension\n"
"uint32 size    # size of given dimension (in type units)\n"
"uint32 stride  # stride of given dimension\n"
;
  }

  static const char* value(const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.num_of_markers);
      stream.next(m.dof);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct marker_6dof_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lidar_camera_calibration::marker_6dof_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lidar_camera_calibration::marker_6dof_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "num_of_markers: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_of_markers);
    s << indent << "dof: ";
    s << std::endl;
    Printer< ::std_msgs::Float32MultiArray_<ContainerAllocator> >::stream(s, indent + "  ", v.dof);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIDAR_CAMERA_CALIBRATION_MESSAGE_MARKER_6DOF_H
