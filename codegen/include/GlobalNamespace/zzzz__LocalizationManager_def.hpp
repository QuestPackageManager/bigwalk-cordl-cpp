#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalizationManager)
namespace GlobalNamespace {
struct LocalizationLanguage;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizationManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationManager*, "", "LocalizationManager");
// Dependencies LocalizationLanguage, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizationManager
class CORDL_TYPE LocalizationManager : public ::System::Object {
public:
// Declarations
/// @brief Field currentLanguage, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLanguage, put=__cordl_internal_set_currentLanguage)) ::GlobalNamespace::LocalizationLanguage  currentLanguage;

static inline ::GlobalNamespace::LocalizationManager* New_ctor() ;

/// @brief Method SetLanguage, addr 0x180402630, size 0x70, virtual false, abstract: false, final false
static inline void SetLanguage(::GlobalNamespace::LocalizationLanguage  newLanguage) ;

constexpr ::GlobalNamespace::LocalizationLanguage const& __cordl_internal_get_currentLanguage() const;

constexpr ::GlobalNamespace::LocalizationLanguage& __cordl_internal_get_currentLanguage() ;

constexpr void __cordl_internal_set_currentLanguage(::GlobalNamespace::LocalizationLanguage  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x1804026a0, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LocalizationManager* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationManager(LocalizationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationManager(LocalizationManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5012};

/// @brief Field currentLanguage, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::LocalizationLanguage  ___currentLanguage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationManager, ___currentLanguage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationManager) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
