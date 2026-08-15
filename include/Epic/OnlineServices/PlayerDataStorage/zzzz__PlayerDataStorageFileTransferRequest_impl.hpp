#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/PlayerDataStorageFileTransferRequest.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::*)(::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest.CancelRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::CancelRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"CancelRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest.GetFileRequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::GetFileRequestState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"GetFileRequestState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest.GetFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::*)(::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::GetFilename)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804fd1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"GetFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::CancelRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"CancelRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::GetFileRequestState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"GetFileRequestState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::GetFilename(::by_ref<::Epic::OnlineServices::Utf8String*>  outStringBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"GetFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, outStringBuffer);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>());
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest::PlayerDataStorageFileTransferRequest()   {
}
