#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HeightmapData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__StampData_def.hpp"
CORDL_MODULE_EXPORT(HeightmapData)
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class HeightmapData;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::HeightmapData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HeightmapData*, "JBooth.MicroVerseCore", "HeightmapData");
// Dependencies JBooth.MicroVerseCore.StampData
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.HeightmapData
class CORDL_TYPE HeightmapData : public ::JBooth::MicroVerseCore::StampData {
public:
// Declarations
static inline ::JBooth::MicroVerseCore::HeightmapData* New_ctor(::UnityEngine::Terrain*  terrain) ;

/// @brief Method .ctor, addr 0x1814420c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeightmapData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeightmapData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeightmapData(HeightmapData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeightmapData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeightmapData(HeightmapData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18042};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::HeightmapData) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
