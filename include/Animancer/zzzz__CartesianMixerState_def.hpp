#pragma once
// IWYU pragma private; include "Animancer/CartesianMixerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CartesianMixerState)
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
class CartesianMixerState;
}
// Write type traits
MARK_REF_T(::Animancer::CartesianMixerState*);
DEFINE_IL2CPP_CLASS(::Animancer::CartesianMixerState*, "Animancer", "CartesianMixerState");
// Dependencies Animancer.MixerState`1<TParameter>, UnityEngine.Vector2
namespace Animancer {
// Is value type: false
// CS Name: Animancer.CartesianMixerState
class CORDL_TYPE CartesianMixerState : public ::Animancer::MixerState_1<::UnityEngine::Vector2> {
public:
// Declarations
 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_ParameterX, put=set_ParameterX)) float_t  ParameterX;

 __declspec(property(get=get_ParameterY, put=set_ParameterY)) float_t  ParameterY;

/// @brief Field _BlendFactors, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__BlendFactors, put=__cordl_internal_set__BlendFactors)) ::ArrayW<::ArrayW<::UnityEngine::Vector2>>  _BlendFactors;

/// @brief Field _BlendFactorsDirty, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__BlendFactorsDirty, put=__cordl_internal_set__BlendFactorsDirty)) bool  _BlendFactorsDirty;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.CartesianMixerState>.CopyFrom, addr 0x180304ca0, size 0x70, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_CartesianMixerState__CopyFrom(::Animancer::CartesianMixerState*  copyFrom) ;

/// @brief Method AppendParameter, addr 0x180304d10, size 0x90, virtual true, abstract: false, final false
inline void AppendParameter(::System::Text::StringBuilder*  text, ::UnityEngine::Vector2  parameter) ;

/// @brief Method CalculateBlendFactors, addr 0x180304da0, size 0x220, virtual false, abstract: false, final false
inline void CalculateBlendFactors(int32_t  childCount) ;

/// @brief Method Clone, addr 0x180304fc0, size 0xd0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method ForceRecalculateWeights, addr 0x180305090, size 0x2b0, virtual true, abstract: false, final false
inline void ForceRecalculateWeights() ;

/// @brief Method GetParameterError, addr 0x180305340, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetParameterError(::UnityEngine::Vector2  value) ;

/// @brief Method GetParameterName, addr 0x180305370, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetParameterName(int32_t  index) ;

/// @brief Method GetParameterType, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameterType GetParameterType(int32_t  index) ;

/// @brief Method GetParameterValue, addr 0x1803053b0, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* GetParameterValue(int32_t  index) ;

static inline ::Animancer::CartesianMixerState* New_ctor() ;

/// @brief Method OnThresholdsChanged, addr 0x180305400, size 0x10, virtual true, abstract: false, final false
inline void OnThresholdsChanged() ;

/// @brief Method SetParameterValue, addr 0x180305410, size 0xb0, virtual true, abstract: false, final false
inline void SetParameterValue(int32_t  index, ::System::Object*  value) ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>> const& __cordl_internal_get__BlendFactors() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>>& __cordl_internal_get__BlendFactors() ;

constexpr bool const& __cordl_internal_get__BlendFactorsDirty() const;

constexpr bool& __cordl_internal_get__BlendFactorsDirty() ;

constexpr void __cordl_internal_set__BlendFactors(::ArrayW<::ArrayW<::UnityEngine::Vector2>>  value) ;

constexpr void __cordl_internal_set__BlendFactorsDirty(bool  value) ;

/// @brief Method .ctor, addr 0x1803054c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ParameterCount, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_ParameterX, addr 0x1803054e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ParameterX() ;

/// @brief Method get_ParameterY, addr 0x1803054f0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ParameterY() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>* i___Animancer__ICopyable_1___Animancer__CartesianMixerState__() noexcept;

/// @brief Method set_ParameterX, addr 0x180305500, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterX(float_t  value) ;

/// @brief Method set_ParameterY, addr 0x180305520, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterY(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CartesianMixerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CartesianMixerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CartesianMixerState(CartesianMixerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CartesianMixerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CartesianMixerState(CartesianMixerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18148};

/// @brief Field _BlendFactors, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Vector2>>  ____BlendFactors;

/// @brief Field _BlendFactorsDirty, offset: 0xb8, size: 0x1, def value: None
 bool  ____BlendFactorsDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::CartesianMixerState, ____BlendFactors) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Animancer::CartesianMixerState, ____BlendFactorsDirty) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Animancer::CartesianMixerState) == 0xc0, "Size mismatch!");

} // namespace end def Animancer
