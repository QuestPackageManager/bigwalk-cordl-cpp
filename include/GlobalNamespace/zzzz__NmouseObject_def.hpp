#pragma once
// IWYU pragma private; include "GlobalNamespace/NmouseObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NmouseObject)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NmouseObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NmouseObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NmouseObject*, "", "NmouseObject");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NmouseObject
class CORDL_TYPE NmouseObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cursor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cursor, put=__cordl_internal_set_cursor)) ::UnityW<::UnityEngine::GameObject>  cursor;

static inline ::GlobalNamespace::NmouseObject* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cursor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cursor() ;

constexpr void __cordl_internal_set_cursor(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NmouseObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NmouseObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NmouseObject(NmouseObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NmouseObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NmouseObject(NmouseObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5548};

/// @brief Field cursor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cursor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NmouseObject, ___cursor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NmouseObject) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
