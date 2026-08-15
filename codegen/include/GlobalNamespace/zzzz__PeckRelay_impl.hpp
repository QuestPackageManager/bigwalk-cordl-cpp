#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckRelay.hpp"
#include "GlobalNamespace/zzzz__PeckOutputRules_impl.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckRelay_def.hpp"
#include "GlobalNamespace/zzzz__PeckBus_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckRelay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckRelay::*)()>(&::GlobalNamespace::PeckRelay::Awake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180453160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckRelay.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckRelay::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckRelay::Peck)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x180453530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckRelay.PeckToSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckRelay::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckRelay::PeckToSystem)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180453350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"PeckToSystem", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckRelay.PeckBackToInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckRelay::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckRelay::PeckBackToInput)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180453300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"PeckBackToInput", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckRelay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckRelay::*)()>(&::GlobalNamespace::PeckRelay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckRelay::__cordl_internal_get_inputStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckRelay::__cordl_internal_get_inputStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputStateSystem;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_inputStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputStateSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& GlobalNamespace::PeckRelay::__cordl_internal_get_inputBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBlock;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& GlobalNamespace::PeckRelay::__cordl_internal_get_inputBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBlock;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_inputBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBlock = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckRelay::__cordl_internal_get_inputFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckRelay::__cordl_internal_get_inputFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputFilter;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_inputFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckRelay::__cordl_internal_get_outputStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckRelay::__cordl_internal_get_outputStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputStateSystem;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_outputStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputStateSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& GlobalNamespace::PeckRelay::__cordl_internal_get_outputBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputBlock;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& GlobalNamespace::PeckRelay::__cordl_internal_get_outputBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputBlock;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_outputBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputBlock = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckBus>& GlobalNamespace::PeckRelay::__cordl_internal_get_outputBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputBus;
}
constexpr ::UnityW<::GlobalNamespace::PeckBus> const& GlobalNamespace::PeckRelay::__cordl_internal_get_outputBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputBus;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_outputBus(::UnityW<::GlobalNamespace::PeckBus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputBus = value;
}
constexpr ::GlobalNamespace::PeckOutputRules& GlobalNamespace::PeckRelay::__cordl_internal_get_outputRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputRules;
}
constexpr ::GlobalNamespace::PeckOutputRules const& GlobalNamespace::PeckRelay::__cordl_internal_get_outputRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputRules;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_outputRules(::GlobalNamespace::PeckOutputRules  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputRules = value;
}
constexpr bool& GlobalNamespace::PeckRelay::__cordl_internal_get_baseOnOutputSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseOnOutputSystem;
}
constexpr bool const& GlobalNamespace::PeckRelay::__cordl_internal_get_baseOnOutputSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseOnOutputSystem;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_baseOnOutputSystem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseOnOutputSystem = value;
}
constexpr bool& GlobalNamespace::PeckRelay::__cordl_internal_get_baseOnPropSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseOnPropSystem;
}
constexpr bool const& GlobalNamespace::PeckRelay::__cordl_internal_get_baseOnPropSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseOnPropSystem;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_baseOnPropSystem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseOnPropSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckRelay::__cordl_internal_get_outputSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckRelay::__cordl_internal_get_outputSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSwitch;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_outputSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputSwitch = value;
}
constexpr bool& GlobalNamespace::PeckRelay::__cordl_internal_get_keepInSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepInSync;
}
constexpr bool const& GlobalNamespace::PeckRelay::__cordl_internal_get_keepInSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepInSync;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_keepInSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepInSync = value;
}
constexpr bool& GlobalNamespace::PeckRelay::__cordl_internal_get_onlyOnInitial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyOnInitial;
}
constexpr bool const& GlobalNamespace::PeckRelay::__cordl_internal_get_onlyOnInitial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyOnInitial;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_onlyOnInitial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyOnInitial = value;
}
constexpr bool& GlobalNamespace::PeckRelay::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckRelay::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckRelay::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckRelay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckRelay::Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  inputSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, inputSystem);
}
inline void GlobalNamespace::PeckRelay::PeckToSystem(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"PeckToSystem", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, system);
}
inline void GlobalNamespace::PeckRelay::PeckBackToInput(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {"PeckBackToInput", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckRelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckRelay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckRelay* GlobalNamespace::PeckRelay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckRelay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckRelay::PeckRelay()   {
}
