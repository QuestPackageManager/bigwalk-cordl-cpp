#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__Attribute_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::Attribute>)>(&::Epic::OnlineServices::Lobby::AttributeInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805041c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::Attribute>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::AttributeInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::Attribute>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::Attribute>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>"
constexpr  Epic::OnlineServices::Lobby::AttributeInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>* Epic::OnlineServices::Lobby::AttributeInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__Attribute_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Visibility", ty: "::Epic::OnlineServices::Lobby::LobbyAttributeVisibility", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::AttributeInternal::AttributeInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Data, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  m_Visibility) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Data = m_Data;
this->m_Visibility = m_Visibility;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::AttributeInternal::AttributeInternal()   {
}
