#pragma once
// IWYU pragma private; include "AmplifyImpostors/SpriteUtilityEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteUtilityEx)
namespace System {
class Type;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace AmplifyImpostors {
class SpriteUtilityEx;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::SpriteUtilityEx*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::SpriteUtilityEx*, "AmplifyImpostors", "SpriteUtilityEx");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.SpriteUtilityEx
class CORDL_TYPE SpriteUtilityEx : public ::System::Object {
public:
// Declarations
/// @brief Field type, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_type, put=setStaticF_type)) ::System::Type*  type;

/// @brief Method GenerateOutline, addr 0x1802d9e30, size 0x280, virtual false, abstract: false, final false
static inline void GenerateOutline(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, float_t  detail, uint8_t  alphaTolerance, bool  holeDetection, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>  paths) ;

static inline ::System::Type* getStaticF_type() ;

/// @brief Method get_Type, addr 0x1802da0b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Type* get_Type() ;

static inline void setStaticF_type(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteUtilityEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteUtilityEx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteUtilityEx(SpriteUtilityEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteUtilityEx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteUtilityEx(SpriteUtilityEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::SpriteUtilityEx) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
