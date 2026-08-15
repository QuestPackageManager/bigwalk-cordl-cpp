#pragma once
// IWYU pragma private; include "GlobalNamespace/EosApiKey.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__EosApiKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EosApiKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EosApiKey::*)()>(&::GlobalNamespace::EosApiKey::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181574880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EosApiKey*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicProductName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicProductName;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicProductName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicProductName;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicProductName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicProductName = value;
}
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicProductVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicProductVersion;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicProductVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicProductVersion;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicProductVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicProductVersion = value;
}
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicProductId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicProductId;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicProductId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicProductId;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicProductId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicProductId = value;
}
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicSandboxId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicSandboxId;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicSandboxId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicSandboxId;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicSandboxId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicSandboxId = value;
}
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicDeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicDeploymentId;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicDeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicDeploymentId;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicDeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicDeploymentId = value;
}
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicClientId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicClientId;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicClientId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicClientId;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicClientId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicClientId = value;
}
constexpr ::StringW& GlobalNamespace::EosApiKey::__cordl_internal_get_epicClientSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicClientSecret;
}
constexpr ::StringW const& GlobalNamespace::EosApiKey::__cordl_internal_get_epicClientSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicClientSecret;
}
constexpr void GlobalNamespace::EosApiKey::__cordl_internal_set_epicClientSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicClientSecret = value;
}
inline void GlobalNamespace::EosApiKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EosApiKey*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EosApiKey* GlobalNamespace::EosApiKey::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EosApiKey*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EosApiKey::EosApiKey()   {
}
