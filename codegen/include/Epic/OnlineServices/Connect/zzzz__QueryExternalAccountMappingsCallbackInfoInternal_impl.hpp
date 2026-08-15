#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/QueryExternalAccountMappingsCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryExternalAccountMappingsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryExternalAccountMappingsCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>)>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804edb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>"
constexpr  Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>* Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__QueryExternalAccountMappingsCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::QueryExternalAccountMappingsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal::QueryExternalAccountMappingsCallbackInfoInternal()   {
}
