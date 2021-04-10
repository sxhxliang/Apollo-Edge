// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber_conf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cyber_5fconf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cyber_5fconf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "scheduler_conf.pb.h"
#include "transport_conf.pb.h"
#include "run_mode_conf.pb.h"
#include "perf_conf.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cyber_5fconf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cyber_5fconf_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_5fconf_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class CyberConfig;
class CyberConfigDefaultTypeInternal;
extern CyberConfigDefaultTypeInternal _CyberConfig_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::CyberConfig* Arena::CreateMaybeMessage<::apollo::cyber::proto::CyberConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class CyberConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.CyberConfig) */ {
 public:
  CyberConfig();
  virtual ~CyberConfig();

  CyberConfig(const CyberConfig& from);
  CyberConfig(CyberConfig&& from) noexcept
    : CyberConfig() {
    *this = ::std::move(from);
  }

  inline CyberConfig& operator=(const CyberConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline CyberConfig& operator=(CyberConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CyberConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CyberConfig* internal_default_instance() {
    return reinterpret_cast<const CyberConfig*>(
               &_CyberConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CyberConfig* other);
  friend void swap(CyberConfig& a, CyberConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CyberConfig* New() const final {
    return CreateMaybeMessage<CyberConfig>(nullptr);
  }

  CyberConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CyberConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CyberConfig& from);
  void MergeFrom(const CyberConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CyberConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.CyberConfig";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cyber_5fconf_2eproto);
    return ::descriptor_table_cyber_5fconf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
  bool has_scheduler_conf() const;
  void clear_scheduler_conf();
  static const int kSchedulerConfFieldNumber = 1;
  const ::apollo::cyber::proto::SchedulerConf& scheduler_conf() const;
  ::apollo::cyber::proto::SchedulerConf* release_scheduler_conf();
  ::apollo::cyber::proto::SchedulerConf* mutable_scheduler_conf();
  void set_allocated_scheduler_conf(::apollo::cyber::proto::SchedulerConf* scheduler_conf);

  // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
  bool has_transport_conf() const;
  void clear_transport_conf();
  static const int kTransportConfFieldNumber = 2;
  const ::apollo::cyber::proto::TransportConf& transport_conf() const;
  ::apollo::cyber::proto::TransportConf* release_transport_conf();
  ::apollo::cyber::proto::TransportConf* mutable_transport_conf();
  void set_allocated_transport_conf(::apollo::cyber::proto::TransportConf* transport_conf);

  // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
  bool has_run_mode_conf() const;
  void clear_run_mode_conf();
  static const int kRunModeConfFieldNumber = 3;
  const ::apollo::cyber::proto::RunModeConf& run_mode_conf() const;
  ::apollo::cyber::proto::RunModeConf* release_run_mode_conf();
  ::apollo::cyber::proto::RunModeConf* mutable_run_mode_conf();
  void set_allocated_run_mode_conf(::apollo::cyber::proto::RunModeConf* run_mode_conf);

  // optional .apollo.cyber.proto.PerfConf perf_conf = 4;
  bool has_perf_conf() const;
  void clear_perf_conf();
  static const int kPerfConfFieldNumber = 4;
  const ::apollo::cyber::proto::PerfConf& perf_conf() const;
  ::apollo::cyber::proto::PerfConf* release_perf_conf();
  ::apollo::cyber::proto::PerfConf* mutable_perf_conf();
  void set_allocated_perf_conf(::apollo::cyber::proto::PerfConf* perf_conf);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.CyberConfig)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::cyber::proto::SchedulerConf* scheduler_conf_;
  ::apollo::cyber::proto::TransportConf* transport_conf_;
  ::apollo::cyber::proto::RunModeConf* run_mode_conf_;
  ::apollo::cyber::proto::PerfConf* perf_conf_;
  friend struct ::TableStruct_cyber_5fconf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CyberConfig

// optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
inline bool CyberConfig::has_scheduler_conf() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::apollo::cyber::proto::SchedulerConf& CyberConfig::scheduler_conf() const {
  const ::apollo::cyber::proto::SchedulerConf* p = scheduler_conf_;
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.scheduler_conf)
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::cyber::proto::SchedulerConf*>(
      &::apollo::cyber::proto::_SchedulerConf_default_instance_);
}
inline ::apollo::cyber::proto::SchedulerConf* CyberConfig::release_scheduler_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.scheduler_conf)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::cyber::proto::SchedulerConf* temp = scheduler_conf_;
  scheduler_conf_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::SchedulerConf* CyberConfig::mutable_scheduler_conf() {
  _has_bits_[0] |= 0x00000001u;
  if (scheduler_conf_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::SchedulerConf>(GetArenaNoVirtual());
    scheduler_conf_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.scheduler_conf)
  return scheduler_conf_;
}
inline void CyberConfig::set_allocated_scheduler_conf(::apollo::cyber::proto::SchedulerConf* scheduler_conf) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(scheduler_conf_);
  }
  if (scheduler_conf) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      scheduler_conf = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, scheduler_conf, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  scheduler_conf_ = scheduler_conf;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.scheduler_conf)
}

