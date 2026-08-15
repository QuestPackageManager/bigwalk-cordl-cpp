#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SandboxDeploymentOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxDeploymentOverride_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::*)()>(&::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::__cordl_internal_get_sandboxID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::__cordl_internal_get_sandboxID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxID;
}
constexpr void PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::__cordl_internal_set_sandboxID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sandboxID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::__cordl_internal_get_deploymentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploymentID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::__cordl_internal_get_deploymentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploymentID;
}
constexpr void PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::__cordl_internal_set_deploymentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deploymentID = value;
}
inline void PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride* PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride::SandboxDeploymentOverride()   {
}
