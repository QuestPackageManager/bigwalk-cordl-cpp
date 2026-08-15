#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetLastRedeemEntitlementsResultCountOptionsInternal.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetLastRedeemEntitlementsResultCountOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetLastRedeemEntitlementsResultCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>)>(&::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e72b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>"
constexpr  Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>* Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__GetLastRedeemEntitlementsResultCountOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ResultType", ty: "::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::GetLastRedeemEntitlementsResultCountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  m_ResultType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_ResultType = m_ResultType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal::GetLastRedeemEntitlementsResultCountOptionsInternal()   {
}
