#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/DesktopCrossplayStatusInfoInternal.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatus_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatusInfoInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatusInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::*)(::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>)>(&::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::Get(::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>"
constexpr  Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>* Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Platform__DesktopCrossplayStatusInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Status", ty: "::Epic::OnlineServices::Platform::DesktopCrossplayStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ServiceInitResult", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::DesktopCrossplayStatusInfoInternal(::Epic::OnlineServices::Platform::DesktopCrossplayStatus  m_Status, int32_t  m_ServiceInitResult) noexcept  {
this->m_Status = m_Status;
this->m_ServiceInitResult = m_ServiceInitResult;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal::DesktopCrossplayStatusInfoInternal()   {
}
