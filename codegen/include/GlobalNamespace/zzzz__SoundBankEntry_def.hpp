#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SoundBankEntry)
namespace GlobalNamespace {
class AudioAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundBankEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundBankEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundBankEntry*, "", "SoundBankEntry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundBankEntry
class CORDL_TYPE SoundBankEntry : public ::System::Object {
public:
// Declarations
/// @brief Field Asset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::GlobalNamespace::SoundBankEntry* New_ctor(::StringW  name, ::GlobalNamespace::AudioAsset*  asset) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Asset() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::GlobalNamespace::AudioAsset*  asset) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundBankEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundBankEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundBankEntry(SoundBankEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundBankEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundBankEntry(SoundBankEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17639};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Asset, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Asset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundBankEntry, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankEntry, ___Asset) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundBankEntry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
