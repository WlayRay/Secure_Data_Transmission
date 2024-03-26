// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: clientrequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_clientrequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_clientrequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_clientrequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_clientrequest_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_clientrequest_2eproto;
class ClientRequest;
class ClientRequestDefaultTypeInternal;
extern ClientRequestDefaultTypeInternal _ClientRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ClientRequest* Arena::CreateMaybeMessage<::ClientRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class ClientRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ClientRequest) */ {
 public:
  ClientRequest();
  virtual ~ClientRequest();

  ClientRequest(const ClientRequest& from);
  ClientRequest(ClientRequest&& from) noexcept
    : ClientRequest() {
    *this = ::std::move(from);
  }

  inline ClientRequest& operator=(const ClientRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientRequest& operator=(ClientRequest&& from) noexcept {
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
  static const ClientRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientRequest* internal_default_instance() {
    return reinterpret_cast<const ClientRequest*>(
               &_ClientRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ClientRequest* other);
  friend void swap(ClientRequest& a, ClientRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClientRequest* New() const final {
    return CreateMaybeMessage<ClientRequest>(nullptr);
  }

  ClientRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ClientRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ClientRequest& from);
  void MergeFrom(const ClientRequest& from);
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
  void InternalSwap(ClientRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientRequest";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_clientrequest_2eproto);
    return ::descriptor_table_clientrequest_2eproto.file_level_metadata[kIndexInFileMessages];
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

  // string authCode = 3;
  void clear_authcode();
  static const int kAuthCodeFieldNumber = 3;
  const std::string& authcode() const;
  void set_authcode(const std::string& value);
  void set_authcode(std::string&& value);
  void set_authcode(const char* value);
  void set_authcode(const char* value, size_t size);
  std::string* mutable_authcode();
  std::string* release_authcode();
  void set_allocated_authcode(std::string* authcode);

  // string serverId = 4;
  void clear_serverid();
  static const int kServerIdFieldNumber = 4;
  const std::string& serverid() const;
  void set_serverid(const std::string& value);
  void set_serverid(std::string&& value);
  void set_serverid(const char* value);
  void set_serverid(const char* value, size_t size);
  std::string* mutable_serverid();
  std::string* release_serverid();
  void set_allocated_serverid(std::string* serverid);

  // string r1 = 5;
  void clear_r1();
  static const int kR1FieldNumber = 5;
  const std::string& r1() const;
  void set_r1(const std::string& value);
  void set_r1(std::string&& value);
  void set_r1(const char* value);
  void set_r1(const char* value, size_t size);
  std::string* mutable_r1();
  std::string* release_r1();
  void set_allocated_r1(std::string* r1);

  // int32 cmdType = 1;
  void clear_cmdtype();
  static const int kCmdTypeFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 cmdtype() const;
  void set_cmdtype(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:ClientRequest)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr authcode_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serverid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr r1_;
  ::PROTOBUF_NAMESPACE_ID::int32 cmdtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_clientrequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClientRequest

// int32 cmdType = 1;
inline void ClientRequest::clear_cmdtype() {
  cmdtype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ClientRequest::cmdtype() const {
  // @@protoc_insertion_point(field_get:ClientRequest.cmdType)
  return cmdtype_;
}
inline void ClientRequest::set_cmdtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cmdtype_ = value;
  // @@protoc_insertion_point(field_set:ClientRequest.cmdType)
}

// string clientId = 2;
inline void ClientRequest::clear_clientid() {
  clientid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRequest::clientid() const {
  // @@protoc_insertion_point(field_get:ClientRequest.clientId)
  return clientid_.GetNoArena();
}
inline void ClientRequest::set_clientid(const std::string& value) {
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRequest.clientId)
}
inline void ClientRequest::set_clientid(std::string&& value) {
  
  clientid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRequest.clientId)
}
inline void ClientRequest::set_clientid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRequest.clientId)
}
inline void ClientRequest::set_clientid(const char* value, size_t size) {
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRequest.clientId)
}
inline std::string* ClientRequest::mutable_clientid() {
  
  // @@protoc_insertion_point(field_mutable:ClientRequest.clientId)
  return clientid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRequest::release_clientid() {
  // @@protoc_insertion_point(field_release:ClientRequest.clientId)
  
  return clientid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_allocated_clientid(std::string* clientid) {
  if (clientid != nullptr) {
    
  } else {
    
  }
  clientid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientid);
  // @@protoc_insertion_point(field_set_allocated:ClientRequest.clientId)
}

// string authCode = 3;
inline void ClientRequest::clear_authcode() {
  authcode_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRequest::authcode() const {
  // @@protoc_insertion_point(field_get:ClientRequest.authCode)
  return authcode_.GetNoArena();
}
inline void ClientRequest::set_authcode(const std::string& value) {
  
  authcode_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRequest.authCode)
}
inline void ClientRequest::set_authcode(std::string&& value) {
  
  authcode_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRequest.authCode)
}
inline void ClientRequest::set_authcode(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  authcode_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRequest.authCode)
}
inline void ClientRequest::set_authcode(const char* value, size_t size) {
  
  authcode_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRequest.authCode)
}
inline std::string* ClientRequest::mutable_authcode() {
  
  // @@protoc_insertion_point(field_mutable:ClientRequest.authCode)
  return authcode_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRequest::release_authcode() {
  // @@protoc_insertion_point(field_release:ClientRequest.authCode)
  
  return authcode_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_allocated_authcode(std::string* authcode) {
  if (authcode != nullptr) {
    
  } else {
    
  }
  authcode_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), authcode);
  // @@protoc_insertion_point(field_set_allocated:ClientRequest.authCode)
}

