#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/QueryPresenceOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__QueryPresenceOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__QueryPresenceOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>)>(&::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804f78f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::*)()>(&::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::QueryPresenceOptions>"
constexpr  Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::QueryPresenceOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::QueryPresenceOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::QueryPresenceOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::QueryPresenceOptions>* Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__QueryPresenceOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::QueryPresenceOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::QueryPresenceOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal::QueryPresenceOptionsInternal()   {
}
