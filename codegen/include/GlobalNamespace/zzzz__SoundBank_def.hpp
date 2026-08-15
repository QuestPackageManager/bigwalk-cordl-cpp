#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SoundBank)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class ISoundBankable;
}
namespace GlobalNamespace {
class SoundBankEntry;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundBank;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundBank*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundBank*, "", "SoundBank");
// Dependencies AudioAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundBank
class CORDL_TYPE SoundBank : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
 __declspec(property(get=get_AllClips, put=set_AllClips)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  AllClips;

/// @brief Field Entries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entries, put=__cordl_internal_set_Entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>*  Entries;

 __declspec(property(get=get_RuntimeAssetLookup, put=set_RuntimeAssetLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  RuntimeAssetLookup;

/// @brief Field <AllClips>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__AllClips_k__BackingField, put=__cordl_internal_set__AllClips_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  _AllClips_k__BackingField;

/// @brief Field <AllSoundBanks>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AllSoundBanks_k__BackingField, put=setStaticF__AllSoundBanks_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  _AllSoundBanks_k__BackingField;

/// @brief Field <RuntimeAssetLookup>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RuntimeAssetLookup_k__BackingField, put=__cordl_internal_set__RuntimeAssetLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  _RuntimeAssetLookup_k__BackingField;

/// @brief Method ContainsBankable, addr 0x1804a4800, size 0xe0, virtual false, abstract: false, final false
inline bool ContainsBankable(::GlobalNamespace::ISoundBankable*  bankable) ;

/// @brief Method ContainsCue, addr 0x1804a48e0, size 0x120, virtual false, abstract: false, final false
inline ::GlobalNamespace::SoundBankEntry* ContainsCue(::GlobalNamespace::SoundCue*  cue, bool  equalOnly) ;

/// @brief Method FindAsset, addr 0x1804a4a00, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> FindAsset(::StringW  name) ;

/// @brief Method GetCueCount, addr 0x1804a4a50, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetCueCount(::GlobalNamespace::SoundCue*  cue) ;

/// @brief Method LoadBank, addr 0x1804a4b30, size 0x90, virtual false, abstract: false, final false
inline void LoadBank() ;

static inline ::GlobalNamespace::SoundBank* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804a4bc0, size 0x280, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RefreshClips, addr 0x1804a4e40, size 0x180, virtual false, abstract: false, final false
inline void RefreshClips() ;

/// @brief Method RefreshLookup, addr 0x1804a4fc0, size 0xe0, virtual false, abstract: false, final false
inline void RefreshLookup() ;

/// @brief Method UnloadBank, addr 0x1804a50a0, size 0x90, virtual false, abstract: false, final false
inline void UnloadBank() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>* const& __cordl_internal_get_Entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>*& __cordl_internal_get_Entries() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__AllClips_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__AllClips_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>* const& __cordl_internal_get__RuntimeAssetLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*& __cordl_internal_get__RuntimeAssetLookup_k__BackingField() ;

constexpr void __cordl_internal_set_Entries(::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>*  value) ;

constexpr void __cordl_internal_set__AllClips_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set__RuntimeAssetLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  value) ;

/// @brief Method .ctor, addr 0x1804a5190, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* getStaticF__AllSoundBanks_k__BackingField() ;

/// @brief Method get_AllClips, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* get_AllClips() ;

/// @brief Method get_AllSoundBanks, addr 0x1804a5240, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* get_AllSoundBanks() ;

/// @brief Method get_RuntimeAssetLookup, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>* get_RuntimeAssetLookup() ;

static inline void setStaticF__AllSoundBanks_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  value) ;

/// @brief Method set_AllClips, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_AllClips(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

/// @brief Method set_AllSoundBanks, addr 0x1804a5280, size 0x50, virtual false, abstract: false, final false
static inline void set_AllSoundBanks(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  value) ;

/// @brief Method set_RuntimeAssetLookup, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_RuntimeAssetLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundBank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundBank", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundBank(SoundBank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundBank", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundBank(SoundBank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17638};

/// @brief Field Entries, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>*  ___Entries;

/// @brief Field <RuntimeAssetLookup>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  ____RuntimeAssetLookup_k__BackingField;

/// @brief Field <AllClips>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  ____AllClips_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundBank, ___Entries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBank, ____RuntimeAssetLookup_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBank, ____AllClips_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundBank) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
