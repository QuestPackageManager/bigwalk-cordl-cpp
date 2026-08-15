#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AddNotifyLeaveLobbyRequestedOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AddNotifyLeaveLobbyRequestedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AddNotifyLeaveLobbyRequestedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>)>(&::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>"
constexpr  Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>* Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__AddNotifyLeaveLobbyRequestedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::AddNotifyLeaveLobbyRequestedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal::AddNotifyLeaveLobbyRequestedOptionsInternal()   {
}
