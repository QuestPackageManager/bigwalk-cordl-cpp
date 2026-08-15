#pragma once
// IWYU pragma private; include "MA/Flora/FloraDebugDisplaySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettings_1_def.hpp"
CORDL_MODULE_EXPORT(FloraDebugDisplaySettings)
namespace MA::Flora {
class DebugDisplayFlora;
}
// Forward declare root types
namespace MA::Flora {
class FloraDebugDisplaySettings;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraDebugDisplaySettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraDebugDisplaySettings*, "MA.Flora", "FloraDebugDisplaySettings");
// Dependencies UnityEngine.Rendering.DebugDisplaySettings`1<T>
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraDebugDisplaySettings
class CORDL_TYPE FloraDebugDisplaySettings : public ::UnityEngine::Rendering::DebugDisplaySettings_1<::MA::Flora::FloraDebugDisplaySettings*> {
public:
// Declarations
 __declspec(property(get=get_DisplayData, put=set_DisplayData)) ::MA::Flora::DebugDisplayFlora*  DisplayData;

/// @brief Field <DisplayData>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplayData_k__BackingField, put=__cordl_internal_set__DisplayData_k__BackingField)) ::MA::Flora::DebugDisplayFlora*  _DisplayData_k__BackingField;

static inline ::MA::Flora::FloraDebugDisplaySettings* New_ctor() ;

/// @brief Method Reset, addr 0x1814c5eb0, size 0xd0, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateDisplay, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void UpdateDisplay() ;

constexpr ::MA::Flora::DebugDisplayFlora* const& __cordl_internal_get__DisplayData_k__BackingField() const;

constexpr ::MA::Flora::DebugDisplayFlora*& __cordl_internal_get__DisplayData_k__BackingField() ;

constexpr void __cordl_internal_set__DisplayData_k__BackingField(::MA::Flora::DebugDisplayFlora*  value) ;

/// @brief Method .ctor, addr 0x1814c5f80, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayData, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::DebugDisplayFlora* get_DisplayData() ;

/// @brief Method set_DisplayData, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayData(::MA::Flora::DebugDisplayFlora*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraDebugDisplaySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraDebugDisplaySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraDebugDisplaySettings(FloraDebugDisplaySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraDebugDisplaySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraDebugDisplaySettings(FloraDebugDisplaySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13260};

/// @brief Field <DisplayData>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::DebugDisplayFlora*  ____DisplayData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraDebugDisplaySettings, ____DisplayData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraDebugDisplaySettings) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
