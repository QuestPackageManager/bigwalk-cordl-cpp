#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SaveManager)
namespace GlobalNamespace {
class SaveData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SaveManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaveManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveManager*, "", "SaveManager");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaveManager
class CORDL_TYPE SaveManager : public ::System::Object {
public:
// Declarations
/// @brief Field currentData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentData, put=__cordl_internal_set_currentData)) ::GlobalNamespace::SaveData*  currentData;

/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method Delete, addr 0x180397800, size 0x30, virtual false, abstract: false, final false
static inline void Delete(::GlobalNamespace::SaveData*  saveData) ;

/// @brief Method GetAllSaveDatasInFolder, addr 0x180397830, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::SaveData*>* GetAllSaveDatasInFolder() ;

/// @brief Method GetIntValue, addr 0x180397b30, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> GetIntValue(::StringW  key) ;

/// @brief Method GetIntValue, addr 0x180397a60, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetIntValue(::StringW  key, int32_t  fallback, bool  saveFallback) ;

/// @brief Method GetIsInInventory, addr 0x180397bd0, size 0x70, virtual false, abstract: false, final false
static inline bool GetIsInInventory(::StringW  savablePropGuid) ;

/// @brief Method GetRebindData, addr 0x180397c40, size 0x10, virtual false, abstract: false, final false
static inline bool GetRebindData(::StringW  fileName, ::by_ref<::StringW>  rebindData) ;

/// @brief Method GetStringValue, addr 0x180397c50, size 0x130, virtual false, abstract: false, final false
static inline ::StringW GetStringValue(::StringW  key) ;

static inline ::GlobalNamespace::SaveManager* New_ctor() ;

/// @brief Method RenameSlot, addr 0x180397d80, size 0x50, virtual false, abstract: false, final false
static inline void RenameSlot(::StringW  oldName, ::StringW  newName, ::StringW  filenameGuid) ;

/// @brief Method SaveRebindData, addr 0x180397dd0, size 0x90, virtual false, abstract: false, final false
static inline void SaveRebindData(::StringW  fileName, ::StringW  rebindData) ;

/// @brief Method SetIntValue, addr 0x180397e60, size 0x200, virtual false, abstract: false, final false
static inline void SetIntValue(::StringW  key, int32_t  value) ;

/// @brief Method SetInventory, addr 0x180398060, size 0x60, virtual false, abstract: false, final false
static inline void SetInventory() ;

/// @brief Method SetPassword, addr 0x1803980c0, size 0x70, virtual false, abstract: false, final false
static inline void SetPassword(::StringW  newPassword) ;

/// @brief Method SetStringValue, addr 0x180398130, size 0x80, virtual false, abstract: false, final false
static inline void SetStringValue(::StringW  key, ::StringW  value) ;

/// @brief Method WriteCurrentSaveData, addr 0x1803981b0, size 0x1e0, virtual false, abstract: false, final false
static inline void WriteCurrentSaveData() ;

constexpr ::GlobalNamespace::SaveData* const& __cordl_internal_get_currentData() const;

constexpr ::GlobalNamespace::SaveData*& __cordl_internal_get_currentData() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_currentData(::GlobalNamespace::SaveData*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180398390, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SaveManager* get_instance() ;

/// @brief Method get_worldName, addr 0x1803983c0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW get_worldName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveManager(SaveManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveManager(SaveManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5602};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field currentData, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::SaveData*  ___currentData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveManager, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveManager, ___currentData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
