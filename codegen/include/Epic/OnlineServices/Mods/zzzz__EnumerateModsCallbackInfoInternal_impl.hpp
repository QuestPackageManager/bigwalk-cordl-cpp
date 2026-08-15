#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/EnumerateModsCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_impl.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__EnumerateModsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__EnumerateModsCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>)>(&::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804f75c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>"
constexpr  Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>* Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Mods__EnumerateModsCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::EnumerateModsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_ClientData, ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_LocalUserId = m_LocalUserId;
this->m_ClientData = m_ClientData;
this->m_Type = m_Type;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal::EnumerateModsCallbackInfoInternal()   {
}