// optional .apollo.cyber.proto.TransportConf transport_conf = 2;
inline bool CyberConfig::has_transport_conf() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::apollo::cyber::proto::TransportConf& CyberConfig::transport_conf() const {
  const ::apollo::cyber::proto::TransportConf* p = transport_conf_;
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.transport_conf)
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::cyber::proto::TransportConf*>(
      &::apollo::cyber::proto::_TransportConf_default_instance_);
}
inline ::apollo::cyber::proto::TransportConf* CyberConfig::release_transport_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.transport_conf)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::cyber::proto::TransportConf* temp = transport_conf_;
  transport_conf_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::TransportConf* CyberConfig::mutable_transport_conf() {
  _has_bits_[0] |= 0x00000002u;
  if (transport_conf_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::TransportConf>(GetArenaNoVirtual());
    transport_conf_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.transport_conf)
  return transport_conf_;
}
inline void CyberConfig::set_allocated_transport_conf(::apollo::cyber::proto::TransportConf* transport_conf) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(transport_conf_);
  }
  if (transport_conf) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      transport_conf = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, transport_conf, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  transport_conf_ = transport_conf;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.transport_conf)
}

// optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
inline bool CyberConfig::has_run_mode_conf() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::apollo::cyber::proto::RunModeConf& CyberConfig::run_mode_conf() const {
  const ::apollo::cyber::proto::RunModeConf* p = run_mode_conf_;
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.run_mode_conf)
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::cyber::proto::RunModeConf*>(
      &::apollo::cyber::proto::_RunModeConf_default_instance_);
}
inline ::apollo::cyber::proto::RunModeConf* CyberConfig::release_run_mode_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.run_mode_conf)
  _has_bits_[0] &= ~0x00000004u;
  ::apollo::cyber::proto::RunModeConf* temp = run_mode_conf_;
  run_mode_conf_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::RunModeConf* CyberConfig::mutable_run_mode_conf() {
  _has_bits_[0] |= 0x00000004u;
  if (run_mode_conf_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::RunModeConf>(GetArenaNoVirtual());
    run_mode_conf_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.run_mode_conf)
  return run_mode_conf_;
}
inline void CyberConfig::set_allocated_run_mode_conf(::apollo::cyber::proto::RunModeConf* run_mode_conf) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(run_mode_conf_);
  }
  if (run_mode_conf) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      run_mode_conf = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, run_mode_conf, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  run_mode_conf_ = run_mode_conf;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.run_mode_conf)
}

// optional .apollo.cyber.proto.PerfConf perf_conf = 4;
inline bool CyberConfig::has_perf_conf() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::apollo::cyber::proto::PerfConf& CyberConfig::perf_conf() const {
  const ::apollo::cyber::proto::PerfConf* p = perf_conf_;
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.perf_conf)
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::cyber::proto::PerfConf*>(
      &::apollo::cyber::proto::_PerfConf_default_instance_);
}
inline ::apollo::cyber::proto::PerfConf* CyberConfig::release_perf_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.perf_conf)
  _has_bits_[0] &= ~0x00000008u;
  ::apollo::cyber::proto::PerfConf* temp = perf_conf_;
  perf_conf_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::PerfConf* CyberConfig::mutable_perf_conf() {
  _has_bits_[0] |= 0x00000008u;
  if (perf_conf_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::PerfConf>(GetArenaNoVirtual());
    perf_conf_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.perf_conf)
  return perf_conf_;
}
inline void CyberConfig::set_allocated_perf_conf(::apollo::cyber::proto::PerfConf* perf_conf) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(perf_conf_);
  }
  if (perf_conf) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      perf_conf = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, perf_conf, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  perf_conf_ = perf_conf;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.perf_conf)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cyber_5fconf_2eproto