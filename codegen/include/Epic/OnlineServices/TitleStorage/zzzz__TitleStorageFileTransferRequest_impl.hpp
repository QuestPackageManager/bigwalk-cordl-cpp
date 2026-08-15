#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/TitleStorageFileTransferRequest.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::*)(::System::IntPtr)>(&::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest.CancelRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::CancelRequest)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"CancelRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest.GetFileRequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::GetFileRequestState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e17f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"GetFileRequestState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest.GetFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::*)(::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::GetFilename)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804e1870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"GetFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::*)()>(&::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e1970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::CancelRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"CancelRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::GetFileRequestState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"GetFileRequestState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::GetFilename(::by_ref<::Epic::OnlineServices::Utf8String*>  outStringBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"GetFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, outStringBuffer);
}
inline void Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>());
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest::TitleStorageFileTransferRequest()   {
}
