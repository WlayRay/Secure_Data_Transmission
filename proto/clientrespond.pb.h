// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: clientrespond.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_clientrespond_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_clientrespond_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_clientrespond_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_clientrespond_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_clientrespond_2eproto;
class ClientRespond;
class ClientRespondDefaultTypeInternal;
extern ClientRespondDefaultTypeInternal _ClientRespond_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ClientRespond* Arena::CreateMaybeMessage<::ClientRespond>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class ClientRespond :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ClientRespond) */ {
 public:
  ClientRespond();
  virtual ~ClientRespond();

  ClientRespond(const ClientRespond& from);
  ClientRespond(ClientRespond&& from) noexcept
    : ClientRespond() {
    *this = ::std::move(from);
  }

  inline ClientRespond& operator=(const ClientRespond& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientRespond& operator=(ClientRespond&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const ClientRespond& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientRespond* internal_default_instance() {
    return reinterpret_cast<const ClientRespond*>(
               &_ClientRespond_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ClientRespond* other);
  friend void swap(ClientRespond& a, ClientRespond& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClientRespond* New() const final {
    return CreateMaybeMessage<ClientRespond>(nullptr);
  }

  ClientRespond* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ClientRespond>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ClientRespond& from);
  void MergeFrom(const ClientRespond& from);
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
  void InternalSwap(ClientRespond* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientRespond";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_clientrespond_2eproto);
    return ::descriptor_table_clientrespond_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string clientId = 2;
  void clear_clientid();
  static const int kClientIdFieldNumber = 2;
  const std::string& clientid() const;
  void set_clientid(const std::string& value);
  void set_clientid(std::string&& value);
  void set_clientid(const char* value);
  void set_clientid(const char* value, size_t size);
  std::string* mutable_clientid();
  std::string* release_clientid();
  void set_allocated_clientid(std::string* clientid);

  // string serverId = 3;
  void clear_serverid();
  static const int kServerIdFieldNumber = 3;
  const std::string& serverid() const;
  void set_serverid(const std::string& value);
  void set_serverid(std::string&& value);
  void set_serverid(const char* value);
  void set_serverid(const char* value, size_t size);
  std::string* mutable_serverid();
  std::string* release_serverid();
  void set_allocated_serverid(std::string* serverid);

  // string r2 = 4;
  void clear_r2();
  static const int kR2FieldNumber = 4;
  const std::string& r2() const;
  void set_r2(const std::string& value);
  void set_r2(std::string&& value);
  void set_r2(const char* value);
  void set_r2(const char* value, size_t size);
  std::string* mutable_r2();
  std::string* release_r2();
  void set_allocated_r2(std::string* r2);

  // int32 rv = 1;
  void clear_rv();
  static const int kRvFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 rv() const;
  void set_rv(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 seckeyid = 5;
  void clear_seckeyid();
  static const int kSeckeyidFieldNumber = 5;
  ::PROTOBUF_NAMESPACE_ID::int32 seckeyid() const;
  void set_seckeyid(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:ClientRespond)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serverid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr r2_;
  ::PROTOBUF_NAMESPACE_ID::int32 rv_;
  ::PROTOBUF_NAMESPACE_ID::int32 seckeyid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_clientrespond_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClientRespond

// int32 rv = 1;
inline void ClientRespond::clear_rv() {
  rv_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ClientRespond::rv() const {
  // @@protoc_insertion_point(field_get:ClientRespond.rv)
  return rv_;
}
inline void ClientRespond::set_rv(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rv_ = value;
  // @@protoc_insertion_point(field_set:ClientRespond.rv)
}

// string clientId = 2;
inline void ClientRespond::clear_clientid() {
  clientid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRespond::clientid() const {
  // @@protoc_insertion_point(field_get:ClientRespond.clientId)
  return clientid_.GetNoArena();
}
inline void ClientRespond::set_clientid(const std::string& value) {
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRespond.clientId)
}
inline void ClientRespond::set_clientid(std::string&& value) {
  
  clientid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRespond.clientId)
}
inline void ClientRespond::set_clientid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRespond.clientId)
}
inline void ClientRespond::set_clientid(const char* value, size_t size) {
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRespond.clientId)
}
inline std::string* ClientRespond::mutable_clientid() {
  
  // @@protoc_insertion_point(field_mutable:ClientRespond.clientId)
  return clientid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRespond::release_clientid() {
  // @@protoc_insertion_point(field_release:ClientRespond.clientId)
  
  return clientid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRespond::set_allocated_clientid(std::string* clientid) {
  if (clientid != nullptr) {
    
  } else {
    
  }
  clientid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientid);
  // @@protoc_insertion_point(field_set_allocated:ClientRespond.clientId)
}

// string serverId = 3;
inline void ClientRespond::clear_serverid() {
  serverid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRespond::serverid() const {
  // @@protoc_insertion_point(field_get:ClientRespond.serverId)
  return serverid_.GetNoArena();
}
inline void ClientRespond::set_serverid(const std::string& value) {
  
  serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRespond.serverId)
}
inline void ClientRespond::set_serverid(std::string&& value) {
  
  serverid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRespond.serverId)
}
inline void ClientRespond::set_serverid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRespond.serverId)
}
inline void ClientRespond::set_serverid(const char* value, size_t size) {
  
  serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRespond.serverId)
}
inline std::string* ClientRespond::mutable_serverid() {
  
  // @@protoc_insertion_point(field_mutable:ClientRespond.serverId)
  return serverid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRespond::release_serverid() {
  // @@protoc_insertion_point(field_release:ClientRespond.serverId)
  
  return serverid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRespond::set_allocated_serverid(std::string* serverid) {
  if (serverid != nullptr) {
    
  } else {
    
  }
  serverid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serverid);
  // @@protoc_insertion_point(field_set_allocated:ClientRespond.serverId)
}

// string r2 = 4;
inline void ClientRespond::clear_r2() {
  r2_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRespond::r2() const {
  // @@protoc_insertion_point(field_get:ClientRespond.r2)
  return r2_.GetNoArena();
}
inline void ClientRespond::set_r2(const std::string& value) {
  
  r2_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRespond.r2)
}
inline void ClientRespond::set_r2(std::string&& value) {
  
  r2_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRespond.r2)
}
inline void ClientRespond::set_r2(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  r2_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRespond.r2)
}
inline void ClientRespond::set_r2(const char* value, size_t size) {
  
  r2_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRespond.r2)
}
inline std::string* ClientRespond::mutable_r2() {
  
  // @@protoc_insertion_point(field_mutable:ClientRespond.r2)
  return r2_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRespond::release_r2() {
  // @@protoc_insertion_point(field_release:ClientRespond.r2)
  
  return r2_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRespond::set_allocated_r2(std::string* r2) {
  if (r2 != nullptr) {
    
  } else {
    
  }
  r2_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), r2);
  // @@protoc_insertion_point(field_set_allocated:ClientRespond.r2)
}

// int32 seckeyid = 5;
inline void ClientRespond::clear_seckeyid() {
  seckeyid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ClientRespond::seckeyid() const {
  // @@protoc_insertion_point(field_get:ClientRespond.seckeyid)
  return seckeyid_;
}
inline void ClientRespond::set_seckeyid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  seckeyid_ = value;
  // @@protoc_insertion_point(field_set:ClientRespond.seckeyid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_clientrespond_2eproto