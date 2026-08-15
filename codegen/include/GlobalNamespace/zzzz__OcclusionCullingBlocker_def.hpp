#pragma once
// IWYU pragma private; include "GlobalNamespace/OcclusionCullingBlocker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OcclusionCullingBlocker)
namespace GlobalNamespace {
class CameraTriggerController;
}
namespace GlobalNamespace {
class CameraTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
class OcclusionCullingBlocker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OcclusionCullingBlocker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OcclusionCullingBlocker*, "", "OcclusionCullingBlocker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OcclusionCullingBlocker
class CORDL_TYPE OcclusionCullingBlocker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cameraTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraTrigger, put=__cordl_internal_set__cameraTrigger)) ::UnityW<::GlobalNamespace::CameraTrigger>  _cameraTrigger;

/// @brief Method Awake, addr 0x1803ede70, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleOnEnter, addr 0x1803edfe0, size 0xf0, virtual false, abstract: false, final false
inline void HandleOnEnter(::GlobalNamespace::CameraTriggerController*  controller) ;

/// @brief Method HandleOnExit, addr 0x1803ee0d0, size 0xa0, virtual false, abstract: false, final false
inline void HandleOnExit(::GlobalNamespace::CameraTriggerController*  controller) ;

static inline ::GlobalNamespace::OcclusionCullingBlocker* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::CameraTrigger> const& __cordl_internal_get__cameraTrigger() const;

constexpr ::UnityW<::GlobalNamespace::CameraTrigger>& __cordl_internal_get__cameraTrigger() ;

constexpr void __cordl_internal_set__cameraTrigger(::UnityW<::GlobalNamespace::CameraTrigger>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingBlocker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingBlocker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionCullingBlocker(OcclusionCullingBlocker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingBlocker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionCullingBlocker(OcclusionCullingBlocker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4973};

/// @brief Field _cameraTrigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraTrigger>  ____cameraTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OcclusionCullingBlocker, ____cameraTrigger) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OcclusionCullingBlocker) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
