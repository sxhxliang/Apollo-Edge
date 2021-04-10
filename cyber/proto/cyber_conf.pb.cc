// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber_conf.proto

#include "cyber_conf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_perf_5fconf_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PerfConf_perf_5fconf_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_run_5fmode_5fconf_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RunModeConf_run_5fmode_5fconf_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_scheduler_5fconf_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_SchedulerConf_scheduler_5fconf_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_transport_5fconf_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_TransportConf_transport_5fconf_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class CyberConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CyberConfig> _instance;
} _CyberConfig_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static void InitDefaultsscc_info_CyberConfig_cyber_5fconf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::cyber::proto::_CyberConfig_default_instance_;
    new (ptr) ::apollo::cyber::proto::CyberConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::cyber::proto::CyberConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_CyberConfig_cyber_5fconf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsscc_info_CyberConfig_cyber_5fconf_2eproto}, {
      &scc_info_SchedulerConf_scheduler_5fconf_2eproto.base,
      &scc_info_TransportConf_transport_5fconf_2eproto.base,
      &scc_info_RunModeConf_run_5fmode_5fconf_2eproto.base,
      &scc_info_PerfConf_perf_5fconf_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cyber_5fconf_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_cyber_5fconf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cyber_5fconf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cyber_5fconf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::CyberConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::CyberConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::CyberConfig, scheduler_conf_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::CyberConfig, transport_conf_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::CyberConfig, run_mode_conf_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::CyberConfig, perf_conf_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::apollo::cyber::proto::CyberConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::cyber::proto::_CyberConfig_default_instance_),
};

