#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/ParticipantMetadataInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__ParticipantMetadataInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__ParticipantMetadata_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::ParticipantMetadataInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::ParticipantMetadataInternal::*)(::by_ref<::Epic::OnlineServices::RTC::ParticipantMetadata>)>(&::Epic::OnlineServices::RTC::ParticipantMetadataInternal::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f6fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::ParticipantMetadataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::ParticipantMetadata>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::ParticipantMetadataInternal::Get(::by_ref<::Epic::OnlineServices::RTC::ParticipantMetadata>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::ParticipantMetadataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::ParticipantMetadata>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>"
constexpr  Epic::OnlineServices::RTC::ParticipantMetadataInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>* Epic::OnlineServices::RTC::ParticipantMetadataInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__ParticipantMetadata_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::ParticipantMetadataInternal::ParticipantMetadataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::ParticipantMetadataInternal::ParticipantMetadataInternal()   {
}
