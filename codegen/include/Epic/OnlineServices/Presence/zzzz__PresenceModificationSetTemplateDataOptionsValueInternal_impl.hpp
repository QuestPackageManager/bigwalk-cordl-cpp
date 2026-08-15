#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateDataOptionsValueInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptionsValueInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptionsValue_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>)>(&::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::Set)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ff420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804ff400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::__cordl_internal_get_m_AsInt32()  {
return this->___m_AsInt32;
}
constexpr int32_t const& Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::__cordl_internal_get_m_AsInt32() const {
return this->___m_AsInt32;
}
constexpr void Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::__cordl_internal_set_m_AsInt32(int32_t  value)  {
this->___m_AsInt32 = value;
}
constexpr ::System::IntPtr& Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::__cordl_internal_get_m_AsStringId()  {
return this->___m_AsStringId;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::__cordl_internal_get_m_AsStringId() const {
return this->___m_AsStringId;
}
constexpr void Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::__cordl_internal_set_m_AsStringId(::System::IntPtr  value)  {
this->___m_AsStringId = value;
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>* Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptionsValue_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_AsInt32", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsStringId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::PresenceModificationSetTemplateDataOptionsValueInternal(int32_t  m_AsInt32, ::System::IntPtr  m_AsStringId) noexcept  {
this->m_AsInt32 = m_AsInt32;
this->m_AsStringId = m_AsStringId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal::PresenceModificationSetTemplateDataOptionsValueInternal()   {
}
