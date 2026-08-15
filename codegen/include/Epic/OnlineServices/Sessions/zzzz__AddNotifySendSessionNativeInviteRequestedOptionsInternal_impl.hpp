#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/AddNotifySendSessionNativeInviteRequestedOptionsInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifySendSessionNativeInviteRequestedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifySendSessionNativeInviteRequestedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>)>(&::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>"
constexpr  Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>* Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__AddNotifySendSessionNativeInviteRequestedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::AddNotifySendSessionNativeInviteRequestedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal::AddNotifySendSessionNativeInviteRequestedOptionsInternal()   {
}