const char descriptor_table_protodef_cyber_5fconf_2eproto[] =
  "\n\020cyber_conf.proto\022\022apollo.cyber.proto\032\024"
  "scheduler_conf.proto\032\024transport_conf.pro"
  "to\032\023run_mode_conf.proto\032\017perf_conf.proto"
  "\"\354\001\n\013CyberConfig\0229\n\016scheduler_conf\030\001 \001(\013"
  "2!.apollo.cyber.proto.SchedulerConf\0229\n\016t"
  "ransport_conf\030\002 \001(\0132!.apollo.cyber.proto"
  ".TransportConf\0226\n\rrun_mode_conf\030\003 \001(\0132\037."
  "apollo.cyber.proto.RunModeConf\022/\n\tperf_c"
  "onf\030\004 \001(\0132\034.apollo.cyber.proto.PerfConf"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_cyber_5fconf_2eproto_deps[4] = {
  &::descriptor_table_perf_5fconf_2eproto,
  &::descriptor_table_run_5fmode_5fconf_2eproto,
  &::descriptor_table_scheduler_5fconf_2eproto,
  &::descriptor_table_transport_5fconf_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_cyber_5fconf_2eproto_sccs[1] = {
  &scc_info_CyberConfig_cyber_5fconf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cyber_5fconf_2eproto_once;
static bool descriptor_table_cyber_5fconf_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_5fconf_2eproto = {
  &descriptor_table_cyber_5fconf_2eproto_initialized, descriptor_table_protodef_cyber_5fconf_2eproto, "cyber_conf.proto", 359,
  &descriptor_table_cyber_5fconf_2eproto_once, descriptor_table_cyber_5fconf_2eproto_sccs, descriptor_table_cyber_5fconf_2eproto_deps, 1, 4,
  schemas, file_default_instances, TableStruct_cyber_5fconf_2eproto::offsets,
  file_level_metadata_cyber_5fconf_2eproto, 1, file_level_enum_descriptors_cyber_5fconf_2eproto, file_level_service_descriptors_cyber_5fconf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_cyber_5fconf_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_cyber_5fconf_2eproto), true);
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

void CyberConfig::InitAsDefaultInstance() {
  ::apollo::cyber::proto::_CyberConfig_default_instance_._instance.get_mutable()->scheduler_conf_ = const_cast< ::apollo::cyber::proto::SchedulerConf*>(
      ::apollo::cyber::proto::SchedulerConf::internal_default_instance());
  ::apollo::cyber::proto::_CyberConfig_default_instance_._instance.get_mutable()->transport_conf_ = const_cast< ::apollo::cyber::proto::TransportConf*>(
      ::apollo::cyber::proto::TransportConf::internal_default_instance());
  ::apollo::cyber::proto::_CyberConfig_default_instance_._instance.get_mutable()->run_mode_conf_ = const_cast< ::apollo::cyber::proto::RunModeConf*>(
      ::apollo::cyber::proto::RunModeConf::internal_default_instance());
  ::apollo::cyber::proto::_CyberConfig_default_instance_._instance.get_mutable()->perf_conf_ = const_cast< ::apollo::cyber::proto::PerfConf*>(
      ::apollo::cyber::proto::PerfConf::internal_default_instance());
}
class CyberConfig::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<CyberConfig>()._has_bits_);
  static const ::apollo::cyber::proto::SchedulerConf& scheduler_conf(const CyberConfig* msg);
  static void set_has_scheduler_conf(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::apollo::cyber::proto::TransportConf& transport_conf(const CyberConfig* msg);
  static void set_has_transport_conf(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::apollo::cyber::proto::RunModeConf& run_mode_conf(const CyberConfig* msg);
  static void set_has_run_mode_conf(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::apollo::cyber::proto::PerfConf& perf_conf(const CyberConfig* msg);
  static void set_has_perf_conf(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::apollo::cyber::proto::SchedulerConf&
CyberConfig::HasBitSetters::scheduler_conf(const CyberConfig* msg) {
  return *msg->scheduler_conf_;
}
const ::apollo::cyber::proto::TransportConf&
CyberConfig::HasBitSetters::transport_conf(const CyberConfig* msg) {
  return *msg->transport_conf_;
}
const ::apollo::cyber::proto::RunModeConf&
CyberConfig::HasBitSetters::run_mode_conf(const CyberConfig* msg) {
  return *msg->run_mode_conf_;
}
const ::apollo::cyber::proto::PerfConf&
CyberConfig::HasBitSetters::perf_conf(const CyberConfig* msg) {
  return *msg->perf_conf_;
}
void CyberConfig::clear_scheduler_conf() {
  if (scheduler_conf_ != nullptr) scheduler_conf_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void CyberConfig::clear_transport_conf() {
  if (transport_conf_ != nullptr) transport_conf_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void CyberConfig::clear_run_mode_conf() {
  if (run_mode_conf_ != nullptr) run_mode_conf_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void CyberConfig::clear_perf_conf() {
  if (perf_conf_ != nullptr) perf_conf_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CyberConfig::kSchedulerConfFieldNumber;
const int CyberConfig::kTransportConfFieldNumber;
const int CyberConfig::kRunModeConfFieldNumber;
const int CyberConfig::kPerfConfFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CyberConfig::CyberConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.cyber.proto.CyberConfig)
}
CyberConfig::CyberConfig(const CyberConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_scheduler_conf()) {
    scheduler_conf_ = new ::apollo::cyber::proto::SchedulerConf(*from.scheduler_conf_);
  } else {
    scheduler_conf_ = nullptr;
  }
  if (from.has_transport_conf()) {
    transport_conf_ = new ::apollo::cyber::proto::TransportConf(*from.transport_conf_);
  } else {
    transport_conf_ = nullptr;
  }
  if (from.has_run_mode_conf()) {
    run_mode_conf_ = new ::apollo::cyber::proto::RunModeConf(*from.run_mode_conf_);
  } else {
    run_mode_conf_ = nullptr;
  }
  if (from.has_perf_conf()) {
    perf_conf_ = new ::apollo::cyber::proto::PerfConf(*from.perf_conf_);
  } else {
    perf_conf_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.CyberConfig)
}

void CyberConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CyberConfig_cyber_5fconf_2eproto.base);
  ::memset(&scheduler_conf_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&perf_conf_) -
      reinterpret_cast<char*>(&scheduler_conf_)) + sizeof(perf_conf_));
}

CyberConfig::~CyberConfig() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.CyberConfig)
  SharedDtor();
}

