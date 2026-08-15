#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UnregisterPlayersOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UnregisterPlayersOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UnregisterPlayersOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>)>(&::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f6160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>"
constexpr  Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>* Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__UnregisterPlayersOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayersToUnregister", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayersToUnregisterCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::UnregisterPlayersOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_PlayersToUnregister, uint32_t  m_PlayersToUnregisterCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionName = m_SessionName;
this->m_PlayersToUnregister = m_PlayersToUnregister;
this->m_PlayersToUnregisterCount = m_PlayersToUnregisterCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal::UnregisterPlayersOptionsInternal()   {
}
