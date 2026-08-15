#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatKeywords.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MicroSplatKeywords)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace JBooth::MicroSplat {
class MicroSplatKeywords;
}
// Write type traits
MARK_REF_T(::JBooth::MicroSplat::MicroSplatKeywords*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatKeywords*, "JBooth.MicroSplat", "MicroSplatKeywords");
// Dependencies UnityEngine.ScriptableObject
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatKeywords
class CORDL_TYPE MicroSplatKeywords : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field keywords, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keywords, put=__cordl_internal_set_keywords)) ::System::Collections::Generic::List_1<::StringW>*  keywords;

/// @brief Method DisableKeyword, addr 0x1813fe9b0, size 0x60, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  k) ;

/// @brief Method EnableKeyword, addr 0x1813fea10, size 0xa0, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  k) ;

/// @brief Method IsKeywordEnabled, addr 0x1813feab0, size 0x30, virtual false, abstract: false, final false
inline bool IsKeywordEnabled(::StringW  k) ;

static inline ::JBooth::MicroSplat::MicroSplatKeywords* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_keywords() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_keywords() ;

constexpr void __cordl_internal_set_keywords(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1813feae0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatKeywords() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatKeywords", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatKeywords(MicroSplatKeywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatKeywords", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatKeywords(MicroSplatKeywords const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20806};

/// @brief Field keywords, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___keywords;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatKeywords, ___keywords) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatKeywords) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
