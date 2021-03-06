// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RollPitchYawrateThrust.proto

#ifndef PROTOBUF_RollPitchYawrateThrust_2eproto__INCLUDED
#define PROTOBUF_RollPitchYawrateThrust_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Header.pb.h"
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)

namespace gz_mav_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RollPitchYawrateThrust_2eproto();
void protobuf_AssignDesc_RollPitchYawrateThrust_2eproto();
void protobuf_ShutdownFile_RollPitchYawrateThrust_2eproto();

class RollPitchYawrateThrust;

// ===================================================================

class RollPitchYawrateThrust : public ::google::protobuf::Message {
 public:
  RollPitchYawrateThrust();
  virtual ~RollPitchYawrateThrust();

  RollPitchYawrateThrust(const RollPitchYawrateThrust& from);

  inline RollPitchYawrateThrust& operator=(const RollPitchYawrateThrust& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RollPitchYawrateThrust& default_instance();

  void Swap(RollPitchYawrateThrust* other);

  // implements Message ----------------------------------------------

  RollPitchYawrateThrust* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RollPitchYawrateThrust& from);
  void MergeFrom(const RollPitchYawrateThrust& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .gz_std_msgs.Header header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::gz_std_msgs::Header& header() const;
  inline ::gz_std_msgs::Header* mutable_header();
  inline ::gz_std_msgs::Header* release_header();
  inline void set_allocated_header(::gz_std_msgs::Header* header);

  // required double roll = 2;
  inline bool has_roll() const;
  inline void clear_roll();
  static const int kRollFieldNumber = 2;
  inline double roll() const;
  inline void set_roll(double value);

  // required double pitch = 3;
  inline bool has_pitch() const;
  inline void clear_pitch();
  static const int kPitchFieldNumber = 3;
  inline double pitch() const;
  inline void set_pitch(double value);

  // required double yaw_rate = 4;
  inline bool has_yaw_rate() const;
  inline void clear_yaw_rate();
  static const int kYawRateFieldNumber = 4;
  inline double yaw_rate() const;
  inline void set_yaw_rate(double value);

  // required .gazebo.msgs.Vector3d thrust = 5;
  inline bool has_thrust() const;
  inline void clear_thrust();
  static const int kThrustFieldNumber = 5;
  inline const ::gazebo::msgs::Vector3d& thrust() const;
  inline ::gazebo::msgs::Vector3d* mutable_thrust();
  inline ::gazebo::msgs::Vector3d* release_thrust();
  inline void set_allocated_thrust(::gazebo::msgs::Vector3d* thrust);

  // @@protoc_insertion_point(class_scope:gz_mav_msgs.RollPitchYawrateThrust)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_roll();
  inline void clear_has_roll();
  inline void set_has_pitch();
  inline void clear_has_pitch();
  inline void set_has_yaw_rate();
  inline void clear_has_yaw_rate();
  inline void set_has_thrust();
  inline void clear_has_thrust();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gz_std_msgs::Header* header_;
  double roll_;
  double pitch_;
  double yaw_rate_;
  ::gazebo::msgs::Vector3d* thrust_;
  friend void  protobuf_AddDesc_RollPitchYawrateThrust_2eproto();
  friend void protobuf_AssignDesc_RollPitchYawrateThrust_2eproto();
  friend void protobuf_ShutdownFile_RollPitchYawrateThrust_2eproto();

  void InitAsDefaultInstance();
  static RollPitchYawrateThrust* default_instance_;
};
// ===================================================================


// ===================================================================

// RollPitchYawrateThrust

// required .gz_std_msgs.Header header = 1;
inline bool RollPitchYawrateThrust::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RollPitchYawrateThrust::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RollPitchYawrateThrust::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RollPitchYawrateThrust::clear_header() {
  if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
  clear_has_header();
}
inline const ::gz_std_msgs::Header& RollPitchYawrateThrust::header() const {
  // @@protoc_insertion_point(field_get:gz_mav_msgs.RollPitchYawrateThrust.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::gz_std_msgs::Header* RollPitchYawrateThrust::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::gz_std_msgs::Header;
  // @@protoc_insertion_point(field_mutable:gz_mav_msgs.RollPitchYawrateThrust.header)
  return header_;
}
inline ::gz_std_msgs::Header* RollPitchYawrateThrust::release_header() {
  clear_has_header();
  ::gz_std_msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void RollPitchYawrateThrust::set_allocated_header(::gz_std_msgs::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_mav_msgs.RollPitchYawrateThrust.header)
}

// required double roll = 2;
inline bool RollPitchYawrateThrust::has_roll() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RollPitchYawrateThrust::set_has_roll() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RollPitchYawrateThrust::clear_has_roll() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RollPitchYawrateThrust::clear_roll() {
  roll_ = 0;
  clear_has_roll();
}
inline double RollPitchYawrateThrust::roll() const {
  // @@protoc_insertion_point(field_get:gz_mav_msgs.RollPitchYawrateThrust.roll)
  return roll_;
}
inline void RollPitchYawrateThrust::set_roll(double value) {
  set_has_roll();
  roll_ = value;
  // @@protoc_insertion_point(field_set:gz_mav_msgs.RollPitchYawrateThrust.roll)
}

// required double pitch = 3;
inline bool RollPitchYawrateThrust::has_pitch() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RollPitchYawrateThrust::set_has_pitch() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RollPitchYawrateThrust::clear_has_pitch() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RollPitchYawrateThrust::clear_pitch() {
  pitch_ = 0;
  clear_has_pitch();
}
inline double RollPitchYawrateThrust::pitch() const {
  // @@protoc_insertion_point(field_get:gz_mav_msgs.RollPitchYawrateThrust.pitch)
  return pitch_;
}
inline void RollPitchYawrateThrust::set_pitch(double value) {
  set_has_pitch();
  pitch_ = value;
  // @@protoc_insertion_point(field_set:gz_mav_msgs.RollPitchYawrateThrust.pitch)
}

// required double yaw_rate = 4;
inline bool RollPitchYawrateThrust::has_yaw_rate() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RollPitchYawrateThrust::set_has_yaw_rate() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RollPitchYawrateThrust::clear_has_yaw_rate() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RollPitchYawrateThrust::clear_yaw_rate() {
  yaw_rate_ = 0;
  clear_has_yaw_rate();
}
inline double RollPitchYawrateThrust::yaw_rate() const {
  // @@protoc_insertion_point(field_get:gz_mav_msgs.RollPitchYawrateThrust.yaw_rate)
  return yaw_rate_;
}
inline void RollPitchYawrateThrust::set_yaw_rate(double value) {
  set_has_yaw_rate();
  yaw_rate_ = value;
  // @@protoc_insertion_point(field_set:gz_mav_msgs.RollPitchYawrateThrust.yaw_rate)
}

// required .gazebo.msgs.Vector3d thrust = 5;
inline bool RollPitchYawrateThrust::has_thrust() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RollPitchYawrateThrust::set_has_thrust() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RollPitchYawrateThrust::clear_has_thrust() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RollPitchYawrateThrust::clear_thrust() {
  if (thrust_ != NULL) thrust_->::gazebo::msgs::Vector3d::Clear();
  clear_has_thrust();
}
inline const ::gazebo::msgs::Vector3d& RollPitchYawrateThrust::thrust() const {
  // @@protoc_insertion_point(field_get:gz_mav_msgs.RollPitchYawrateThrust.thrust)
  return thrust_ != NULL ? *thrust_ : *default_instance_->thrust_;
}
inline ::gazebo::msgs::Vector3d* RollPitchYawrateThrust::mutable_thrust() {
  set_has_thrust();
  if (thrust_ == NULL) thrust_ = new ::gazebo::msgs::Vector3d;
  // @@protoc_insertion_point(field_mutable:gz_mav_msgs.RollPitchYawrateThrust.thrust)
  return thrust_;
}
inline ::gazebo::msgs::Vector3d* RollPitchYawrateThrust::release_thrust() {
  clear_has_thrust();
  ::gazebo::msgs::Vector3d* temp = thrust_;
  thrust_ = NULL;
  return temp;
}
inline void RollPitchYawrateThrust::set_allocated_thrust(::gazebo::msgs::Vector3d* thrust) {
  delete thrust_;
  thrust_ = thrust;
  if (thrust) {
    set_has_thrust();
  } else {
    clear_has_thrust();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_mav_msgs.RollPitchYawrateThrust.thrust)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_mav_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RollPitchYawrateThrust_2eproto__INCLUDED
