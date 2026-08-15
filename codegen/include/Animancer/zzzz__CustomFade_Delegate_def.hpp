#pragma once
// IWYU pragma private; include "Animancer/CustomFade_Delegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__CustomFade_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomFade_Delegate)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomFade_Delegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomFade_Delegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomFade_Delegate*, "Animancer", "CustomFade/Delegate");
// Dependencies Animancer.CustomFade
namespace GlobalNamespace {
// Is value type: false
// CS Name: Animancer.CustomFade/Delegate
class CORDL_TYPE CustomFade_Delegate : public ::Animancer::CustomFade {
public:
// Declarations
/// @brief Field _CalculateWeight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__CalculateWeight, put=__cordl_internal_set__CalculateWeight)) ::System::Func_2<float_t,float_t>*  _CalculateWeight;

/// @brief Method Acquire, addr 0x180308530, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CustomFade_Delegate* Acquire(::System::Func_2<float_t,float_t>*  calculateWeight) ;

/// @brief Method CalculateWeight, addr 0x1803085a0, size 0x30, virtual true, abstract: false, final false
inline float_t CalculateWeight(float_t  progress) ;

static inline ::GlobalNamespace::CustomFade_Delegate* New_ctor() ;

/// @brief Method Release, addr 0x1803085d0, size 0x40, virtual true, abstract: false, final false
inline void Release() ;

constexpr ::System::Func_2<float_t,float_t>* const& __cordl_internal_get__CalculateWeight() const;

constexpr ::System::Func_2<float_t,float_t>*& __cordl_internal_get__CalculateWeight() ;

constexpr void __cordl_internal_set__CalculateWeight(::System::Func_2<float_t,float_t>*  value) ;

/// @brief Method .ctor, addr 0x180307750, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomFade_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomFade_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomFade_Delegate(CustomFade_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomFade_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomFade_Delegate(CustomFade_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18166};

/// @brief Field _CalculateWeight, offset: 0x48, size: 0x8, def value: None
 ::System::Func_2<float_t,float_t>*  ____CalculateWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomFade_Delegate, ____CalculateWeight) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomFade_Delegate) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
