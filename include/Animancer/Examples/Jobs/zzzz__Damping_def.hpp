#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/Damping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Damping)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::Jobs {
class Damping;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Jobs::Damping*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::Damping*, "Animancer.Examples.Jobs", "Damping");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Jobs {
// Is value type: false
// CS Name: Animancer.Examples.Jobs.Damping
class CORDL_TYPE Damping : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _BoneCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__BoneCount, put=__cordl_internal_set__BoneCount)) int32_t  _BoneCount;

/// @brief Field _EndBone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__EndBone, put=__cordl_internal_set__EndBone)) ::UnityW<::UnityEngine::Transform>  _EndBone;

/// @brief Method Awake, addr 0x1802f95b0, size 0x5f0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::Jobs::Damping* New_ctor() ;

/// @brief Method OnValidate, addr 0x1802f9ba0, size 0x140, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr int32_t const& __cordl_internal_get__BoneCount() const;

constexpr int32_t& __cordl_internal_get__BoneCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__EndBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__EndBone() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__BoneCount(int32_t  value) ;

constexpr void __cordl_internal_set__EndBone(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802f9ce0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Damping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Damping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Damping(Damping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Damping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Damping(Damping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19957};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _EndBone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____EndBone;

/// @brief Field _BoneCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____BoneCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Jobs::Damping, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::Damping, ____EndBone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::Damping, ____BoneCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Jobs::Damping) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs
