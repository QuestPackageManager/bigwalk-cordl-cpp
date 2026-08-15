#pragma once
// IWYU pragma private; include "Boxophobic/Utility/SettingsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsData)
// Forward declare root types
namespace Boxophobic::Utility {
class SettingsData;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::SettingsData*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::SettingsData*, "Boxophobic.Utility", "SettingsData");
// Dependencies Boxophobic.StyledGUI.StyledScriptableObject
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.SettingsData
class CORDL_TYPE SettingsData : public ::Boxophobic::StyledGUI::StyledScriptableObject {
public:
// Declarations
/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::StringW  data;

/// @brief Field styledBanner, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_styledBanner, put=__cordl_internal_set_styledBanner)) bool  styledBanner;

static inline ::Boxophobic::Utility::SettingsData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_data() const;

constexpr ::StringW& __cordl_internal_get_data() ;

constexpr bool const& __cordl_internal_get_styledBanner() const;

constexpr bool& __cordl_internal_get_styledBanner() ;

constexpr void __cordl_internal_set_data(::StringW  value) ;

constexpr void __cordl_internal_set_styledBanner(bool  value) ;

/// @brief Method .ctor, addr 0x1804bcdb0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsData(SettingsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsData(SettingsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21194};

/// @brief Field styledBanner, offset: 0x18, size: 0x1, def value: None
 bool  ___styledBanner;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::Utility::SettingsData, ___styledBanner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SettingsData, ___data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::Utility::SettingsData) == 0x28, "Size mismatch!");

} // namespace end def Boxophobic::Utility
