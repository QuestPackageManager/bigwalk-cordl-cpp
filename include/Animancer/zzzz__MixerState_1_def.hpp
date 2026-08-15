#pragma once
// IWYU pragma private; include "Animancer/MixerState_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ManualMixerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MixerState_1)
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ClipState;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class ITransition;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::MixerState_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::MixerState_1, "Animancer", "MixerState`1");
// Dependencies Animancer.ManualMixerState
namespace Animancer {
// cpp template
template<typename TParameter>
// Is value type: false
// CS Name: Animancer.MixerState`1<TParameter>
class CORDL_TYPE MixerState_1 : public ::Animancer::ManualMixerState {
public:
// Declarations
 __declspec(property(get=get_HasThresholds)) bool  HasThresholds;

 __declspec(property(get=get_Parameter, put=set_Parameter)) TParameter  Parameter;

/// @brief Field _Parameter, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parameter, put=__cordl_internal_set__Parameter)) TParameter  _Parameter;

/// @brief Field _Thresholds, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Thresholds, put=__cordl_internal_set__Thresholds)) ::ArrayW<TParameter>  _Thresholds;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Add(::System::Object*  child, TParameter  threshold) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Add(::Animancer::ITransition*  transition, TParameter  threshold) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::ClipState* Add(::UnityEngine::AnimationClip*  clip, TParameter  threshold) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(::Animancer::AnimancerState*  state, TParameter  threshold) ;

/// @brief Method Animancer.ICopyable<Animancer.MixerState<TParameter>>.CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_MixerState_TParameter___CopyFrom(::Animancer::MixerState_1<TParameter>*  copyFrom) ;

/// @brief Method AppendDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method AppendParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AppendParameter(::System::Text::StringBuilder*  description, TParameter  parameter) ;

/// @brief Method CalculateThresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CalculateThresholds(::System::Func_2<::Animancer::AnimancerState*,TParameter>*  calculate) ;

/// @brief Method GetDisplayKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetDisplayKey(::Animancer::AnimancerState*  state) ;

/// @brief Method GetParameterError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetParameterError(TParameter  parameter) ;

/// @brief Method GetThreshold, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TParameter GetThreshold(int32_t  index) ;

static inline ::Animancer::MixerState_1<TParameter>* New_ctor() ;

/// @brief Method OnChildCapacityChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnChildCapacityChanged() ;

/// @brief Method OnThresholdsChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnThresholdsChanged() ;

/// @brief Method RecreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RecreatePlayable() ;

/// @brief Method SetThreshold, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetThreshold(int32_t  index, TParameter  threshold) ;

/// @brief Method SetThresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetThresholds(::ArrayW<TParameter>  thresholds) ;

/// @brief Method ValidateThresholdCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ValidateThresholdCount() ;

constexpr TParameter const& __cordl_internal_get__Parameter() const;

constexpr TParameter& __cordl_internal_get__Parameter() ;

constexpr ::ArrayW<TParameter> const& __cordl_internal_get__Thresholds() const;

constexpr ::ArrayW<TParameter>& __cordl_internal_get__Thresholds() ;

constexpr void __cordl_internal_set__Parameter(TParameter  value) ;

constexpr void __cordl_internal_set__Thresholds(::ArrayW<TParameter>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasThresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasThresholds() ;

/// @brief Method get_Parameter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TParameter get_Parameter() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>"
constexpr ::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>* i___Animancer__ICopyable_1___Animancer__MixerState_1_TParameter___() noexcept;

/// @brief Method set_Parameter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Parameter(TParameter  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerState_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerState_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerState_1(MixerState_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerState_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerState_1(MixerState_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18155};

/// @brief Field _Thresholds, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<TParameter>  ____Thresholds;

/// @brief Field _Parameter, offset: 0xa8, size: 0x8, def value: None
 TParameter  ____Parameter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
