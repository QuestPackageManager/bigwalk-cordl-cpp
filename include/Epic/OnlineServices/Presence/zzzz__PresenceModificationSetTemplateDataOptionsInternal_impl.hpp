#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateDataOptionsInternal.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptionsValueInternal_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationTemplateType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>)>(&::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804ff340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ff310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>* Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::Presence::PresenceModificationTemplateType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::PresenceModificationSetTemplateDataOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal  m_Value, ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  m_ValueType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
this->m_Value = m_Value;
this->m_ValueType = m_ValueType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal::PresenceModificationSetTemplateDataOptionsInternal()   {
}
