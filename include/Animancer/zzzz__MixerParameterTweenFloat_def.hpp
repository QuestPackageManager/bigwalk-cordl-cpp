#pragma once
// IWYU pragma private; include "Animancer/MixerParameterTweenFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerParameterTween_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MixerParameterTweenFloat)
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
// Forward declare root types
namespace Animancer {
class MixerParameterTweenFloat;
}
// Write type traits
MARK_REF_T(::Animancer::MixerParameterTweenFloat*);
DEFINE_IL2CPP_CLASS(::Animancer::MixerParameterTweenFloat*, "Animancer", "MixerParameterTweenFloat");
// Dependencies Animancer.MixerParameterTween`1<TParameter>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.MixerParameterTweenFloat
class CORDL_TYPE MixerParameterTweenFloat : public ::Animancer::MixerParameterTween_1<float_t> {
public:
// Declarations
/// @brief Method CalculateCurrentValue, addr 0x180311ac0, size 0x40, virtual true, abstract: false, final false
inline float_t CalculateCurrentValue() ;

static inline ::Animancer::MixerParameterTweenFloat* New_ctor() ;

static inline ::Animancer::MixerParameterTweenFloat* New_ctor(::Animancer::MixerState_1<float_t>*  mixer) ;

/// @brief Method .ctor, addr 0x180311b10, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180311b00, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Animancer::MixerState_1<float_t>*  mixer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerParameterTweenFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerParameterTweenFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerParameterTweenFloat(MixerParameterTweenFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerParameterTweenFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerParameterTweenFloat(MixerParameterTweenFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::MixerParameterTweenFloat) == 0x30, "Size mismatch!");

} // namespace end def Animancer
