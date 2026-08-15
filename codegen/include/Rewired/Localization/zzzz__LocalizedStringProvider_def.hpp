#pragma once
// IWYU pragma private; include "Rewired/Localization/LocalizedStringProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Localization/zzzz__LocalizedStringProviderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedStringProvider)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Rewired::Localization {
class LocalizedStringProvider;
}
// Write type traits
MARK_REF_T(::Rewired::Localization::LocalizedStringProvider*);
DEFINE_IL2CPP_CLASS(::Rewired::Localization::LocalizedStringProvider*, "Rewired.Localization", "LocalizedStringProvider");
// Dependencies Rewired.Localization.LocalizedStringProviderBase
namespace Rewired::Localization {
// Is value type: false
// CS Name: Rewired.Localization.LocalizedStringProvider
class CORDL_TYPE LocalizedStringProvider : public ::Rewired::Localization::LocalizedStringProviderBase {
public:
// Declarations
/// @brief Field _dictionary, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dictionary, put=__cordl_internal_set__dictionary)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _dictionary;

/// @brief Field _initialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _localizedStringsFile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedStringsFile, put=__cordl_internal_set__localizedStringsFile)) ::UnityW<::UnityEngine::TextAsset>  _localizedStringsFile;

 __declspec(property(get=get_dictionary, put=set_dictionary)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dictionary;

 __declspec(property(get=get_initialized)) bool  initialized;

 __declspec(property(get=get_localizedStringsFile, put=set_localizedStringsFile)) ::UnityW<::UnityEngine::TextAsset>  localizedStringsFile;

/// @brief Method Initialize, addr 0x1803ab160, size 0x30, virtual true, abstract: false, final false
inline bool Initialize() ;

static inline ::Rewired::Localization::LocalizedStringProvider* New_ctor() ;

/// @brief Method TryGetLocalizedString, addr 0x1803ab190, size 0x50, virtual true, abstract: false, final false
inline bool TryGetLocalizedString(::StringW  key, ::by_ref<::StringW>  result) ;

/// @brief Method TryLoadLocalizedStringData, addr 0x1803ab1e0, size 0xa0, virtual true, abstract: false, final false
inline bool TryLoadLocalizedStringData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__dictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__dictionary() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__localizedStringsFile() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__localizedStringsFile() ;

constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__localizedStringsFile(::UnityW<::UnityEngine::TextAsset>  value) ;

/// @brief Method .ctor, addr 0x1803ab280, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_dictionary, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_dictionary() ;

/// @brief Method get_initialized, addr 0x1803023c0, size 0x10, virtual true, abstract: false, final false
inline bool get_initialized() ;

/// @brief Method get_localizedStringsFile, addr 0x1802d9810, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::TextAsset> get_localizedStringsFile() ;

/// @brief Method set_dictionary, addr 0x1802d9830, size 0x10, virtual true, abstract: false, final false
inline void set_dictionary(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_localizedStringsFile, addr 0x1803ab2d0, size 0x40, virtual true, abstract: false, final false
inline void set_localizedStringsFile(::UnityEngine::TextAsset*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedStringProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedStringProvider(LocalizedStringProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedStringProvider(LocalizedStringProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5706};

/// @brief Field _localizedStringsFile, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ____localizedStringsFile;

/// @brief Field _dictionary, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____dictionary;

/// @brief Field _initialized, offset: 0x38, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Localization::LocalizedStringProvider, ____localizedStringsFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Localization::LocalizedStringProvider, ____dictionary) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Localization::LocalizedStringProvider, ____initialized) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Localization::LocalizedStringProvider) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Localization
