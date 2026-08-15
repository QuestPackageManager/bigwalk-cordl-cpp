#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/KeyImageInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__KeyImageInfoInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__KeyImageInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::KeyImageInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::KeyImageInfoInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::KeyImageInfo>)>(&::Epic::OnlineServices::Ecom::KeyImageInfoInternal::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180518820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::KeyImageInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::KeyImageInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::KeyImageInfoInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::KeyImageInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::KeyImageInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::KeyImageInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>"
constexpr  Epic::OnlineServices::Ecom::KeyImageInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>* Epic::OnlineServices::Ecom::KeyImageInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__KeyImageInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Url", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Width", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Height", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::KeyImageInfoInternal::KeyImageInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Type, ::System::IntPtr  m_Url, uint32_t  m_Width, uint32_t  m_Height) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Type = m_Type;
this->m_Url = m_Url;
this->m_Width = m_Width;
this->m_Height = m_Height;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::KeyImageInfoInternal::KeyImageInfoInternal()   {
}
