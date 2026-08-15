#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorUtils.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ErrorUtils_ErrorType::ErrorUtils_ErrorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ErrorUtils_ErrorType::ErrorUtils_ErrorType()   {
}
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NotSet{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectWrongPassword{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectVersionMismatch{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectTimeout{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectSessionClosedDueToGameplay{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectCrossPlay{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::Authenticate{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectServerFull{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::NoConnectSessionNotFound{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::Hosting{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::Offline{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::DisconnectedPlayerKickedByHost{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::LobbyJoinFailed{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::DisconnectedHostEndedSession{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::DisconnectedLostConnectionToHost{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType  GlobalNamespace::ErrorUtils_ErrorType::StoppedHostSessionExpired{static_cast<int32_t>(0xf)};
//  Writing Method size for method: ::GlobalNamespace::ErrorUtils.GetErrorKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::StringW,::StringW> (*)(::GlobalNamespace::ErrorUtils_ErrorType)>(&::GlobalNamespace::ErrorUtils::GetErrorKeys)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181acb5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorUtils*>(),
                        {"GetErrorKeys", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorUtils::*)()>(&::GlobalNamespace::ErrorUtils::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ValueTuple_2<::StringW,::StringW> GlobalNamespace::ErrorUtils::GetErrorKeys(::GlobalNamespace::ErrorUtils_ErrorType  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorUtils*>(),
                        {"GetErrorKeys", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW,::StringW>>(nullptr, ___internal_method, error);
}
inline void GlobalNamespace::ErrorUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ErrorUtils* GlobalNamespace::ErrorUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ErrorUtils*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ErrorUtils::ErrorUtils()   {
}
