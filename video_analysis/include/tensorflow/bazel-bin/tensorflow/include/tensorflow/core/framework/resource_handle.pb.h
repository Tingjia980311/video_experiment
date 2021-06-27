// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/resource_handle.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto;
namespace tensorflow {
class ResourceHandleProto;
class ResourceHandleProtoDefaultTypeInternal;
extern ResourceHandleProtoDefaultTypeInternal _ResourceHandleProto_default_instance_;
class ResourceHandleProto_DtypeAndShape;
class ResourceHandleProto_DtypeAndShapeDefaultTypeInternal;
extern ResourceHandleProto_DtypeAndShapeDefaultTypeInternal _ResourceHandleProto_DtypeAndShape_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::ResourceHandleProto* Arena::CreateMaybeMessage<::tensorflow::ResourceHandleProto>(Arena*);
template<> ::tensorflow::ResourceHandleProto_DtypeAndShape* Arena::CreateMaybeMessage<::tensorflow::ResourceHandleProto_DtypeAndShape>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class ResourceHandleProto_DtypeAndShape :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.ResourceHandleProto.DtypeAndShape) */ {
 public:
  ResourceHandleProto_DtypeAndShape();
  virtual ~ResourceHandleProto_DtypeAndShape();

  ResourceHandleProto_DtypeAndShape(const ResourceHandleProto_DtypeAndShape& from);
  ResourceHandleProto_DtypeAndShape(ResourceHandleProto_DtypeAndShape&& from) noexcept
    : ResourceHandleProto_DtypeAndShape() {
    *this = ::std::move(from);
  }

  inline ResourceHandleProto_DtypeAndShape& operator=(const ResourceHandleProto_DtypeAndShape& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResourceHandleProto_DtypeAndShape& operator=(ResourceHandleProto_DtypeAndShape&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const ResourceHandleProto_DtypeAndShape& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResourceHandleProto_DtypeAndShape* internal_default_instance() {
    return reinterpret_cast<const ResourceHandleProto_DtypeAndShape*>(
               &_ResourceHandleProto_DtypeAndShape_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ResourceHandleProto_DtypeAndShape& a, ResourceHandleProto_DtypeAndShape& b) {
    a.Swap(&b);
  }
  inline void Swap(ResourceHandleProto_DtypeAndShape* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ResourceHandleProto_DtypeAndShape* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ResourceHandleProto_DtypeAndShape* New() const final {
    return CreateMaybeMessage<ResourceHandleProto_DtypeAndShape>(nullptr);
  }

  ResourceHandleProto_DtypeAndShape* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResourceHandleProto_DtypeAndShape>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ResourceHandleProto_DtypeAndShape& from);
  void MergeFrom(const ResourceHandleProto_DtypeAndShape& from);
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
  void InternalSwap(ResourceHandleProto_DtypeAndShape* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.ResourceHandleProto.DtypeAndShape";
  }
  protected:
  explicit ResourceHandleProto_DtypeAndShape(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto);
    return ::descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShapeFieldNumber = 2,
    kDtypeFieldNumber = 1,
  };
  // .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* release_shape();
  ::tensorflow::TensorShapeProto* mutable_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.ResourceHandleProto.DtypeAndShape)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::TensorShapeProto* shape_;
  int dtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto;
};
// -------------------------------------------------------------------

class ResourceHandleProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.ResourceHandleProto) */ {
 public:
  ResourceHandleProto();
  virtual ~ResourceHandleProto();

  ResourceHandleProto(const ResourceHandleProto& from);
  ResourceHandleProto(ResourceHandleProto&& from) noexcept
    : ResourceHandleProto() {
    *this = ::std::move(from);
  }

