#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/PlayerSanctionInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__PlayerSanctionInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__PlayerSanction_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanctionInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::PlayerSanctionInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::PlayerSanction>)>(&::Epic::OnlineServices::Sanctions::PlayerSanctionInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804ed910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanctionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::PlayerSanction>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::PlayerSanctionInternal::Get(::by_ref<::Epic::OnlineServices::Sanctions::PlayerSanction>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanctionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::PlayerSanction>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>"
constexpr  Epic::OnlineServices::Sanctions::PlayerSanctionInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>* Epic::OnlineServices::Sanctions::PlayerSanctionInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sanctions__PlayerSanction_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimePlaced", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Action", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimeExpires", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReferenceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::PlayerSanctionInternal::PlayerSanctionInternal(int32_t  m_ApiVersion, int64_t  m_TimePlaced, ::System::IntPtr  m_Action, int64_t  m_TimeExpires, ::System::IntPtr  m_ReferenceId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TimePlaced = m_TimePlaced;
this->m_Action = m_Action;
this->m_TimeExpires = m_TimeExpires;
this->m_ReferenceId = m_ReferenceId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::PlayerSanctionInternal::PlayerSanctionInternal()   {
}
