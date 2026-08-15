#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/TitleStorageFileTransferRequestWrapper.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FileRequestTransferWrapper_1_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__TitleStorageFileTransferRequestWrapper_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::*)(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*)>(&::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180544e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper.op_Implicit___PlayEveryWare__EpicOnlineServices__TitleStorageFileTransferRequestWrapper_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper* (*)(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*)>(&::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::op_Implicit___PlayEveryWare__EpicOnlineServices__TitleStorageFileTransferRequestWrapper_)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180547600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper.CancelRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::*)()>(&::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::CancelRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180547580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::*)()>(&::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805475c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::_ctor(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper* PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::op_Implicit___PlayEveryWare__EpicOnlineServices__TitleStorageFileTransferRequestWrapper_(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(nullptr, ___internal_method, instance);
}
inline ::Epic::OnlineServices::Result PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::CancelRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper* PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::New_ctor(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*  instance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*>(instance));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper::TitleStorageFileTransferRequestWrapper()   {
}
