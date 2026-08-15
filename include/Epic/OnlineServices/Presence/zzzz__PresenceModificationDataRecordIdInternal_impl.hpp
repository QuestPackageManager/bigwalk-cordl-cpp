#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationDataRecordIdInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationDataRecordIdInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationDataRecordId_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>)>(&::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>"
constexpr  Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>* Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationDataRecordId_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::PresenceModificationDataRecordIdInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal::PresenceModificationDataRecordIdInternal()   {
}
