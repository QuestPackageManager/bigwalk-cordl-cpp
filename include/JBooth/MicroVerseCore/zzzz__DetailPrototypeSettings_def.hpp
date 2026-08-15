#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailPrototypeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(DetailPrototypeSettings)
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class DetailPrototypeSettings;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::DetailPrototypeSettings*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::DetailPrototypeSettings*, "JBooth.MicroVerseCore", "DetailPrototypeSettings");
// Dependencies UnityEngine.ScriptableObject
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.DetailPrototypeSettings
class CORDL_TYPE DetailPrototypeSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field prototype, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototype, put=__cordl_internal_set_prototype)) ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  prototype;

static inline ::JBooth::MicroVerseCore::DetailPrototypeSettings* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable* const& __cordl_internal_get_prototype() const;

constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable*& __cordl_internal_get_prototype() ;

constexpr void __cordl_internal_set_prototype(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailPrototypeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototypeSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailPrototypeSettings(DetailPrototypeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototypeSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailPrototypeSettings(DetailPrototypeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17975};

/// @brief Field prototype, offset: 0x18, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  ___prototype;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSettings, ___prototype) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::DetailPrototypeSettings) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
