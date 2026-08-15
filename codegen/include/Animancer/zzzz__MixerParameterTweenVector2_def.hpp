#pragma once
// IWYU pragma private; include "Animancer/MixerParameterTweenVector2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerParameterTween_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(MixerParameterTweenVector2)
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
class MixerParameterTweenVector2;
}
// Write type traits
MARK_REF_T(::Animancer::MixerParameterTweenVector2*);
DEFINE_IL2CPP_CLASS(::Animancer::MixerParameterTweenVector2*, "Animancer", "MixerParameterTweenVector2");
// Dependencies Animancer.MixerParameterTween`1<TParameter>, UnityEngine.Vector2
namespace Animancer {
// Is value type: false
// CS Name: Animancer.MixerParameterTweenVector2
class CORDL_TYPE MixerParameterTweenVector2 : public ::Animancer::MixerParameterTween_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief Method CalculateCurrentValue, addr 0x180311b20, size 0x80, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 CalculateCurrentValue() ;

static inline ::Animancer::MixerParameterTweenVector2* New_ctor() ;

static inline ::Animancer::MixerParameterTweenVector2* New_ctor(::Animancer::MixerState_1<::UnityEngine::Vector2>*  mixer) ;

/// @brief Method .ctor, addr 0x180311b10, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180311b00, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Animancer::MixerState_1<::UnityEngine::Vector2>*  mixer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerParameterTweenVector2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerParameterTweenVector2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerParameterTweenVector2(MixerParameterTweenVector2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerParameterTweenVector2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerParameterTweenVector2(MixerParameterTweenVector2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::MixerParameterTweenVector2) == 0x38, "Size mismatch!");

} // namespace end def Animancer
