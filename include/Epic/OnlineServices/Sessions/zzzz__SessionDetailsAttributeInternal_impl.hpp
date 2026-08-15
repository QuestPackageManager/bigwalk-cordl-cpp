#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsAttributeInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsAttributeInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsAttribute_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>)>(&::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::Get)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1804f1ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::Get(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>"
constexpr  Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>* Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionDetailsAttribute_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AdvertisementType", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::SessionDetailsAttributeInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Data, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  m_AdvertisementType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Data = m_Data;
this->m_AdvertisementType = m_AdvertisementType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal::SessionDetailsAttributeInternal()   {
}
