#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteFileOptions.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnFileTransferProgressCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnWriteFileDataCallback_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)()>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)()>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_Filename)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_Filename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.set_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_Filename)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_Filename", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.get_ChunkLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)()>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_ChunkLengthBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_ChunkLengthBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.set_ChunkLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)(uint32_t)>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_ChunkLengthBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_ChunkLengthBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.get_WriteFileDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)()>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_WriteFileDataCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_WriteFileDataCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.set_WriteFileDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_WriteFileDataCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_WriteFileDataCallback", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.get_FileTransferProgressCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)()>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_FileTransferProgressCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_FileTransferProgressCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions.set_FileTransferProgressCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::*)(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_FileTransferProgressCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_FileTransferProgressCallback", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_Filename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_Filename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_Filename(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_Filename", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_ChunkLengthBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_ChunkLengthBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_ChunkLengthBytes(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_ChunkLengthBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_WriteFileDataCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_WriteFileDataCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_WriteFileDataCallback(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_WriteFileDataCallback", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::get_FileTransferProgressCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"get_FileTransferProgressCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::set_FileTransferProgressCallback(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>(),
                        {"set_FileTransferProgressCallback", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Filename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ChunkLengthBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_WriteFileDataCallback_k__BackingField", ty: "::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FileTransferProgressCallback_k__BackingField", ty: "::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::WriteFileOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField, uint32_t  _ChunkLengthBytes_k__BackingField, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*  _WriteFileDataCallback_k__BackingField, ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*  _FileTransferProgressCallback_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_Filename_k__BackingField = _Filename_k__BackingField;
this->_ChunkLengthBytes_k__BackingField = _ChunkLengthBytes_k__BackingField;
this->_WriteFileDataCallback_k__BackingField = _WriteFileDataCallback_k__BackingField;
this->_FileTransferProgressCallback_k__BackingField = _FileTransferProgressCallback_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions::WriteFileOptions()   {
}
