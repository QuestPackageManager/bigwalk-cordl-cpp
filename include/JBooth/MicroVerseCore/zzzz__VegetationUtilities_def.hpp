#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/VegetationUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VegetationUtilities)
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
namespace JBooth::MicroVerseCore {
class TreePrototypeSerializable;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class VegetationUtilities;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::VegetationUtilities*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::VegetationUtilities*, "JBooth.MicroVerseCore", "VegetationUtilities");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.VegetationUtilities
class CORDL_TYPE VegetationUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method FindDetailIndex, addr 0x18142a510, size 0xa0, virtual false, abstract: false, final false
static inline int32_t FindDetailIndex(::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  prototype) ;

/// @brief Method FindTreeIndex, addr 0x18142a5b0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t FindTreeIndex(::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::TreePrototypeSerializable*  prototype) ;

static inline ::JBooth::MicroVerseCore::VegetationUtilities* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VegetationUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VegetationUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VegetationUtilities(VegetationUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VegetationUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VegetationUtilities(VegetationUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::VegetationUtilities) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
