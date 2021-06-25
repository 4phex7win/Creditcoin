// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: setting.proto

#ifndef PROTOBUF_setting_2eproto__INCLUDED
#define PROTOBUF_setting_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_setting_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSetting_EntryImpl();
void InitDefaultsSetting_Entry();
void InitDefaultsSettingImpl();
void InitDefaultsSetting();
inline void InitDefaults() {
  InitDefaultsSetting_Entry();
  InitDefaultsSetting();
}
}  // namespace protobuf_setting_2eproto
class Setting;
class SettingDefaultTypeInternal;
extern SettingDefaultTypeInternal _Setting_default_instance_;
class Setting_Entry;
class Setting_EntryDefaultTypeInternal;
extern Setting_EntryDefaultTypeInternal _Setting_Entry_default_instance_;

// ===================================================================

class Setting_Entry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Setting.Entry) */ {
 public:
  Setting_Entry();
  virtual ~Setting_Entry();

  Setting_Entry(const Setting_Entry& from);

  inline Setting_Entry& operator=(const Setting_Entry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Setting_Entry(Setting_Entry&& from) noexcept
    : Setting_Entry() {
    *this = ::std::move(from);
  }

  inline Setting_Entry& operator=(Setting_Entry&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Setting_Entry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Setting_Entry* internal_default_instance() {
    return reinterpret_cast<const Setting_Entry*>(
               &_Setting_Entry_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Setting_Entry* other);
  friend void swap(Setting_Entry& a, Setting_Entry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Setting_Entry* New() const PROTOBUF_FINAL { return New(NULL); }

  Setting_Entry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Setting_Entry& from);
  void MergeFrom(const Setting_Entry& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Setting_Entry* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:Setting.Entry)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend struct ::protobuf_setting_2eproto::TableStruct;
  friend void ::protobuf_setting_2eproto::InitDefaultsSetting_EntryImpl();
};
// -------------------------------------------------------------------

class Setting : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Setting) */ {
 public:
  Setting();
  virtual ~Setting();

  Setting(const Setting& from);

  inline Setting& operator=(const Setting& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Setting(Setting&& from) noexcept
    : Setting() {
    *this = ::std::move(from);
  }

  inline Setting& operator=(Setting&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Setting& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Setting* internal_default_instance() {
    return reinterpret_cast<const Setting*>(
               &_Setting_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Setting* other);
  friend void swap(Setting& a, Setting& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Setting* New() const PROTOBUF_FINAL { return New(NULL); }

  Setting* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Setting& from);
  void MergeFrom(const Setting& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Setting* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Setting_Entry Entry;

  // accessors -------------------------------------------------------

  // repeated .Setting.Entry entries = 1;
  int entries_size() const;
  void clear_entries();
  static const int kEntriesFieldNumber = 1;
  const ::Setting_Entry& entries(int index) const;
  ::Setting_Entry* mutable_entries(int index);
  ::Setting_Entry* add_entries();
  ::google::protobuf::RepeatedPtrField< ::Setting_Entry >*
      mutable_entries();
  const ::google::protobuf::RepeatedPtrField< ::Setting_Entry >&
      entries() const;

  // @@protoc_insertion_point(class_scope:Setting)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Setting_Entry > entries_;
  mutable int _cached_size_;
  friend struct ::protobuf_setting_2eproto::TableStruct;
  friend void ::protobuf_setting_2eproto::InitDefaultsSettingImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Setting_Entry

// string key = 1;
inline void Setting_Entry::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Setting_Entry::key() const {
  // @@protoc_insertion_point(field_get:Setting.Entry.key)
  return key_.GetNoArena();
}
inline void Setting_Entry::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Setting.Entry.key)
}
#if LANG_CXX11
inline void Setting_Entry::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Setting.Entry.key)
}
#endif
inline void Setting_Entry::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Setting.Entry.key)
}
inline void Setting_Entry::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Setting.Entry.key)
}
inline ::std::string* Setting_Entry::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:Setting.Entry.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Setting_Entry::release_key() {
  // @@protoc_insertion_point(field_release:Setting.Entry.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Setting_Entry::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:Setting.Entry.key)
}

// string value = 2;
inline void Setting_Entry::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Setting_Entry::value() const {
  // @@protoc_insertion_point(field_get:Setting.Entry.value)
  return value_.GetNoArena();
}
inline void Setting_Entry::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Setting.Entry.value)
}
#if LANG_CXX11
inline void Setting_Entry::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Setting.Entry.value)
}
#endif
inline void Setting_Entry::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Setting.Entry.value)
}
inline void Setting_Entry::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Setting.Entry.value)
}
inline ::std::string* Setting_Entry::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:Setting.Entry.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Setting_Entry::release_value() {
  // @@protoc_insertion_point(field_release:Setting.Entry.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Setting_Entry::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:Setting.Entry.value)
}

// -------------------------------------------------------------------

// Setting

// repeated .Setting.Entry entries = 1;
inline int Setting::entries_size() const {
  return entries_.size();
}
inline void Setting::clear_entries() {
  entries_.Clear();
}
inline const ::Setting_Entry& Setting::entries(int index) const {
  // @@protoc_insertion_point(field_get:Setting.entries)
  return entries_.Get(index);
}
inline ::Setting_Entry* Setting::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:Setting.entries)
  return entries_.Mutable(index);
}
inline ::Setting_Entry* Setting::add_entries() {
  // @@protoc_insertion_point(field_add:Setting.entries)
  return entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Setting_Entry >*
Setting::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:Setting.entries)
  return &entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Setting_Entry >&
Setting::entries() const {
  // @@protoc_insertion_point(field_list:Setting.entries)
  return entries_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_setting_2eproto__INCLUDED