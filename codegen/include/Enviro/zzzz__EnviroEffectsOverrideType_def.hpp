#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectsOverrideType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroEffectsOverrideType)
// Forward declare root types
namespace Enviro {
class EnviroEffectsOverrideType;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroEffectsOverrideType*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffectsOverrideType*, "Enviro", "EnviroEffectsOverrideType");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEffectsOverrideType
class CORDL_TYPE EnviroEffectsOverrideType : public ::System::Object {
public:
// Declarations
/// @brief Field emission, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_emission, put=__cordl_internal_set_emission)) float_t  emission;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field showEditor, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEditor, put=__cordl_internal_set_showEditor)) bool  showEditor;

static inline ::Enviro::EnviroEffectsOverrideType* New_ctor() ;

constexpr float_t const& __cordl_internal_get_emission() const;

constexpr float_t& __cordl_internal_get_emission() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_showEditor() const;

constexpr bool& __cordl_internal_get_showEditor() ;

constexpr void __cordl_internal_set_emission(float_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_showEditor(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffectsOverrideType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectsOverrideType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEffectsOverrideType(EnviroEffectsOverrideType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectsOverrideType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEffectsOverrideType(EnviroEffectsOverrideType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18516};

/// @brief Field showEditor, offset: 0x10, size: 0x1, def value: None
 bool  ___showEditor;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field emission, offset: 0x20, size: 0x4, def value: None
 float_t  ___emission;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffectsOverrideType, ___showEditor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectsOverrideType, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectsOverrideType, ___emission) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffectsOverrideType) == 0x28, "Size mismatch!");

} // namespace end def Enviro
