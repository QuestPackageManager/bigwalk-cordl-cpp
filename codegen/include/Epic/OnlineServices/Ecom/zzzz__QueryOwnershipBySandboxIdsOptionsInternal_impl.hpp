#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/QueryOwnershipBySandboxIdsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipBySandboxIdsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipBySandboxIdsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>)>(&::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18051d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>"
constexpr  Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>* Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__QueryOwnershipBySandboxIdsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SandboxIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SandboxIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::QueryOwnershipBySandboxIdsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_SandboxIds, uint32_t  m_SandboxIdsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_SandboxIds = m_SandboxIds;
this->m_SandboxIdsCount = m_SandboxIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal::QueryOwnershipBySandboxIdsOptionsInternal()   {
}
