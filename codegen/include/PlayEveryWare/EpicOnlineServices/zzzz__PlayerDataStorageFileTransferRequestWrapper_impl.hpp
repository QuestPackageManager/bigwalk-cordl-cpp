#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlayerDataStorageFileTransferRequestWrapper.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FileRequestTransferWrapper_1_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlayerDataStorageFileTransferRequestWrapper_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::*)(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*)>(&::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180544e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper.op_Implicit___PlayEveryWare__EpicOnlineServices__PlayerDataStorageFileTransferRequestWrapper_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper* (*)(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*)>(&::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::op_Implicit___PlayEveryWare__EpicOnlineServices__PlayerDataStorageFileTransferRequestWrapper_)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180544e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper.CancelRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::*)()>(&::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::CancelRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180544db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::*)()>(&::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180544df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::_ctor(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper* PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::op_Implicit___PlayEveryWare__EpicOnlineServices__PlayerDataStorageFileTransferRequestWrapper_(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(nullptr, ___internal_method, instance);
}
inline ::Epic::OnlineServices::Result PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::CancelRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper* PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::New_ctor(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*  instance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*>(instance));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper::PlayerDataStorageFileTransferRequestWrapper()   {
}
