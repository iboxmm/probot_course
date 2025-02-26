// Generated by gencpp from file probot_msgs/SFUCommandCtrlRequest.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_SFUCOMMANDCTRLREQUEST_H
#define PROBOT_MSGS_MESSAGE_SFUCOMMANDCTRLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace probot_msgs
{
template <class ContainerAllocator>
struct SFUCommandCtrlRequest_
{
  typedef SFUCommandCtrlRequest_<ContainerAllocator> Type;

  SFUCommandCtrlRequest_()
    : cmd()  {
    }
  SFUCommandCtrlRequest_(const ContainerAllocator& _alloc)
    : cmd(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SFUCommandCtrlRequest_

typedef ::probot_msgs::SFUCommandCtrlRequest_<std::allocator<void> > SFUCommandCtrlRequest;

typedef boost::shared_ptr< ::probot_msgs::SFUCommandCtrlRequest > SFUCommandCtrlRequestPtr;
typedef boost::shared_ptr< ::probot_msgs::SFUCommandCtrlRequest const> SFUCommandCtrlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace probot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'probot_msgs': ['/home/li/ROS/probot_ws/src/PROBOT_Anno/probot_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43a54fa49066cddcf148717d9d4a6353";
  }

  static const char* value(const ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43a54fa49066cddcULL;
  static const uint64_t static_value2 = 0xf148717d9d4a6353ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_msgs/SFUCommandCtrlRequest";
  }

  static const char* value(const ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string cmd\n\
";
  }

  static const char* value(const ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SFUCommandCtrlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_msgs::SFUCommandCtrlRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_SFUCOMMANDCTRLREQUEST_H
