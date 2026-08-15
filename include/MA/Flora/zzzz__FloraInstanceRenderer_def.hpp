#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FloraInstanceRenderer)
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
class FloraSystem;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace MA::Flora {
class FloraInstanceRenderer;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraInstanceRenderer*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceRenderer*, "MA.Flora", "FloraInstanceRenderer");
// Dependencies MA.Flora.FloraInstanceHandle, UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceRenderer
class CORDL_TYPE FloraInstanceRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_IdentitySource)) ::UnityW<::UnityEngine::GameObject>  IdentitySource;

 __declspec(property(get=get_InstanceHandle, put=set_InstanceHandle)) ::MA::Flora::FloraInstanceHandle  InstanceHandle;

 __declspec(property(get=get_LocalBounds)) ::UnityEngine::Bounds  LocalBounds;

 __declspec(property(get=get_Prefab, put=set_Prefab)) ::UnityW<::UnityEngine::GameObject>  Prefab;

 __declspec(property(get=get_RenderSource)) ::UnityW<::UnityEngine::GameObject>  RenderSource;

/// @brief Field m_InstanceHandle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceHandle, put=__cordl_internal_set_m_InstanceHandle)) ::MA::Flora::FloraInstanceHandle  m_InstanceHandle;

/// @brief Field m_Prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Prefab, put=__cordl_internal_set_m_Prefab)) ::UnityW<::UnityEngine::GameObject>  m_Prefab;

static inline ::MA::Flora::FloraInstanceRenderer* New_ctor() ;

/// @brief Method OnDisable, addr 0x1814e4490, size 0x130, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1814e45c0, size 0x180, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSystemWasCreated, addr 0x1814e4740, size 0x30, virtual false, abstract: false, final false
inline void OnSystemWasCreated(::MA::Flora::FloraSystem*  system) ;

/// @brief Method OnSystemWillBeDestroyed, addr 0x1814e4770, size 0x20, virtual false, abstract: false, final false
inline void OnSystemWillBeDestroyed(::MA::Flora::FloraSystem*  system) ;

constexpr ::MA::Flora::FloraInstanceHandle const& __cordl_internal_get_m_InstanceHandle() const;

constexpr ::MA::Flora::FloraInstanceHandle& __cordl_internal_get_m_InstanceHandle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Prefab() ;

constexpr void __cordl_internal_set_m_InstanceHandle(::MA::Flora::FloraInstanceHandle  value) ;

constexpr void __cordl_internal_set_m_Prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0x1814e4790, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_IdentitySource, addr 0x1814e48c0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_IdentitySource() ;

/// @brief Method get_InstanceHandle, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle get_InstanceHandle() ;

/// @brief Method get_LocalBounds, addr 0x1814e4900, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_LocalBounds() ;

/// @brief Method get_Prefab, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Prefab() ;

/// @brief Method get_RenderSource, addr 0x1802dc4e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_RenderSource() ;

/// @brief Method set_InstanceHandle, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void set_InstanceHandle(::MA::Flora::FloraInstanceHandle  value) ;

/// @brief Method set_Prefab, addr 0x1814e4b10, size 0x120, virtual false, abstract: false, final false
inline void set_Prefab(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceRenderer(FloraInstanceRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceRenderer(FloraInstanceRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13285};

/// @brief Field m_Prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_Prefab;

/// @brief Field m_InstanceHandle, offset: 0x28, size: 0x8, def value: None
 ::MA::Flora::FloraInstanceHandle  ___m_InstanceHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceRenderer, ___m_Prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceRenderer, ___m_InstanceHandle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceRenderer) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
