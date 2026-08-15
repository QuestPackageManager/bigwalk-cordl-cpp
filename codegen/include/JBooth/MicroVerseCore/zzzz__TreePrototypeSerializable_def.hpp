#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreePrototypeSerializable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TreePrototypeSerializable)
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TreePrototype;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class TreePrototypeSerializable;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::TreePrototypeSerializable*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::TreePrototypeSerializable*, "JBooth.MicroVerseCore", "TreePrototypeSerializable");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.TreePrototypeSerializable
class CORDL_TYPE TreePrototypeSerializable : public ::System::Object {
public:
// Declarations
/// @brief Field bendFactor, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bendFactor, put=__cordl_internal_set_bendFactor)) float_t  bendFactor;

/// @brief Field navMeshLod, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_navMeshLod, put=__cordl_internal_set_navMeshLod)) int32_t  navMeshLod;

/// @brief Field prefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Method Equals, addr 0x18144bfe0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18144c070, size 0x60, virtual false, abstract: false, final false
inline bool Equals(::JBooth::MicroVerseCore::TreePrototypeSerializable*  x) ;

/// @brief Method GetHashCode, addr 0x18144c0d0, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetPrototype, addr 0x18144c0f0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::TreePrototype* GetPrototype() ;

/// @brief Method IsEqualToTree, addr 0x18144c150, size 0x80, virtual false, abstract: false, final false
inline bool IsEqualToTree(::UnityEngine::TreePrototype*  tree) ;

static inline ::JBooth::MicroVerseCore::TreePrototypeSerializable* New_ctor() ;

static inline ::JBooth::MicroVerseCore::TreePrototypeSerializable* New_ctor(::UnityEngine::TreePrototype*  p) ;

constexpr float_t const& __cordl_internal_get_bendFactor() const;

constexpr float_t& __cordl_internal_get_bendFactor() ;

constexpr int32_t const& __cordl_internal_get_navMeshLod() const;

constexpr int32_t& __cordl_internal_get_navMeshLod() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_bendFactor(float_t  value) ;

constexpr void __cordl_internal_set_navMeshLod(int32_t  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18144c1d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::TreePrototype*  p) ;

/// @brief Method op_Equality, addr 0x18144c230, size 0x70, virtual false, abstract: false, final false
static inline bool op_Equality(::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj1, ::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj2) ;

/// @brief Method op_Inequality, addr 0x18144c2a0, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj1, ::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreePrototypeSerializable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreePrototypeSerializable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreePrototypeSerializable(TreePrototypeSerializable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreePrototypeSerializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreePrototypeSerializable(TreePrototypeSerializable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18057};

/// @brief Field bendFactor, offset: 0x10, size: 0x4, def value: None
 float_t  ___bendFactor;

/// @brief Field navMeshLod, offset: 0x14, size: 0x4, def value: None
 int32_t  ___navMeshLod;

/// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::TreePrototypeSerializable, ___bendFactor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreePrototypeSerializable, ___navMeshLod) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreePrototypeSerializable, ___prefab) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::TreePrototypeSerializable) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