  inline ResourceHandleProto& operator=(const ResourceHandleProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResourceHandleProto& operator=(ResourceHandleProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const ResourceHandleProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResourceHandleProto* internal_default_instance() {
    return reinterpret_cast<const ResourceHandleProto*>(
               &_ResourceHandleProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ResourceHandleProto& a, ResourceHandleProto& b) {
    a.Swap(&b);
  }
  inline void Swap(ResourceHandleProto* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ResourceHandleProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ResourceHandleProto* New() const final {
    return CreateMaybeMessage<ResourceHandleProto>(nullptr);
  }

  ResourceHandleProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResourceHandleProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ResourceHandleProto& from);
  void MergeFrom(const ResourceHandleProto& from);
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
  void InternalSwap(ResourceHandleProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.ResourceHandleProto";
  }
  protected:
  explicit ResourceHandleProto(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto);
    return ::descriptor_table_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ResourceHandleProto_DtypeAndShape DtypeAndShape;

  // accessors -------------------------------------------------------

  enum : int {
    kDtypesAndShapesFieldNumber = 6,
    kDeviceFieldNumber = 1,
    kContainerFieldNumber = 2,
    kNameFieldNumber = 3,
    kMaybeTypeNameFieldNumber = 5,
    kHashCodeFieldNumber = 4,
  };
  // repeated .tensorflow.ResourceHandleProto.DtypeAndShape dtypes_and_shapes = 6;
  int dtypes_and_shapes_size() const;
  void clear_dtypes_and_shapes();
  ::tensorflow::ResourceHandleProto_DtypeAndShape* mutable_dtypes_and_shapes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::ResourceHandleProto_DtypeAndShape >*
      mutable_dtypes_and_shapes();
  const ::tensorflow::ResourceHandleProto_DtypeAndShape& dtypes_and_shapes(int index) const;
  ::tensorflow::ResourceHandleProto_DtypeAndShape* add_dtypes_and_shapes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::ResourceHandleProto_DtypeAndShape >&
      dtypes_and_shapes() const;

  // string device = 1;
  void clear_device();
  const std::string& device() const;
  void set_device(const std::string& value);
  void set_device(std::string&& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  std::string* mutable_device();
  std::string* release_device();
  void set_allocated_device(std::string* device);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_device();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_device(
      std::string* device);

  // string container = 2;
  void clear_container();
  const std::string& container() const;
  void set_container(const std::string& value);
  void set_container(std::string&& value);
  void set_container(const char* value);
  void set_container(const char* value, size_t size);
  std::string* mutable_container();
  std::string* release_container();
  void set_allocated_container(std::string* container);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_container();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_container(
      std::string* container);

  // string name = 3;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);

  // string maybe_type_name = 5;
  void clear_maybe_type_name();
  const std::string& maybe_type_name() const;
  void set_maybe_type_name(const std::string& value);
  void set_maybe_type_name(std::string&& value);
  void set_maybe_type_name(const char* value);
  void set_maybe_type_name(const char* value, size_t size);
  std::string* mutable_maybe_type_name();
  std::string* release_maybe_type_name();
  void set_allocated_maybe_type_name(std::string* maybe_type_name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_maybe_type_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_maybe_type_name(
      std::string* maybe_type_name);

  // uint64 hash_code = 4;
  void clear_hash_code();
  ::PROTOBUF_NAMESPACE_ID::uint64 hash_code() const;
  void set_hash_code(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:tensorflow.ResourceHandleProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::ResourceHandleProto_DtypeAndShape > dtypes_and_shapes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr container_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr maybe_type_name_;
  ::PROTOBUF_NAMESPACE_ID::uint64 hash_code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResourceHandleProto_DtypeAndShape

// .tensorflow.DataType dtype = 1;
inline void ResourceHandleProto_DtypeAndShape::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType ResourceHandleProto_DtypeAndShape::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.DtypeAndShape.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void ResourceHandleProto_DtypeAndShape::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.DtypeAndShape.dtype)
}

// .tensorflow.TensorShapeProto shape = 2;
inline bool ResourceHandleProto_DtypeAndShape::has_shape() const {
  return this != internal_default_instance() && shape_ != nullptr;
}
inline const ::tensorflow::TensorShapeProto& ResourceHandleProto_DtypeAndShape::shape() const {
  const ::tensorflow::TensorShapeProto* p = shape_;
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.DtypeAndShape.shape)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::TensorShapeProto*>(
      &::tensorflow::_TensorShapeProto_default_instance_);
}
inline ::tensorflow::TensorShapeProto* ResourceHandleProto_DtypeAndShape::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.DtypeAndShape.shape)
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* ResourceHandleProto_DtypeAndShape::unsafe_arena_release_shape() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.DtypeAndShape.shape)
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* ResourceHandleProto_DtypeAndShape::mutable_shape() {
  
  if (shape_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::TensorShapeProto>(GetArenaNoVirtual());
    shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.DtypeAndShape.shape)
  return shape_;
}
inline void ResourceHandleProto_DtypeAndShape::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(shape_);
  }
  if (shape) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(shape)->GetArena();
    if (message_arena != submessage_arena) {
      shape = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, shape, submessage_arena);
    }
    
  } else {
    
  }
  shape_ = shape;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.DtypeAndShape.shape)
}

// -------------------------------------------------------------------

// ResourceHandleProto

// string device = 1;
inline void ResourceHandleProto::clear_device() {
  device_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& ResourceHandleProto::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.device)
  return device_.Get();
}
inline void ResourceHandleProto::set_device(const std::string& value) {
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.device)
}
inline void ResourceHandleProto::set_device(std::string&& value) {
  
  device_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.ResourceHandleProto.device)
}
inline void ResourceHandleProto::set_device(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.device)
}
inline void ResourceHandleProto::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.device)
}
inline std::string* ResourceHandleProto::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.device)
  return device_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* ResourceHandleProto::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.device)
  
  return device_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_device(std::string* device) {
  if (device != nullptr) {
    
  } else {
    
  }
  device_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.device)
}
inline std::string* ResourceHandleProto::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return device_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_device(
    std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (device != nullptr) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.device)
}

