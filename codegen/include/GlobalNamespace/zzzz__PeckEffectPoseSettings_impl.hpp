#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPoseSettings.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPoseSettings_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPoseSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPoseSettings::*)()>(&::GlobalNamespace::PeckEffectPoseSettings::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044bdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPoseSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPoseSettings.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPoseSettings::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPoseSettings::OnPeck)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044be60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPoseSettings*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPoseSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPoseSettings::*)()>(&::GlobalNamespace::PeckEffectPoseSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPoseSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_targetPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_targetPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPose;
}
constexpr void GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_set_targetPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPose = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_leaveWithJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveWithJump;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_leaveWithJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveWithJump;
}
constexpr void GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_set_leaveWithJump(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaveWithJump = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_entryIsBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryIsBlocked;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_get_entryIsBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryIsBlocked;
}
constexpr void GlobalNamespace::PeckEffectPoseSettings::__cordl_internal_set_entryIsBlocked(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryIsBlocked = value;
}
inline void GlobalNamespace::PeckEffectPoseSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPoseSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPoseSettings::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPoseSettings*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPoseSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPoseSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectPoseSettings* GlobalNamespace::PeckEffectPoseSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPoseSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPoseSettings::PeckEffectPoseSettings()   {
}
