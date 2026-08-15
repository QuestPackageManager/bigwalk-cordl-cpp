#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureCombiner)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureCombiner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextureCombiner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureCombiner*, "", "TextureCombiner");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureCombiner
class CORDL_TYPE TextureCombiner : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field destinationTexture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationTexture, put=__cordl_internal_set_destinationTexture)) ::UnityW<::UnityEngine::Texture2D>  destinationTexture;

/// @brief Field maxSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSize, put=__cordl_internal_set_maxSize)) int32_t  maxSize;

/// @brief Field texture00, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture00, put=__cordl_internal_set_texture00)) ::UnityW<::UnityEngine::Texture2D>  texture00;

/// @brief Field texture01, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture01, put=__cordl_internal_set_texture01)) ::UnityW<::UnityEngine::Texture2D>  texture01;

/// @brief Field texture10, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture10, put=__cordl_internal_set_texture10)) ::UnityW<::UnityEngine::Texture2D>  texture10;

/// @brief Field texture11, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture11, put=__cordl_internal_set_texture11)) ::UnityW<::UnityEngine::Texture2D>  texture11;

static inline ::GlobalNamespace::TextureCombiner* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_destinationTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_destinationTexture() ;

constexpr int32_t const& __cordl_internal_get_maxSize() const;

constexpr int32_t& __cordl_internal_get_maxSize() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture00() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture00() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture01() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture01() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture10() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture10() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture11() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture11() ;

constexpr void __cordl_internal_set_destinationTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_maxSize(int32_t  value) ;

constexpr void __cordl_internal_set_texture00(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_texture01(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_texture10(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_texture11(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1803f2080, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureCombiner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureCombiner(TextureCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureCombiner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureCombiner(TextureCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4927};

/// @brief Field texture00, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture00;

/// @brief Field texture01, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture01;

/// @brief Field texture10, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture10;

/// @brief Field texture11, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture11;

/// @brief Field destinationTexture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___destinationTexture;

/// @brief Field maxSize, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureCombiner, ___texture00) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureCombiner, ___texture01) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureCombiner, ___texture10) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureCombiner, ___texture11) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureCombiner, ___destinationTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureCombiner, ___maxSize) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureCombiner) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
