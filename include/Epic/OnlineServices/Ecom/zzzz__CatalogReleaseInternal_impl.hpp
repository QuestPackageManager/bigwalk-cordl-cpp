#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogReleaseInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogReleaseInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogRelease_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogReleaseInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogReleaseInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::CatalogRelease>)>(&::Epic::OnlineServices::Ecom::CatalogReleaseInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180511bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogReleaseInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CatalogRelease>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::CatalogReleaseInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::CatalogRelease>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogReleaseInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CatalogRelease>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>"
constexpr  Epic::OnlineServices::Ecom::CatalogReleaseInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>* Epic::OnlineServices::Ecom::CatalogReleaseInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__CatalogRelease_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompatibleAppIdCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompatibleAppIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompatiblePlatformCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompatiblePlatforms", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleaseNote", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CatalogReleaseInternal::CatalogReleaseInternal(int32_t  m_ApiVersion, uint32_t  m_CompatibleAppIdCount, ::System::IntPtr  m_CompatibleAppIds, uint32_t  m_CompatiblePlatformCount, ::System::IntPtr  m_CompatiblePlatforms, ::System::IntPtr  m_ReleaseNote) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_CompatibleAppIdCount = m_CompatibleAppIdCount;
this->m_CompatibleAppIds = m_CompatibleAppIds;
this->m_CompatiblePlatformCount = m_CompatiblePlatformCount;
this->m_CompatiblePlatforms = m_CompatiblePlatforms;
this->m_ReleaseNote = m_ReleaseNote;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CatalogReleaseInternal::CatalogReleaseInternal()   {
}