// string serverId = 4;
inline void ClientRequest::clear_serverid() {
  serverid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRequest::serverid() const {
  // @@protoc_insertion_point(field_get:ClientRequest.serverId)
  return serverid_.GetNoArena();
}
inline void ClientRequest::set_serverid(const std::string& value) {
  
  serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRequest.serverId)
}
inline void ClientRequest::set_serverid(std::string&& value) {
  
  serverid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRequest.serverId)
}
inline void ClientRequest::set_serverid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRequest.serverId)
}
inline void ClientRequest::set_serverid(const char* value, size_t size) {
  
  serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRequest.serverId)
}
inline std::string* ClientRequest::mutable_serverid() {
  
  // @@protoc_insertion_point(field_mutable:ClientRequest.serverId)
  return serverid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRequest::release_serverid() {
  // @@protoc_insertion_point(field_release:ClientRequest.serverId)
  
  return serverid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_allocated_serverid(std::string* serverid) {
  if (serverid != nullptr) {
    
  } else {
    
  }
  serverid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serverid);
  // @@protoc_insertion_point(field_set_allocated:ClientRequest.serverId)
}

// string r1 = 5;
inline void ClientRequest::clear_r1() {
  r1_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientRequest::r1() const {
  // @@protoc_insertion_point(field_get:ClientRequest.r1)
  return r1_.GetNoArena();
}
inline void ClientRequest::set_r1(const std::string& value) {
  
  r1_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientRequest.r1)
}
inline void ClientRequest::set_r1(std::string&& value) {
  
  r1_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientRequest.r1)
}
inline void ClientRequest::set_r1(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  r1_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientRequest.r1)
}
inline void ClientRequest::set_r1(const char* value, size_t size) {
  
  r1_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientRequest.r1)
}
inline std::string* ClientRequest::mutable_r1() {
  
  // @@protoc_insertion_point(field_mutable:ClientRequest.r1)
  return r1_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientRequest::release_r1() {
  // @@protoc_insertion_point(field_release:ClientRequest.r1)
  
  return r1_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_allocated_r1(std::string* r1) {
  if (r1 != nullptr) {
    
  } else {
    
  }
  r1_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), r1);
  // @@protoc_insertion_point(field_set_allocated:ClientRequest.r1)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_clientrequest_2eproto
