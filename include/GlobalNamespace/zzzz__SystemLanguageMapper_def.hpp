#pragma once
// IWYU pragma private; include "GlobalNamespace/SystemLanguageMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemLanguageMapper)
namespace GlobalNamespace {
struct LocalizationLanguage;
}
// Forward declare root types
namespace GlobalNamespace {
class SystemLanguageMapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SystemLanguageMapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SystemLanguageMapper*, "", "SystemLanguageMapper");
// Dependencies LocalizationLanguage, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SystemLanguageMapper
class CORDL_TYPE SystemLanguageMapper : public ::System::Object {
public:
// Declarations
/// @brief Field fallbackLanguage, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_fallbackLanguage, put=setStaticF_fallbackLanguage)) ::GlobalNamespace::LocalizationLanguage  fallbackLanguage;

/// @brief Method GetSystemLanguage, addr 0x18039f0d0, size 0x130, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LocalizationLanguage GetSystemLanguage() ;

static inline ::GlobalNamespace::LocalizationLanguage getStaticF_fallbackLanguage() ;

static inline void setStaticF_fallbackLanguage(::GlobalNamespace::LocalizationLanguage  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemLanguageMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemLanguageMapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemLanguageMapper(SystemLanguageMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemLanguageMapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemLanguageMapper(SystemLanguageMapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SystemLanguageMapper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
