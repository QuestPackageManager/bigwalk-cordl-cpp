#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LocalRTCOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LocalRTCOptions>)>(&::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18050bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18050bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LocalRTCOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>"
constexpr  Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>* Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LocalRTCOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseManualAudioInput", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseManualAudioOutput", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalAudioDeviceInputStartsMuted", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::LocalRTCOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_Flags, int32_t  m_UseManualAudioInput, int32_t  m_UseManualAudioOutput, int32_t  m_LocalAudioDeviceInputStartsMuted, ::System::IntPtr  m_Reserved) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Flags = m_Flags;
this->m_UseManualAudioInput = m_UseManualAudioInput;
this->m_UseManualAudioOutput = m_UseManualAudioOutput;
this->m_LocalAudioDeviceInputStartsMuted = m_LocalAudioDeviceInputStartsMuted;
this->m_Reserved = m_Reserved;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal::LocalRTCOptionsInternal()   {
}
