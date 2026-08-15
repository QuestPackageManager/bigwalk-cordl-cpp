#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ProductionEnvironments.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ProductionEnvironments_def.hpp"
#include "PlayEveryWare/Common/zzzz__Named_1_def.hpp"
#include "PlayEveryWare/Common/zzzz__SetOfNamed_1_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Deployment_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxId_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments.get_Deployments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>* (::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::get_Deployments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"get_Deployments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments.get_Sandboxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>* (::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::get_Sandboxes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"get_Sandboxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180546290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments.TryGetFirstDefinedNamedDeployment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::*)(::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>)>(&::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::TryGetFirstDefinedNamedDeployment)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805461a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"TryGetFirstDefinedNamedDeployment", {}, {::i2c::type_of<::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments.CanSandboxBeRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::*)(::PlayEveryWare::EpicOnlineServices::SandboxId)>(&::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::CanSandboxBeRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180546110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"CanSandboxBeRemoved", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::SandboxId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments.AddDeployment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::*)(::PlayEveryWare::EpicOnlineServices::Deployment)>(&::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::AddDeployment)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805460a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"AddDeployment", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::Deployment>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*& PlayEveryWare::EpicOnlineServices::ProductionEnvironments::__cordl_internal_get__Deployments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Deployments_k__BackingField;
}
constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>* const& PlayEveryWare::EpicOnlineServices::ProductionEnvironments::__cordl_internal_get__Deployments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Deployments_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductionEnvironments::__cordl_internal_set__Deployments_k__BackingField(::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Deployments_k__BackingField = value;
}
constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*& PlayEveryWare::EpicOnlineServices::ProductionEnvironments::__cordl_internal_get__Sandboxes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sandboxes_k__BackingField;
}
constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>* const& PlayEveryWare::EpicOnlineServices::ProductionEnvironments::__cordl_internal_get__Sandboxes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sandboxes_k__BackingField;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductionEnvironments::__cordl_internal_set__Sandboxes_k__BackingField(::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sandboxes_k__BackingField = value;
}
inline ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>* PlayEveryWare::EpicOnlineServices::ProductionEnvironments::get_Deployments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"get_Deployments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>(this, ___internal_method);
}
inline ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>* PlayEveryWare::EpicOnlineServices::ProductionEnvironments::get_Sandboxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"get_Sandboxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::ProductionEnvironments::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::ProductionEnvironments::TryGetFirstDefinedNamedDeployment(::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>  deployment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"TryGetFirstDefinedNamedDeployment", {}, {::i2c::type_of<::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deployment);
}
inline bool PlayEveryWare::EpicOnlineServices::ProductionEnvironments::CanSandboxBeRemoved(::PlayEveryWare::EpicOnlineServices::SandboxId  sandbox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"CanSandboxBeRemoved", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::SandboxId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sandbox);
}
inline bool PlayEveryWare::EpicOnlineServices::ProductionEnvironments::AddDeployment(::PlayEveryWare::EpicOnlineServices::Deployment  deployment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>(),
                        {"AddDeployment", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::Deployment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deployment);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments* PlayEveryWare::EpicOnlineServices::ProductionEnvironments::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments::ProductionEnvironments()   {
}
