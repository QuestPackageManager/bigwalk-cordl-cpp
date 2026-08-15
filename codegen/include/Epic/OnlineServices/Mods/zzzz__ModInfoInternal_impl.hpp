#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModInfoInternal.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModInfoInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModInfoInternal::*)(::by_ref<::Epic::OnlineServices::Mods::ModInfo>)>(&::Epic::OnlineServices::Mods::ModInfoInternal::Get)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18050c580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::ModInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::ModInfoInternal::Get(::by_ref<::Epic::OnlineServices::Mods::ModInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::ModInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>"
constexpr  Epic::OnlineServices::Mods::ModInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>* Epic::OnlineServices::Mods::ModInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Mods__ModInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ModsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mods", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::ModInfoInternal::ModInfoInternal(int32_t  m_ApiVersion, int32_t  m_ModsCount, ::System::IntPtr  m_Mods, ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ModsCount = m_ModsCount;
this->m_Mods = m_Mods;
this->m_Type = m_Type;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::ModInfoInternal::ModInfoInternal()   {
}
