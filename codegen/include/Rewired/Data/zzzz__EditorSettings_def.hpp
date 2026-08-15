#pragma once
// IWYU pragma private; include "Rewired/Data/EditorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EditorSettings)
// Forward declare root types
namespace Rewired::Data {
class EditorSettings;
}
// Write type traits
MARK_REF_T(::Rewired::Data::EditorSettings*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::EditorSettings*, "Rewired.Data", "EditorSettings");
// Dependencies UnityEngine.ScriptableObject
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.EditorSettings
class CORDL_TYPE EditorSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field dataVersion, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_dataVersion, put=__cordl_internal_set_dataVersion)) int32_t  dataVersion;

/// @brief Field programVersion1, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_programVersion1, put=__cordl_internal_set_programVersion1)) int32_t  programVersion1;

/// @brief Field programVersion2, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_programVersion2, put=__cordl_internal_set_programVersion2)) int32_t  programVersion2;

/// @brief Field programVersion3, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_programVersion3, put=__cordl_internal_set_programVersion3)) int32_t  programVersion3;

/// @brief Field programVersion4, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_programVersion4, put=__cordl_internal_set_programVersion4)) int32_t  programVersion4;

static inline ::Rewired::Data::EditorSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_dataVersion() const;

constexpr int32_t& __cordl_internal_get_dataVersion() ;

constexpr int32_t const& __cordl_internal_get_programVersion1() const;

constexpr int32_t& __cordl_internal_get_programVersion1() ;

constexpr int32_t const& __cordl_internal_get_programVersion2() const;

constexpr int32_t& __cordl_internal_get_programVersion2() ;

constexpr int32_t const& __cordl_internal_get_programVersion3() const;

constexpr int32_t& __cordl_internal_get_programVersion3() ;

constexpr int32_t const& __cordl_internal_get_programVersion4() const;

constexpr int32_t& __cordl_internal_get_programVersion4() ;

constexpr void __cordl_internal_set_dataVersion(int32_t  value) ;

constexpr void __cordl_internal_set_programVersion1(int32_t  value) ;

constexpr void __cordl_internal_set_programVersion2(int32_t  value) ;

constexpr void __cordl_internal_set_programVersion3(int32_t  value) ;

constexpr void __cordl_internal_set_programVersion4(int32_t  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorSettings(EditorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorSettings(EditorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2343};

/// @brief Field programVersion1, offset: 0x18, size: 0x4, def value: None
 int32_t  ___programVersion1;

/// @brief Field programVersion2, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___programVersion2;

/// @brief Field programVersion3, offset: 0x20, size: 0x4, def value: None
 int32_t  ___programVersion3;

/// @brief Field programVersion4, offset: 0x24, size: 0x4, def value: None
 int32_t  ___programVersion4;

/// @brief Field dataVersion, offset: 0x28, size: 0x4, def value: None
 int32_t  ___dataVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::EditorSettings, ___programVersion1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorSettings, ___programVersion2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorSettings, ___programVersion3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorSettings, ___programVersion4) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorSettings, ___dataVersion) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::EditorSettings) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Data
