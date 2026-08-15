#pragma once
// IWYU pragma private; include "GlobalNamespace/RendererBoundsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(RendererBoundsHelper)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class RendererBoundsHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RendererBoundsHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RendererBoundsHelper*, "", "RendererBoundsHelper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RendererBoundsHelper
class CORDL_TYPE RendererBoundsHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field center, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field size, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Renderer>  target;

static inline ::GlobalNamespace::RendererBoundsHelper* New_ctor() ;

/// @brief Method Start, addr 0x1803eeec0, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendererBoundsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendererBoundsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RendererBoundsHelper(RendererBoundsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendererBoundsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendererBoundsHelper(RendererBoundsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4966};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___target;

/// @brief Field center, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// @brief Field size, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RendererBoundsHelper, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RendererBoundsHelper, ___center) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RendererBoundsHelper, ___size) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RendererBoundsHelper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
