#pragma once
// IWYU pragma private; include "GlobalNamespace/BlindfoldPopper.hpp"
#include "GlobalNamespace/zzzz__Launcher_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlindfoldPopper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlindfoldPopper.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlindfoldPopper::*)()>(&::GlobalNamespace::BlindfoldPopper::Launch)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803f7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlindfoldPopper*>(),
                        {"Launch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlindfoldPopper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlindfoldPopper::*)()>(&::GlobalNamespace::BlindfoldPopper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlindfoldPopper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::BlindfoldPopper::__cordl_internal_get_playerPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::BlindfoldPopper::__cordl_internal_get_playerPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPose;
}
constexpr void GlobalNamespace::BlindfoldPopper::__cordl_internal_set_playerPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPose = value;
}
constexpr ::GlobalNamespace::Launcher& GlobalNamespace::BlindfoldPopper::__cordl_internal_get_launcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launcher;
}
constexpr ::GlobalNamespace::Launcher const& GlobalNamespace::BlindfoldPopper::__cordl_internal_get_launcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launcher;
}
constexpr void GlobalNamespace::BlindfoldPopper::__cordl_internal_set_launcher(::GlobalNamespace::Launcher  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launcher = value;
}
inline void GlobalNamespace::BlindfoldPopper::Launch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlindfoldPopper*>(),
                        {"Launch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlindfoldPopper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlindfoldPopper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlindfoldPopper* GlobalNamespace::BlindfoldPopper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlindfoldPopper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlindfoldPopper::BlindfoldPopper()   {
}
