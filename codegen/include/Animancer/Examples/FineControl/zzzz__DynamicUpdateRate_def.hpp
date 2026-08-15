#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/DynamicUpdateRate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicUpdateRate)
namespace Animancer::Examples::FineControl {
class LowUpdateRate;
}
namespace UnityEngine {
class TextMesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::FineControl {
class DynamicUpdateRate;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::DynamicUpdateRate*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::DynamicUpdateRate*, "Animancer.Examples.FineControl", "DynamicUpdateRate");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.DynamicUpdateRate
class CORDL_TYPE DynamicUpdateRate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Camera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Camera, put=__cordl_internal_set__Camera)) ::UnityW<::UnityEngine::Transform>  _Camera;

/// @brief Field _LowUpdateRate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__LowUpdateRate, put=__cordl_internal_set__LowUpdateRate)) ::UnityW<::Animancer::Examples::FineControl::LowUpdateRate>  _LowUpdateRate;

/// @brief Field _SlowUpdateDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__SlowUpdateDistance, put=__cordl_internal_set__SlowUpdateDistance)) float_t  _SlowUpdateDistance;

/// @brief Field _TextMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextMesh, put=__cordl_internal_set__TextMesh)) ::UnityW<::UnityEngine::TextMesh>  _TextMesh;

/// @brief Method Awake, addr 0x1802faa50, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::FineControl::DynamicUpdateRate* New_ctor() ;

/// @brief Method Update, addr 0x1802faa90, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Camera() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Camera() ;

constexpr ::UnityW<::Animancer::Examples::FineControl::LowUpdateRate> const& __cordl_internal_get__LowUpdateRate() const;

constexpr ::UnityW<::Animancer::Examples::FineControl::LowUpdateRate>& __cordl_internal_get__LowUpdateRate() ;

constexpr float_t const& __cordl_internal_get__SlowUpdateDistance() const;

constexpr float_t& __cordl_internal_get__SlowUpdateDistance() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get__TextMesh() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get__TextMesh() ;

constexpr void __cordl_internal_set__Camera(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__LowUpdateRate(::UnityW<::Animancer::Examples::FineControl::LowUpdateRate>  value) ;

constexpr void __cordl_internal_set__SlowUpdateDistance(float_t  value) ;

constexpr void __cordl_internal_set__TextMesh(::UnityW<::UnityEngine::TextMesh>  value) ;

/// @brief Method .ctor, addr 0x1802fabf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicUpdateRate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicUpdateRate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicUpdateRate(DynamicUpdateRate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicUpdateRate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicUpdateRate(DynamicUpdateRate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20027};

/// @brief Field _LowUpdateRate, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::FineControl::LowUpdateRate>  ____LowUpdateRate;

/// @brief Field _TextMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ____TextMesh;

/// @brief Field _SlowUpdateDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ____SlowUpdateDistance;

/// @brief Field _Camera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::FineControl::DynamicUpdateRate, ____LowUpdateRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::DynamicUpdateRate, ____TextMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::DynamicUpdateRate, ____SlowUpdateDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::DynamicUpdateRate, ____Camera) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::FineControl::DynamicUpdateRate) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::FineControl
