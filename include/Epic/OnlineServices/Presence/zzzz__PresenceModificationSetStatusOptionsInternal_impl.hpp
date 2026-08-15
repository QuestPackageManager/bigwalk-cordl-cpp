#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetStatusOptionsInternal.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Status_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetStatusOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetStatusOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>)>(&::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>* Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetStatusOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Status", ty: "::Epic::OnlineServices::Presence::Status", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::PresenceModificationSetStatusOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Presence::Status  m_Status) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Status = m_Status;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal::PresenceModificationSetStatusOptionsInternal()   {
}