void CyberConfig::SharedDtor() {
  if (this != internal_default_instance()) delete scheduler_conf_;
  if (this != internal_default_instance()) delete transport_conf_;
  if (this != internal_default_instance()) delete run_mode_conf_;
  if (this != internal_default_instance()) delete perf_conf_;
}

void CyberConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CyberConfig& CyberConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CyberConfig_cyber_5fconf_2eproto.base);
  return *internal_default_instance();
}


void CyberConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.CyberConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(scheduler_conf_ != nullptr);
      scheduler_conf_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(transport_conf_ != nullptr);
      transport_conf_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(run_mode_conf_ != nullptr);
      run_mode_conf_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(perf_conf_ != nullptr);
      perf_conf_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* CyberConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_scheduler_conf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_transport_conf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_run_mode_conf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.PerfConf perf_conf = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(mutable_perf_conf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool CyberConfig::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.cyber.proto.CyberConfig)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_scheduler_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_transport_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_run_mode_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.PerfConf perf_conf = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_perf_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.cyber.proto.CyberConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.cyber.proto.CyberConfig)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void CyberConfig::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.cyber.proto.CyberConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::scheduler_conf(this), output);
  }

  // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::transport_conf(this), output);
  }

  // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, HasBitSetters::run_mode_conf(this), output);
  }

  // optional .apollo.cyber.proto.PerfConf perf_conf = 4;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, HasBitSetters::perf_conf(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.cyber.proto.CyberConfig)
}

::PROTOBUF_NAMESPACE_ID::uint8* CyberConfig::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.CyberConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::scheduler_conf(this), target);
  }

  // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::transport_conf(this), target);
  }

  // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, HasBitSetters::run_mode_conf(this), target);
  }

  // optional .apollo.cyber.proto.PerfConf perf_conf = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, HasBitSetters::perf_conf(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.CyberConfig)
  return target;
}

size_t CyberConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.CyberConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *scheduler_conf_);
    }

    // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *transport_conf_);
    }

    // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *run_mode_conf_);
    }

    // optional .apollo.cyber.proto.PerfConf perf_conf = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *perf_conf_);
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CyberConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.CyberConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const CyberConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CyberConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.CyberConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.CyberConfig)
    MergeFrom(*source);
  }
}

void CyberConfig::MergeFrom(const CyberConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.CyberConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      mutable_scheduler_conf()->::apollo::cyber::proto::SchedulerConf::MergeFrom(from.scheduler_conf());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_transport_conf()->::apollo::cyber::proto::TransportConf::MergeFrom(from.transport_conf());
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_run_mode_conf()->::apollo::cyber::proto::RunModeConf::MergeFrom(from.run_mode_conf());
    }
    if (cached_has_bits & 0x00000008u) {
      mutable_perf_conf()->::apollo::cyber::proto::PerfConf::MergeFrom(from.perf_conf());
    }
  }
}

void CyberConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.CyberConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CyberConfig::CopyFrom(const CyberConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.CyberConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CyberConfig::IsInitialized() const {
  if (has_scheduler_conf()) {
    if (!this->scheduler_conf_->IsInitialized()) return false;
  }
  return true;
}

void CyberConfig::Swap(CyberConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CyberConfig::InternalSwap(CyberConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(scheduler_conf_, other->scheduler_conf_);
  swap(transport_conf_, other->transport_conf_);
  swap(run_mode_conf_, other->run_mode_conf_);
  swap(perf_conf_, other->perf_conf_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CyberConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::CyberConfig* Arena::CreateMaybeMessage< ::apollo::cyber::proto::CyberConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::cyber::proto::CyberConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>