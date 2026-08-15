#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/DesktopCrossplayStatusInfo.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatus_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatusInfo_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatus_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::DesktopCrossplayStatus (::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::*)()>(&::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::get_Status)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::*)(::Epic::OnlineServices::Platform::DesktopCrossplayStatus)>(&::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::set_Status)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"set_Status", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo.get_ServiceInitResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::*)()>(&::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::get_ServiceInitResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"get_ServiceInitResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo.set_ServiceInitResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::*)(int32_t)>(&::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::set_ServiceInitResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"set_ServiceInitResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Platform::DesktopCrossplayStatus Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::DesktopCrossplayStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::set_Status(::Epic::OnlineServices::Platform::DesktopCrossplayStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"set_Status", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::get_ServiceInitResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"get_ServiceInitResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::set_ServiceInitResult(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>(),
                        {"set_ServiceInitResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::Platform::DesktopCrossplayStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ServiceInitResult_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::DesktopCrossplayStatusInfo(::Epic::OnlineServices::Platform::DesktopCrossplayStatus  _Status_k__BackingField, int32_t  _ServiceInitResult_k__BackingField) noexcept  {
this->_Status_k__BackingField = _Status_k__BackingField;
this->_ServiceInitResult_k__BackingField = _ServiceInitResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo::DesktopCrossplayStatusInfo()   {
}
