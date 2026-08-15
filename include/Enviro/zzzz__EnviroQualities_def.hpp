#pragma once
// IWYU pragma private; include "Enviro/EnviroQualities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroQualities)
namespace Enviro {
class EnviroQuality;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Enviro {
class EnviroQualities;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroQualities*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroQualities*, "Enviro", "EnviroQualities");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroQualities
class CORDL_TYPE EnviroQualities : public ::System::Object {
public:
// Declarations
/// @brief Field Qualities, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Qualities, put=__cordl_internal_set_Qualities)) ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>*  Qualities;

/// @brief Field defaultQuality, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultQuality, put=__cordl_internal_set_defaultQuality)) ::UnityW<::Enviro::EnviroQuality>  defaultQuality;

static inline ::Enviro::EnviroQualities* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>* const& __cordl_internal_get_Qualities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>*& __cordl_internal_get_Qualities() ;

constexpr ::UnityW<::Enviro::EnviroQuality> const& __cordl_internal_get_defaultQuality() const;

constexpr ::UnityW<::Enviro::EnviroQuality>& __cordl_internal_get_defaultQuality() ;

constexpr void __cordl_internal_set_Qualities(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>*  value) ;

constexpr void __cordl_internal_set_defaultQuality(::UnityW<::Enviro::EnviroQuality>  value) ;

/// @brief Method .ctor, addr 0x180615bc0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroQualities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroQualities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroQualities(EnviroQualities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroQualities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroQualities(EnviroQualities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18480};

/// @brief Field defaultQuality, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroQuality>  ___defaultQuality;

/// @brief Field Qualities, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>*  ___Qualities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroQualities, ___defaultQuality) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQualities, ___Qualities) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroQualities) == 0x20, "Size mismatch!");

} // namespace end def Enviro
