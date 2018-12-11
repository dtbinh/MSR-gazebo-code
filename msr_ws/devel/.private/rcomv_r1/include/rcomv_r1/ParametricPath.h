// Generated by gencpp from file rcomv_r1/ParametricPath.msg
// DO NOT EDIT!


#ifndef RCOMV_R1_MESSAGE_PARAMETRICPATH_H
#define RCOMV_R1_MESSAGE_PARAMETRICPATH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rcomv_r1
{
template <class ContainerAllocator>
struct ParametricPath_
{
  typedef ParametricPath_<ContainerAllocator> Type;

  ParametricPath_()
    : path_type()
    , xc(0.0)
    , yc(0.0)
    , wd(0.0)
    , R(0.0)
    , R1(0.0)
    , R2(0.0)  {
    }
  ParametricPath_(const ContainerAllocator& _alloc)
    : path_type(_alloc)
    , xc(0.0)
    , yc(0.0)
    , wd(0.0)
    , R(0.0)
    , R1(0.0)
    , R2(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _path_type_type;
  _path_type_type path_type;

   typedef double _xc_type;
  _xc_type xc;

   typedef double _yc_type;
  _yc_type yc;

   typedef double _wd_type;
  _wd_type wd;

   typedef double _R_type;
  _R_type R;

   typedef double _R1_type;
  _R1_type R1;

   typedef double _R2_type;
  _R2_type R2;





  typedef boost::shared_ptr< ::rcomv_r1::ParametricPath_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rcomv_r1::ParametricPath_<ContainerAllocator> const> ConstPtr;

}; // struct ParametricPath_

typedef ::rcomv_r1::ParametricPath_<std::allocator<void> > ParametricPath;

typedef boost::shared_ptr< ::rcomv_r1::ParametricPath > ParametricPathPtr;
typedef boost::shared_ptr< ::rcomv_r1::ParametricPath const> ParametricPathConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rcomv_r1::ParametricPath_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rcomv_r1::ParametricPath_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rcomv_r1

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rcomv_r1': ['/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/src/RCOMV/rcomv_r1/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rcomv_r1::ParametricPath_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rcomv_r1::ParametricPath_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rcomv_r1::ParametricPath_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c6ff66e71430612759900cc362de36d1";
  }

  static const char* value(const ::rcomv_r1::ParametricPath_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc6ff66e714306127ULL;
  static const uint64_t static_value2 = 0x59900cc362de36d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rcomv_r1/ParametricPath";
  }

  static const char* value(const ::rcomv_r1::ParametricPath_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The Parametric Path/Trajectory Data Type.\n\
# This is used for defining a trajectory using parametric equations\n\
\n\
# path type\n\
string path_type\n\
\n\
# center location\n\
float64 xc\n\
float64 yc\n\
\n\
# angular frequency\n\
float64 wd\n\
\n\
# Radius for the circular path\n\
float64 R\n\
\n\
# Radius for the eight-shaped path\n\
float64 R1\n\
float64 R2\n\
";
  }

  static const char* value(const ::rcomv_r1::ParametricPath_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path_type);
      stream.next(m.xc);
      stream.next(m.yc);
      stream.next(m.wd);
      stream.next(m.R);
      stream.next(m.R1);
      stream.next(m.R2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParametricPath_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rcomv_r1::ParametricPath_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rcomv_r1::ParametricPath_<ContainerAllocator>& v)
  {
    s << indent << "path_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.path_type);
    s << indent << "xc: ";
    Printer<double>::stream(s, indent + "  ", v.xc);
    s << indent << "yc: ";
    Printer<double>::stream(s, indent + "  ", v.yc);
    s << indent << "wd: ";
    Printer<double>::stream(s, indent + "  ", v.wd);
    s << indent << "R: ";
    Printer<double>::stream(s, indent + "  ", v.R);
    s << indent << "R1: ";
    Printer<double>::stream(s, indent + "  ", v.R1);
    s << indent << "R2: ";
    Printer<double>::stream(s, indent + "  ", v.R2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RCOMV_R1_MESSAGE_PARAMETRICPATH_H
