#pragma once
// IWYU pragma private; include "GlobalNamespace/AbstractObjectSet_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AbstractObjectSet_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class AbstractObjectSet_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::AbstractObjectSet_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::AbstractObjectSet_1, "", "AbstractObjectSet`1");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: AbstractObjectSet`1<T>
class CORDL_TYPE AbstractObjectSet_1 : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field setObjects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_setObjects, put=__cordl_internal_set_setObjects)) ::System::Collections::Generic::List_1<T>*  setObjects;

static inline ::GlobalNamespace::AbstractObjectSet_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_setObjects() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_setObjects() ;

constexpr void __cordl_internal_set_setObjects(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractObjectSet_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractObjectSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractObjectSet_1(AbstractObjectSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractObjectSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractObjectSet_1(AbstractObjectSet_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21035};

/// @brief Field setObjects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___setObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
