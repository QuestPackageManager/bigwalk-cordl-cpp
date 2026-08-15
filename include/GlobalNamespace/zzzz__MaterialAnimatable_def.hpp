#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialAnimatable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialAnimatable)
// Forward declare root types
namespace GlobalNamespace {
class MaterialAnimatable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialAnimatable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialAnimatable*, "", "MaterialAnimatable");
// Dependencies PropertyBlockHelper, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialAnimatable
class CORDL_TYPE MaterialAnimatable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isGlobal, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGlobal, put=__cordl_internal_set_isGlobal)) bool  isGlobal;

/// @brief Field propertyBlockHelpers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelpers, put=__cordl_internal_set_propertyBlockHelpers)) ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  propertyBlockHelpers;

/// @brief Field propertyName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyName, put=__cordl_internal_set_propertyName)) ::StringW  propertyName;

/// @brief Field value, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

static inline ::GlobalNamespace::MaterialAnimatable* New_ctor() ;

/// @brief Method Update, addr 0x1803ed720, size 0x210, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_isGlobal() const;

constexpr bool& __cordl_internal_get_isGlobal() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& __cordl_internal_get_propertyBlockHelpers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& __cordl_internal_get_propertyBlockHelpers() ;

constexpr ::StringW const& __cordl_internal_get_propertyName() const;

constexpr ::StringW& __cordl_internal_get_propertyName() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_isGlobal(bool  value) ;

constexpr void __cordl_internal_set_propertyBlockHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value) ;

constexpr void __cordl_internal_set_propertyName(::StringW  value) ;

constexpr void __cordl_internal_set_value(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialAnimatable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialAnimatable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialAnimatable(MaterialAnimatable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialAnimatable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialAnimatable(MaterialAnimatable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4951};

/// @brief Field propertyBlockHelpers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  ___propertyBlockHelpers;

/// @brief Field propertyName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___propertyName;

/// @brief Field value, offset: 0x30, size: 0x4, def value: None
 float_t  ___value;

/// @brief Field isGlobal, offset: 0x34, size: 0x1, def value: None
 bool  ___isGlobal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialAnimatable, ___propertyBlockHelpers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialAnimatable, ___propertyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialAnimatable, ___value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialAnimatable, ___isGlobal) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialAnimatable) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