// string container = 2;
inline void ResourceHandleProto::clear_container() {
  container_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& ResourceHandleProto::container() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.container)
  return container_.Get();
}
inline void ResourceHandleProto::set_container(const std::string& value) {
  
  container_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.container)
}
inline void ResourceHandleProto::set_container(std::string&& value) {
  
  container_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.ResourceHandleProto.container)
}
inline void ResourceHandleProto::set_container(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  container_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.container)
}
inline void ResourceHandleProto::set_container(const char* value,
    size_t size) {
  
  container_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.container)
}
inline std::string* ResourceHandleProto::mutable_container() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.container)
  return container_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* ResourceHandleProto::release_container() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.container)
  
  return container_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_container(std::string* container) {
  if (container != nullptr) {
    
  } else {
    
  }
  container_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), container,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.container)
}
inline std::string* ResourceHandleProto::unsafe_arena_release_container() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.container)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return container_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_container(
    std::string* container) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (container != nullptr) {
    
  } else {
    
  }
  container_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      container, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.container)
}

// string name = 3;
inline void ResourceHandleProto::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& ResourceHandleProto::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.name)
  return name_.Get();
}
inline void ResourceHandleProto::set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.name)
}
inline void ResourceHandleProto::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.ResourceHandleProto.name)
}
inline void ResourceHandleProto::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.name)
}
inline void ResourceHandleProto::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.name)
}
inline std::string* ResourceHandleProto::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.name)
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* ResourceHandleProto::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.name)
  
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.name)
}
inline std::string* ResourceHandleProto::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (name != nullptr) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.name)
}

// uint64 hash_code = 4;
inline void ResourceHandleProto::clear_hash_code() {
  hash_code_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ResourceHandleProto::hash_code() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.hash_code)
  return hash_code_;
}
inline void ResourceHandleProto::set_hash_code(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  hash_code_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.hash_code)
}

// string maybe_type_name = 5;
inline void ResourceHandleProto::clear_maybe_type_name() {
  maybe_type_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& ResourceHandleProto::maybe_type_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.maybe_type_name)
  return maybe_type_name_.Get();
}
inline void ResourceHandleProto::set_maybe_type_name(const std::string& value) {
  
  maybe_type_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline void ResourceHandleProto::set_maybe_type_name(std::string&& value) {
  
  maybe_type_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline void ResourceHandleProto::set_maybe_type_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  maybe_type_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline void ResourceHandleProto::set_maybe_type_name(const char* value,
    size_t size) {
  
  maybe_type_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline std::string* ResourceHandleProto::mutable_maybe_type_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.maybe_type_name)
  return maybe_type_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* ResourceHandleProto::release_maybe_type_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.maybe_type_name)
  
  return maybe_type_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_maybe_type_name(std::string* maybe_type_name) {
  if (maybe_type_name != nullptr) {
    
  } else {
    
  }
  maybe_type_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), maybe_type_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline std::string* ResourceHandleProto::unsafe_arena_release_maybe_type_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.maybe_type_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return maybe_type_name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_maybe_type_name(
    std::string* maybe_type_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (maybe_type_name != nullptr) {
    
  } else {
    
  }
  maybe_type_name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      maybe_type_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.maybe_type_name)
}

// repeated .tensorflow.ResourceHandleProto.DtypeAndShape dtypes_and_shapes = 6;
inline int ResourceHandleProto::dtypes_and_shapes_size() const {
  return dtypes_and_shapes_.size();
}
inline void ResourceHandleProto::clear_dtypes_and_shapes() {
  dtypes_and_shapes_.Clear();
}
inline ::tensorflow::ResourceHandleProto_DtypeAndShape* ResourceHandleProto::mutable_dtypes_and_shapes(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.dtypes_and_shapes)
  return dtypes_and_shapes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::ResourceHandleProto_DtypeAndShape >*
ResourceHandleProto::mutable_dtypes_and_shapes() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.ResourceHandleProto.dtypes_and_shapes)
  return &dtypes_and_shapes_;
}
inline const ::tensorflow::ResourceHandleProto_DtypeAndShape& ResourceHandleProto::dtypes_and_shapes(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.dtypes_and_shapes)
  return dtypes_and_shapes_.Get(index);
}
inline ::tensorflow::ResourceHandleProto_DtypeAndShape* ResourceHandleProto::add_dtypes_and_shapes() {
  // @@protoc_insertion_point(field_add:tensorflow.ResourceHandleProto.dtypes_and_shapes)
  return dtypes_and_shapes_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::ResourceHandleProto_DtypeAndShape >&
ResourceHandleProto::dtypes_and_shapes() const {
  // @@protoc_insertion_point(field_list:tensorflow.ResourceHandleProto.dtypes_and_shapes)
  return dtypes_and_shapes_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto
