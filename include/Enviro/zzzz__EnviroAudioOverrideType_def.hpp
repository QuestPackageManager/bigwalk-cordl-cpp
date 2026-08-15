#pragma once
// IWYU pragma private; include "Enviro/EnviroAudioOverrideType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroAudioOverrideType)
// Forward declare root types
namespace Enviro {
class EnviroAudioOverrideType;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroAudioOverrideType*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAudioOverrideType*, "Enviro", "EnviroAudioOverrideType");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAudioOverrideType
class CORDL_TYPE EnviroAudioOverrideType : public ::System::Object {
public:
// Declarations
/// @brief Field autumn, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_autumn, put=__cordl_internal_set_autumn)) bool  autumn;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field showEditor, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEditor, put=__cordl_internal_set_showEditor)) bool  showEditor;

/// @brief Field spring, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_spring, put=__cordl_internal_set_spring)) bool  spring;

/// @brief Field summer, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_summer, put=__cordl_internal_set_summer)) bool  summer;

/// @brief Field volume, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

/// @brief Field winter, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_winter, put=__cordl_internal_set_winter)) bool  winter;

static inline ::Enviro::EnviroAudioOverrideType* New_ctor() ;

constexpr bool const& __cordl_internal_get_autumn() const;

constexpr bool& __cordl_internal_get_autumn() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_showEditor() const;

constexpr bool& __cordl_internal_get_showEditor() ;

constexpr bool const& __cordl_internal_get_spring() const;

constexpr bool& __cordl_internal_get_spring() ;

constexpr bool const& __cordl_internal_get_summer() const;

constexpr bool& __cordl_internal_get_summer() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr bool const& __cordl_internal_get_winter() const;

constexpr bool& __cordl_internal_get_winter() ;

constexpr void __cordl_internal_set_autumn(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_showEditor(bool  value) ;

constexpr void __cordl_internal_set_spring(bool  value) ;

constexpr void __cordl_internal_set_summer(bool  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

constexpr void __cordl_internal_set_winter(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAudioOverrideType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudioOverrideType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAudioOverrideType(EnviroAudioOverrideType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudioOverrideType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAudioOverrideType(EnviroAudioOverrideType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18513};

/// @brief Field showEditor, offset: 0x10, size: 0x1, def value: None
 bool  ___showEditor;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field volume, offset: 0x20, size: 0x4, def value: None
 float_t  ___volume;

/// @brief Field spring, offset: 0x24, size: 0x1, def value: None
 bool  ___spring;

/// @brief Field summer, offset: 0x25, size: 0x1, def value: None
 bool  ___summer;

/// @brief Field autumn, offset: 0x26, size: 0x1, def value: None
 bool  ___autumn;

/// @brief Field winter, offset: 0x27, size: 0x1, def value: None
 bool  ___winter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___showEditor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___volume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___spring) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___summer) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___autumn) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioOverrideType, ___winter) == 0x27, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAudioOverrideType) == 0x28, "Size mismatch!");

} // namespace end def Enviro
