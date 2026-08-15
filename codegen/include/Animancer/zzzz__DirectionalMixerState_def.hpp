#pragma once
// IWYU pragma private; include "Animancer/DirectionalMixerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalMixerState)
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
class DirectionalMixerState;
}
// Write type traits
MARK_REF_T(::Animancer::DirectionalMixerState*);
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalMixerState*, "Animancer", "DirectionalMixerState");
// Dependencies Animancer.MixerState`1<TParameter>, UnityEngine.Vector2
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DirectionalMixerState
class CORDL_TYPE DirectionalMixerState : public ::Animancer::MixerState_1<::UnityEngine::Vector2> {
public:
// Declarations
 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_ParameterX, put=set_ParameterX)) float_t  ParameterX;

 __declspec(property(get=get_ParameterY, put=set_ParameterY)) float_t  ParameterY;

/// @brief Field _BlendFactors, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__BlendFactors, put=__cordl_internal_set__BlendFactors)) ::ArrayW<::ArrayW<::UnityEngine::Vector2>>  _BlendFactors;

/// @brief Field _BlendFactorsDirty, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__BlendFactorsDirty, put=__cordl_internal_set__BlendFactorsDirty)) bool  _BlendFactorsDirty;

/// @brief Field _ThresholdMagnitudes, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ThresholdMagnitudes, put=__cordl_internal_set__ThresholdMagnitudes)) ::ArrayW<float_t>  _ThresholdMagnitudes;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.DirectionalMixerState>.CopyFrom, addr 0x1803097a0, size 0x80, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_DirectionalMixerState__CopyFrom(::Animancer::DirectionalMixerState*  copyFrom) ;

/// @brief Method AppendParameter, addr 0x180304d10, size 0x90, virtual true, abstract: false, final false
inline void AppendParameter(::System::Text::StringBuilder*  text, ::UnityEngine::Vector2  parameter) ;

/// @brief Method CalculateBlendFactors, addr 0x180309820, size 0x430, virtual false, abstract: false, final false
inline void CalculateBlendFactors(int32_t  childCount) ;

/// @brief Method Clone, addr 0x180309c50, size 0xd0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method ForceRecalculateWeights, addr 0x180309d20, size 0x3a0, virtual true, abstract: false, final false
inline void ForceRecalculateWeights() ;

/// @brief Method GetParameterError, addr 0x180305340, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetParameterError(::UnityEngine::Vector2  value) ;

/// @brief Method GetParameterName, addr 0x180305370, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetParameterName(int32_t  index) ;

/// @brief Method GetParameterType, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameterType GetParameterType(int32_t  index) ;

/// @brief Method GetParameterValue, addr 0x1803053b0, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* GetParameterValue(int32_t  index) ;

static inline ::Animancer::DirectionalMixerState* New_ctor() ;

/// @brief Method OnThresholdsChanged, addr 0x18030a0c0, size 0x10, virtual true, abstract: false, final false
inline void OnThresholdsChanged() ;

/// @brief Method SetParameterValue, addr 0x180305410, size 0xb0, virtual true, abstract: false, final false
inline void SetParameterValue(int32_t  index, ::System::Object*  value) ;

/// @brief Method SignedAngle, addr 0x18030a0d0, size 0x80, virtual false, abstract: false, final false
static inline float_t SignedAngle(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>> const& __cordl_internal_get__BlendFactors() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>>& __cordl_internal_get__BlendFactors() ;

constexpr bool const& __cordl_internal_get__BlendFactorsDirty() const;

constexpr bool& __cordl_internal_get__BlendFactorsDirty() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ThresholdMagnitudes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ThresholdMagnitudes() ;

constexpr void __cordl_internal_set__BlendFactors(::ArrayW<::ArrayW<::UnityEngine::Vector2>>  value) ;

constexpr void __cordl_internal_set__BlendFactorsDirty(bool  value) ;

constexpr void __cordl_internal_set__ThresholdMagnitudes(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x18030a150, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ParameterCount, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_ParameterX, addr 0x1803054e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ParameterX() ;

/// @brief Method get_ParameterY, addr 0x1803054f0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ParameterY() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>* i___Animancer__ICopyable_1___Animancer__DirectionalMixerState__() noexcept;

/// @brief Method set_ParameterX, addr 0x180305500, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterX(float_t  value) ;

/// @brief Method set_ParameterY, addr 0x180305520, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterY(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalMixerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalMixerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalMixerState(DirectionalMixerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalMixerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalMixerState(DirectionalMixerState const& ) = delete;

/// @brief Field AngleFactor offset 0xffffffff size 0x4
static constexpr float_t  AngleFactor{static_cast<float_t>(2.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18149};

/// @brief Field _ThresholdMagnitudes, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ThresholdMagnitudes;

/// @brief Field _BlendFactors, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Vector2>>  ____BlendFactors;

/// @brief Field _BlendFactorsDirty, offset: 0xc0, size: 0x1, def value: None
 bool  ____BlendFactorsDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DirectionalMixerState, ____ThresholdMagnitudes) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalMixerState, ____BlendFactors) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalMixerState, ____BlendFactorsDirty) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Animancer::DirectionalMixerState) == 0xc8, "Size mismatch!");

} // namespace end def Animancer
