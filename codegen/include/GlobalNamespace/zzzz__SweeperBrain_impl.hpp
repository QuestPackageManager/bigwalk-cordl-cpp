#pragma once
// IWYU pragma private; include "GlobalNamespace/SweeperBrain.hpp"
#include "GlobalNamespace/zzzz__CapsuleBomb_impl.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SweeperBrain_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)()>(&::GlobalNamespace::SweeperBrain::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180417000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.SetRandomBombs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)()>(&::GlobalNamespace::SweeperBrain::SetRandomBombs)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180417890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"SetRandomBombs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.ResetPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::SweeperBrain::ResetPeck)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180417650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"ResetPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.ClearPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::SweeperBrain::ClearPeck)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180417120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"ClearPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)()>(&::GlobalNamespace::SweeperBrain::Clear)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180417240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.ServerSetIndicatorsToIndicate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)()>(&::GlobalNamespace::SweeperBrain::ServerSetIndicatorsToIndicate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804177f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"ServerSetIndicatorsToIndicate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.InputPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::SweeperBrain::InputPeck)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x180417330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"InputPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain.AreAllRemainingInputsBombs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SweeperBrain::*)()>(&::GlobalNamespace::SweeperBrain::AreAllRemainingInputsBombs)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180416f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"AreAllRemainingInputsBombs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SweeperBrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SweeperBrain::*)()>(&::GlobalNamespace::SweeperBrain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>& GlobalNamespace::SweeperBrain::__cordl_internal_get_inputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>> const& GlobalNamespace::SweeperBrain::__cordl_internal_get_inputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputs;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_inputs(::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>& GlobalNamespace::SweeperBrain::__cordl_internal_get_indicators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indicators;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>> const& GlobalNamespace::SweeperBrain::__cordl_internal_get_indicators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indicators;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_indicators(::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indicators = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::SweeperBrain::__cordl_internal_get_resetInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetInput;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::SweeperBrain::__cordl_internal_get_resetInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetInput;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_resetInput(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetInput = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::SweeperBrain::__cordl_internal_get_resetStateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetStateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::SweeperBrain::__cordl_internal_get_resetStateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetStateFilter;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_resetStateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetStateFilter = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::SweeperBrain::__cordl_internal_get_clearInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearInput;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::SweeperBrain::__cordl_internal_get_clearInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearInput;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_clearInput(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearInput = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::SweeperBrain::__cordl_internal_get_clearStateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearStateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::SweeperBrain::__cordl_internal_get_clearStateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearStateFilter;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_clearStateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearStateFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::SweeperBrain::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::SweeperBrain::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_onSuccess(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSuccess = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::SweeperBrain::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::SweeperBrain::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_onFailure(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFailure = value;
}
constexpr int32_t& GlobalNamespace::SweeperBrain::__cordl_internal_get_bombCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bombCount;
}
constexpr int32_t const& GlobalNamespace::SweeperBrain::__cordl_internal_get_bombCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bombCount;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_bombCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bombCount = value;
}
constexpr bool& GlobalNamespace::SweeperBrain::__cordl_internal_get_scrambleOnReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrambleOnReset;
}
constexpr bool const& GlobalNamespace::SweeperBrain::__cordl_internal_get_scrambleOnReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrambleOnReset;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_scrambleOnReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrambleOnReset = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::SweeperBrain::__cordl_internal_get_bombs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bombs;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::SweeperBrain::__cordl_internal_get_bombs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bombs;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_bombs(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bombs = value;
}
constexpr bool& GlobalNamespace::SweeperBrain::__cordl_internal_get_isPrimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrimed;
}
constexpr bool const& GlobalNamespace::SweeperBrain::__cordl_internal_get_isPrimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrimed;
}
constexpr void GlobalNamespace::SweeperBrain::__cordl_internal_set_isPrimed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPrimed = value;
}
inline void GlobalNamespace::SweeperBrain::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SweeperBrain::SetRandomBombs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"SetRandomBombs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SweeperBrain::ResetPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"ResetPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::SweeperBrain::ClearPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"ClearPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::SweeperBrain::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SweeperBrain::ServerSetIndicatorsToIndicate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"ServerSetIndicatorsToIndicate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SweeperBrain::InputPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"InputPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, peckSystem);
}
inline bool GlobalNamespace::SweeperBrain::AreAllRemainingInputsBombs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {"AreAllRemainingInputsBombs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SweeperBrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SweeperBrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SweeperBrain* GlobalNamespace::SweeperBrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SweeperBrain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SweeperBrain::SweeperBrain()   {
}
