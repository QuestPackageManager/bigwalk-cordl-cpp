#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/LowUpdateRate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LowUpdateRate)
namespace Animancer {
class AnimancerComponent;
}
// Forward declare root types
namespace Animancer::Examples::FineControl {
class LowUpdateRate;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::LowUpdateRate*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::LowUpdateRate*, "Animancer.Examples.FineControl", "LowUpdateRate");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.LowUpdateRate
class CORDL_TYPE LowUpdateRate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _LastUpdateTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastUpdateTime, put=__cordl_internal_set__LastUpdateTime)) float_t  _LastUpdateTime;

/// @brief Field _UpdatesPerSecond, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__UpdatesPerSecond, put=__cordl_internal_set__UpdatesPerSecond)) float_t  _UpdatesPerSecond;

static inline ::Animancer::Examples::FineControl::LowUpdateRate* New_ctor() ;

/// @brief Method OnDisable, addr 0x1802fe900, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802fe960, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1802fe9a0, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr float_t const& __cordl_internal_get__LastUpdateTime() const;

constexpr float_t& __cordl_internal_get__LastUpdateTime() ;

constexpr float_t const& __cordl_internal_get__UpdatesPerSecond() const;

constexpr float_t& __cordl_internal_get__UpdatesPerSecond() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__LastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__UpdatesPerSecond(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fea00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LowUpdateRate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LowUpdateRate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LowUpdateRate(LowUpdateRate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowUpdateRate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowUpdateRate(LowUpdateRate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20028};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _UpdatesPerSecond, offset: 0x28, size: 0x4, def value: None
 float_t  ____UpdatesPerSecond;

/// @brief Field _LastUpdateTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ____LastUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::FineControl::LowUpdateRate, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::LowUpdateRate, ____UpdatesPerSecond) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::LowUpdateRate, ____LastUpdateTime) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::FineControl::LowUpdateRate) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::FineControl
