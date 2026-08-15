#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckCombinator.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckCombinator_def.hpp"
#include "GlobalNamespace/zzzz__PeckCombinator_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator_PeckRule.get_bestSystemsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> (::GlobalNamespace::PeckCombinator_PeckRule::*)()>(&::GlobalNamespace::PeckCombinator_PeckRule::get_bestSystemsList)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180453a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator_PeckRule>(),
                        {"get_bestSystemsList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator_PeckRule.IsConditionMet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckCombinator_PeckRule::*)()>(&::GlobalNamespace::PeckCombinator_PeckRule::IsConditionMet)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180453980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator_PeckRule>(),
                        {"IsConditionMet", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> GlobalNamespace::PeckCombinator_PeckRule::get_bestSystemsList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator_PeckRule>(),
                        {"get_bestSystemsList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>>(*this, ___internal_method);
}
inline bool GlobalNamespace::PeckCombinator_PeckRule::IsConditionMet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator_PeckRule>(),
                        {"IsConditionMet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "systems", ty: "::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "block", ty: "::UnityW<::GlobalNamespace::PeckSystemBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "desiredState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "desiredStates", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minimumMatches", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMaximum", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximumMatches", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckCombinator_PeckRule::PeckCombinator_PeckRule(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  systems, ::UnityW<::GlobalNamespace::PeckSystemBlock>  block, int32_t  desiredState, ::ArrayW<int32_t>  desiredStates, int32_t  minimumMatches, bool  hasMaximum, int32_t  maximumMatches) noexcept  {
this->systems = systems;
this->block = block;
this->desiredState = desiredState;
this->desiredStates = desiredStates;
this->minimumMatches = minimumMatches;
this->hasMaximum = hasMaximum;
this->maximumMatches = maximumMatches;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckCombinator_PeckRule::PeckCombinator_PeckRule()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckCombinator::*)()>(&::GlobalNamespace::PeckCombinator::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180446970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator.AreAllConditionsMet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckCombinator::*)()>(&::GlobalNamespace::PeckCombinator::AreAllConditionsMet)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804468e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"AreAllConditionsMet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckCombinator::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckCombinator::OnChange)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180446a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"OnChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator.Test
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckCombinator::*)()>(&::GlobalNamespace::PeckCombinator::Test)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180446df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"Test", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckCombinator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckCombinator::*)()>(&::GlobalNamespace::PeckCombinator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckCombinator::__cordl_internal_get_directControlSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directControlSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckCombinator::__cordl_internal_get_directControlSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directControlSystem;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_directControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directControlSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& GlobalNamespace::PeckCombinator::__cordl_internal_get_directControlBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directControlBlock;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& GlobalNamespace::PeckCombinator::__cordl_internal_get_directControlBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directControlBlock;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_directControlBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directControlBlock = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckCombinator::__cordl_internal_get_onConditionMet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConditionMet;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckCombinator::__cordl_internal_get_onConditionMet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConditionMet;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_onConditionMet(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onConditionMet = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckCombinator::__cordl_internal_get_onConditionStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConditionStop;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckCombinator::__cordl_internal_get_onConditionStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConditionStop;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_onConditionStop(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onConditionStop = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule>& GlobalNamespace::PeckCombinator::__cordl_internal_get_rules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rules;
}
constexpr ::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule> const& GlobalNamespace::PeckCombinator::__cordl_internal_get_rules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rules;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_rules(::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rules = value;
}
constexpr bool& GlobalNamespace::PeckCombinator::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckCombinator::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PeckCombinator::__cordl_internal_get_conditionIsMet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conditionIsMet;
}
constexpr bool const& GlobalNamespace::PeckCombinator::__cordl_internal_get_conditionIsMet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conditionIsMet;
}
constexpr void GlobalNamespace::PeckCombinator::__cordl_internal_set_conditionIsMet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conditionIsMet = value;
}
inline void GlobalNamespace::PeckCombinator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PeckCombinator::AreAllConditionsMet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"AreAllConditionsMet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PeckCombinator::OnChange(::GlobalNamespace::PeckContext  peck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"OnChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peck);
}
inline void GlobalNamespace::PeckCombinator::Test()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {"Test", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckCombinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCombinator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckCombinator* GlobalNamespace::PeckCombinator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckCombinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckCombinator::PeckCombinator()   {
}
