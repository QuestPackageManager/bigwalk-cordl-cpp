#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IFileTransferRequest.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::IFileTransferRequest.CancelRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::PlayEveryWare::EpicOnlineServices::IFileTransferRequest::*)()>(&::PlayEveryWare::EpicOnlineServices::IFileTransferRequest::CancelRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::IFileTransferRequest.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::IFileTransferRequest::*)()>(&::PlayEveryWare::EpicOnlineServices::IFileTransferRequest::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result PlayEveryWare::EpicOnlineServices::IFileTransferRequest::CancelRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::IFileTransferRequest::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayEveryWare::EpicOnlineServices::IFileTransferRequest::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayEveryWare::EpicOnlineServices::IFileTransferRequest::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
