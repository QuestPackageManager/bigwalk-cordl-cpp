#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatRuntimeUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MicroSplatRuntimeUtil)
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace JBooth::MicroSplat {
class MicroSplatRuntimeUtil;
}
// Write type traits
MARK_REF_T(::JBooth::MicroSplat::MicroSplatRuntimeUtil*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatRuntimeUtil*, "JBooth.MicroSplat", "MicroSplatRuntimeUtil");
// Dependencies System.Object
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatRuntimeUtil
class CORDL_TYPE MicroSplatRuntimeUtil : public ::System::Object {
public:
// Declarations
static inline ::JBooth::MicroSplat::MicroSplatRuntimeUtil* New_ctor() ;

/// @brief Method UVScaleToUnityUVScale, addr 0x181401c60, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UVScaleToUnityUVScale(::UnityEngine::Vector2  uv, ::UnityEngine::Terrain*  t) ;

/// @brief Method UnityUVScaleToUVScale, addr 0x181401d10, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UnityUVScaleToUVScale(::UnityEngine::Vector2  uv, ::UnityEngine::Terrain*  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatRuntimeUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatRuntimeUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatRuntimeUtil(MicroSplatRuntimeUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatRuntimeUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatRuntimeUtil(MicroSplatRuntimeUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroSplat::MicroSplatRuntimeUtil) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
