// Generated by gencpp from file mavros_msgs/SetModeResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_SETMODERESPONSE_H
#define MAVROS_MSGS_MESSAGE_SETMODERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct SetModeResponse_
{
  typedef SetModeResponse_<ContainerAllocator> Type;

  SetModeResponse_()
    : mode_sent(false)  {
    }
  SetModeResponse_(const ContainerAllocator& _alloc)
    : mode_sent(false)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_sent_type;
  _mode_sent_type mode_sent;





  typedef boost::shared_ptr< ::mavros_msgs::SetModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::SetModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetModeResponse_

typedef ::mavros_msgs::SetModeResponse_<std::allocator<void> > SetModeResponse;

typedef boost::shared_ptr< ::mavros_msgs::SetModeResponse > SetModeResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::SetModeResponse const> SetModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::SetModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::SetModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::SetModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::SetModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a70bfe6329ecf8f8d858daa6f3db7655";
  }

  static const char* value(const ::mavros_msgs::SetModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa70bfe6329ecf8f8ULL;
  static const uint64_t static_value2 = 0xd858daa6f3db7655ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/SetModeResponse";
  }

  static const char* value(const ::mavros_msgs::SetModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool mode_sent\n\
\n\
";
  }

  static const char* value(const ::mavros_msgs::SetModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode_sent);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::SetModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::SetModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "mode_sent: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode_sent);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_SETMODERESPONSE_H
