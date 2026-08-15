#pragma once
// IWYU pragma private; include "GlobalNamespace/RichPresenceEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RichPresenceEntry)
namespace GlobalNamespace {
class PS4RichPresenceEntry;
}
// Forward declare root types
namespace GlobalNamespace {
class RichPresenceEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RichPresenceEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RichPresenceEntry*, "", "RichPresenceEntry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RichPresenceEntry
class CORDL_TYPE RichPresenceEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EpicPresenceText)) ::StringW  EpicPresenceText;

 __declspec(property(get=get_PS4Data)) ::GlobalNamespace::PS4RichPresenceEntry*  PS4Data;

 __declspec(property(get=get_SteamPresenceId)) ::StringW  SteamPresenceId;

 __declspec(property(get=get_XboxPresenceId)) ::StringW  XboxPresenceId;

/// @brief Field mEpicPresenceText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mEpicPresenceText, put=__cordl_internal_set_mEpicPresenceText)) ::StringW  mEpicPresenceText;

/// @brief Field mPS4PresenceData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPS4PresenceData, put=__cordl_internal_set_mPS4PresenceData)) ::GlobalNamespace::PS4RichPresenceEntry*  mPS4PresenceData;

/// @brief Field mSteamPresenceId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mSteamPresenceId, put=__cordl_internal_set_mSteamPresenceId)) ::StringW  mSteamPresenceId;

/// @brief Field mXboxPresenceId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mXboxPresenceId, put=__cordl_internal_set_mXboxPresenceId)) ::StringW  mXboxPresenceId;

static inline ::GlobalNamespace::RichPresenceEntry* New_ctor(::StringW  aXboxPresenceId, ::StringW  aSteamPresenceId, ::StringW  aEpicPresenceText, ::GlobalNamespace::PS4RichPresenceEntry*  aPS4Data) ;

constexpr ::StringW const& __cordl_internal_get_mEpicPresenceText() const;

constexpr ::StringW& __cordl_internal_get_mEpicPresenceText() ;

constexpr ::GlobalNamespace::PS4RichPresenceEntry* const& __cordl_internal_get_mPS4PresenceData() const;

constexpr ::GlobalNamespace::PS4RichPresenceEntry*& __cordl_internal_get_mPS4PresenceData() ;

constexpr ::StringW const& __cordl_internal_get_mSteamPresenceId() const;

constexpr ::StringW& __cordl_internal_get_mSteamPresenceId() ;

constexpr ::StringW const& __cordl_internal_get_mXboxPresenceId() const;

constexpr ::StringW& __cordl_internal_get_mXboxPresenceId() ;

constexpr void __cordl_internal_set_mEpicPresenceText(::StringW  value) ;

constexpr void __cordl_internal_set_mPS4PresenceData(::GlobalNamespace::PS4RichPresenceEntry*  value) ;

constexpr void __cordl_internal_set_mSteamPresenceId(::StringW  value) ;

constexpr void __cordl_internal_set_mXboxPresenceId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1817595d0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  aXboxPresenceId, ::StringW  aSteamPresenceId, ::StringW  aEpicPresenceText, ::GlobalNamespace::PS4RichPresenceEntry*  aPS4Data) ;

/// @brief Method get_EpicPresenceText, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_EpicPresenceText() ;

/// @brief Method get_PS4Data, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::PS4RichPresenceEntry* get_PS4Data() ;

/// @brief Method get_SteamPresenceId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_SteamPresenceId() ;

/// @brief Method get_XboxPresenceId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_XboxPresenceId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichPresenceEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RichPresenceEntry(RichPresenceEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichPresenceEntry(RichPresenceEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20588};

/// @brief Field mXboxPresenceId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mXboxPresenceId;

/// @brief Field mSteamPresenceId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___mSteamPresenceId;

/// @brief Field mEpicPresenceText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___mEpicPresenceText;

/// @brief Field mPS4PresenceData, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::PS4RichPresenceEntry*  ___mPS4PresenceData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichPresenceEntry, ___mXboxPresenceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceEntry, ___mSteamPresenceId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceEntry, ___mEpicPresenceText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceEntry, ___mPS4PresenceData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RichPresenceEntry) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
