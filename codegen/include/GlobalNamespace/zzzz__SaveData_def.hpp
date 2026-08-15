#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SaveData)
namespace GlobalNamespace {
struct SaveEntryString;
}
namespace GlobalNamespace {
struct SaveEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class SaveData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaveData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveData*, "", "SaveData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaveData
class CORDL_TYPE SaveData : public ::System::Object {
public:
// Declarations
/// @brief Field entries, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>*  entries;

/// @brief Field filenameUid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_filenameUid, put=__cordl_internal_set_filenameUid)) ::StringW  filenameUid;

/// @brief Field inventory, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_inventory, put=__cordl_internal_set_inventory)) ::System::Collections::Generic::List_1<::StringW>*  inventory;

 __declspec(property(get=get_lastPlayedTime, put=set_lastPlayedTime)) ::System::DateTime  lastPlayedTime;

/// @brief Field lastPlayedTimeAsLong, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPlayedTimeAsLong, put=__cordl_internal_set_lastPlayedTimeAsLong)) int64_t  lastPlayedTimeAsLong;

/// @brief Field password, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_password, put=__cordl_internal_set_password)) ::StringW  password;

/// @brief Field skipAidsActive, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipAidsActive, put=__cordl_internal_set_skipAidsActive)) bool  skipAidsActive;

/// @brief Field slotName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotName, put=__cordl_internal_set_slotName)) ::StringW  slotName;

/// @brief Field stringEntries, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringEntries, put=__cordl_internal_set_stringEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>*  stringEntries;

/// @brief Field totalPlaytime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalPlaytime, put=__cordl_internal_set_totalPlaytime)) int32_t  totalPlaytime;

/// @brief Method GetIntValue, addr 0x180396f10, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetIntValue(::StringW  key, int32_t  fallback, ::by_ref<bool>  foundValue) ;

static inline ::GlobalNamespace::SaveData* New_ctor() ;

/// @brief Method SetIntValue, addr 0x180396fe0, size 0x1a0, virtual false, abstract: false, final false
inline void SetIntValue(::StringW  key, int32_t  value, ::by_ref<bool>  causedChange) ;

/// @brief Method SetInventory, addr 0x180397180, size 0x10, virtual false, abstract: false, final false
inline void SetInventory() ;

/// @brief Method SetName, addr 0x180397190, size 0x90, virtual false, abstract: false, final false
inline void SetName(::StringW  newName) ;

/// @brief Method SetStringValue, addr 0x180397220, size 0x190, virtual false, abstract: false, final false
inline void SetStringValue(::StringW  key, ::StringW  value, ::by_ref<bool>  causedChange) ;

/// @brief Method TryGetStringValue, addr 0x1803973b0, size 0xd0, virtual false, abstract: false, final false
inline bool TryGetStringValue(::StringW  key, ::by_ref<::StringW>  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>*& __cordl_internal_get_entries() ;

constexpr ::StringW const& __cordl_internal_get_filenameUid() const;

constexpr ::StringW& __cordl_internal_get_filenameUid() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_inventory() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_inventory() ;

constexpr int64_t const& __cordl_internal_get_lastPlayedTimeAsLong() const;

constexpr int64_t& __cordl_internal_get_lastPlayedTimeAsLong() ;

constexpr ::StringW const& __cordl_internal_get_password() const;

constexpr ::StringW& __cordl_internal_get_password() ;

constexpr bool const& __cordl_internal_get_skipAidsActive() const;

constexpr bool& __cordl_internal_get_skipAidsActive() ;

constexpr ::StringW const& __cordl_internal_get_slotName() const;

constexpr ::StringW& __cordl_internal_get_slotName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>* const& __cordl_internal_get_stringEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>*& __cordl_internal_get_stringEntries() ;

constexpr int32_t const& __cordl_internal_get_totalPlaytime() const;

constexpr int32_t& __cordl_internal_get_totalPlaytime() ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>*  value) ;

constexpr void __cordl_internal_set_filenameUid(::StringW  value) ;

constexpr void __cordl_internal_set_inventory(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_lastPlayedTimeAsLong(int64_t  value) ;

constexpr void __cordl_internal_set_password(::StringW  value) ;

constexpr void __cordl_internal_set_skipAidsActive(bool  value) ;

constexpr void __cordl_internal_set_slotName(::StringW  value) ;

constexpr void __cordl_internal_set_stringEntries(::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>*  value) ;

constexpr void __cordl_internal_set_totalPlaytime(int32_t  value) ;

/// @brief Method .ctor, addr 0x180397480, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_lastPlayedTime, addr 0x180397530, size 0x30, virtual false, abstract: false, final false
inline ::System::DateTime get_lastPlayedTime() ;

/// @brief Method set_lastPlayedTime, addr 0x180397560, size 0x30, virtual false, abstract: false, final false
inline void set_lastPlayedTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveData(SaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveData(SaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5597};

/// @brief Field slotName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___slotName;

/// @brief Field password, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___password;

/// @brief Field filenameUid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___filenameUid;

/// @brief Field lastPlayedTimeAsLong, offset: 0x28, size: 0x8, def value: None
 int64_t  ___lastPlayedTimeAsLong;

/// @brief Field skipAidsActive, offset: 0x30, size: 0x1, def value: None
 bool  ___skipAidsActive;

/// @brief Field totalPlaytime, offset: 0x34, size: 0x4, def value: None
 int32_t  ___totalPlaytime;

/// @brief Field entries, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>*  ___entries;

/// @brief Field stringEntries, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>*  ___stringEntries;

/// @brief Field inventory, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___inventory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveData, ___slotName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___password) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___filenameUid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___lastPlayedTimeAsLong) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___skipAidsActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___totalPlaytime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___entries) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___stringEntries) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveData, ___inventory) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveData) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
