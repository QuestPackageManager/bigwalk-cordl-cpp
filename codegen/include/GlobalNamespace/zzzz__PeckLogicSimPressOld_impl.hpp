#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckLogicSimPressOld.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckLogicSimPressOld_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckLogicSimPressOld.get_targetSystems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> (::GlobalNamespace::PeckLogicSimPressOld::*)()>(&::GlobalNamespace::PeckLogicSimPressOld::get_targetSystems)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180451600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {"get_targetSystems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckLogicSimPressOld.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckLogicSimPressOld::*)()>(&::GlobalNamespace::PeckLogicSimPressOld::Awake)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804511a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckLogicSimPressOld.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckLogicSimPressOld::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckLogicSimPressOld::Peck)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804513d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckLogicSimPressOld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckLogicSimPressOld::*)()>(&::GlobalNamespace::PeckLogicSimPressOld::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f9ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_trackedStateSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_trackedStateSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystems;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_trackedStateSystems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystems = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_peckSystemBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemBlock;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_peckSystemBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemBlock;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_peckSystemBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemBlock = value;
}
constexpr int32_t& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_goodState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodState;
}
constexpr int32_t const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_goodState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodState;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_goodState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodState = value;
}
constexpr int32_t& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_minPresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPresses;
}
constexpr int32_t const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_minPresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPresses;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_minPresses(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minPresses = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_notSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notSystems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_notSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notSystems;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_notSystems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notSystems = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_onSucess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSucess;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_onSucess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSucess;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_onSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSucess = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_directControlSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directControlSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_directControlSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directControlSystem;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_directControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directControlSystem = value;
}
constexpr bool& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::StringW& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr ::StringW const& GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_get_notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr void GlobalNamespace::PeckLogicSimPressOld::__cordl_internal_set_notes(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notes = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> GlobalNamespace::PeckLogicSimPressOld::get_targetSystems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {"get_targetSystems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>>(this, ___internal_method);
}
inline void GlobalNamespace::PeckLogicSimPressOld::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckLogicSimPressOld::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckLogicSimPressOld::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicSimPressOld*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckLogicSimPressOld* GlobalNamespace::PeckLogicSimPressOld::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckLogicSimPressOld*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckLogicSimPressOld::PeckLogicSimPressOld()   {
}
