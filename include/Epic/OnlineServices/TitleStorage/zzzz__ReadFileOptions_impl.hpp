#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/ReadFileOptions.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnFileTransferProgressCallback_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileDataCallback_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)()>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)()>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::get_Filename)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_Filename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.set_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::set_Filename)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_Filename", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.get_ReadChunkLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)()>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::get_ReadChunkLengthBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_ReadChunkLengthBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.set_ReadChunkLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)(uint32_t)>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::set_ReadChunkLengthBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_ReadChunkLengthBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.get_ReadFileDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback* (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)()>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::get_ReadFileDataCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_ReadFileDataCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.set_ReadFileDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*)>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::set_ReadFileDataCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_ReadFileDataCallback", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.get_FileTransferProgressCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback* (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)()>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::get_FileTransferProgressCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_FileTransferProgressCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptions.set_FileTransferProgressCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptions::*)(::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*)>(&::Epic::OnlineServices::TitleStorage::ReadFileOptions::set_FileTransferProgressCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_FileTransferProgressCallback", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::TitleStorage::ReadFileOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::ReadFileOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::TitleStorage::ReadFileOptions::get_Filename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_Filename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::ReadFileOptions::set_Filename(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_Filename", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::TitleStorage::ReadFileOptions::get_ReadChunkLengthBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_ReadChunkLengthBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::ReadFileOptions::set_ReadChunkLengthBytes(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_ReadChunkLengthBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback* Epic::OnlineServices::TitleStorage::ReadFileOptions::get_ReadFileDataCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_ReadFileDataCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::ReadFileOptions::set_ReadFileDataCallback(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_ReadFileDataCallback", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback* Epic::OnlineServices::TitleStorage::ReadFileOptions::get_FileTransferProgressCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"get_FileTransferProgressCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::ReadFileOptions::set_FileTransferProgressCallback(::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptions>(),
                        {"set_FileTransferProgressCallback", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Filename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReadChunkLengthBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReadFileDataCallback_k__BackingField", ty: "::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FileTransferProgressCallback_k__BackingField", ty: "::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::ReadFileOptions::ReadFileOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField, uint32_t  _ReadChunkLengthBytes_k__BackingField, ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*  _ReadFileDataCallback_k__BackingField, ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*  _FileTransferProgressCallback_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_Filename_k__BackingField = _Filename_k__BackingField;
this->_ReadChunkLengthBytes_k__BackingField = _ReadChunkLengthBytes_k__BackingField;
this->_ReadFileDataCallback_k__BackingField = _ReadFileDataCallback_k__BackingField;
this->_FileTransferProgressCallback_k__BackingField = _FileTransferProgressCallback_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::ReadFileOptions::ReadFileOptions()   {
}
