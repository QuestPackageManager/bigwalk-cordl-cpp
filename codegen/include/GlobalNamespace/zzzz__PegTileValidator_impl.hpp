#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileValidator.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__PropHomeBlock_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileValidator_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSequenceGenerator_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__ValidatorDisplay_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.get_sequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::get_sequence)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18040da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"get_sequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::Awake)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18040d0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18040d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.OnPropHomeChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::PegTileValidator::OnPropHomeChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnPropHomeChange", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.AfterDrumRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::AfterDrumRoll)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18040ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"AfterDrumRoll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PegTileValidator::Peck)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18040d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.AreAllHomesFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::AreAllHomesFull)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18040d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"AreAllHomesFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.IsReadyToValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::IsReadyToValidate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18040d5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"IsReadyToValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.ConditionIsMet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::ConditionIsMet)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18040d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"ConditionIsMet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.OnSequenceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::OnSequenceChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnSequenceChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.OnHomeOrSequenceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::OnHomeOrSequenceChange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18040d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnHomeOrSequenceChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.SetIsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)(bool)>(&::GlobalNamespace::PegTileValidator::SetIsPlaying)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18040d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"SetIsPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18040d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileValidator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileValidator::*)()>(&::GlobalNamespace::PegTileValidator::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18040d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>& GlobalNamespace::PegTileValidator::__cordl_internal_get_sequenceGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceGenerator;
}
constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_sequenceGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceGenerator;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_sequenceGenerator(::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequenceGenerator = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>>& GlobalNamespace::PegTileValidator::__cordl_internal_get_propHomeBlocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlocks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_propHomeBlocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlocks;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_propHomeBlocks(::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomeBlocks = value;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& GlobalNamespace::PegTileValidator::__cordl_internal_get_validatorDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatorDisplay;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_validatorDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatorDisplay;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_validatorDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validatorDisplay = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PegTileValidator::__cordl_internal_get_peckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PegTileValidator::__cordl_internal_get_peckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystem = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PegTileValidator::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PegTileValidator::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PegTileValidator::__cordl_internal_get_onSucess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSucess;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_onSucess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSucess;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_onSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSucess = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PegTileValidator::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_onFailure(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFailure = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PegTileValidator::__cordl_internal_get_onButtonPrimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonPrimed;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_onButtonPrimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonPrimed;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_onButtonPrimed(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onButtonPrimed = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PegTileValidator::__cordl_internal_get_onButtonUnprimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonUnprimed;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PegTileValidator::__cordl_internal_get_onButtonUnprimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonUnprimed;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_onButtonUnprimed(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onButtonUnprimed = value;
}
constexpr bool& GlobalNamespace::PegTileValidator::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PegTileValidator::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::PegTileValidator::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::PegTileValidator::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr bool& GlobalNamespace::PegTileValidator::__cordl_internal_get_isPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr bool const& GlobalNamespace::PegTileValidator::__cordl_internal_get_isPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_isPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlaying = value;
}
constexpr double_t& GlobalNamespace::PegTileValidator::__cordl_internal_get_timeAtStartValidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtStartValidate;
}
constexpr double_t const& GlobalNamespace::PegTileValidator::__cordl_internal_get_timeAtStartValidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtStartValidate;
}
constexpr void GlobalNamespace::PegTileValidator::__cordl_internal_set_timeAtStartValidate(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtStartValidate = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* GlobalNamespace::PegTileValidator::get_sequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"get_sequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::OnPropHomeChange(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnPropHomeChange", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, propBefore, propAfter);
}
inline void GlobalNamespace::PegTileValidator::AfterDrumRoll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"AfterDrumRoll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline bool GlobalNamespace::PegTileValidator::AreAllHomesFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"AreAllHomesFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PegTileValidator::IsReadyToValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"IsReadyToValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PegTileValidator::ConditionIsMet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"ConditionIsMet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::OnSequenceChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnSequenceChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::OnHomeOrSequenceChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnHomeOrSequenceChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::SetIsPlaying(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"SetIsPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::PegTileValidator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileValidator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileValidator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PegTileValidator* GlobalNamespace::PegTileValidator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileValidator*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::PegTileValidator::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::PegTileValidator::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileValidator::PegTileValidator()   {
}
