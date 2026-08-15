#pragma once
// IWYU pragma private; include "UnityEngine/ImageEffectUsesCommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ImageEffectUsesCommandBuffer)
// Forward declare root types
namespace UnityEngine {
class ImageEffectUsesCommandBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::ImageEffectUsesCommandBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ImageEffectUsesCommandBuffer*, "UnityEngine", "ImageEffectUsesCommandBuffer");
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ImageEffectUsesCommandBuffer
class CORDL_TYPE ImageEffectUsesCommandBuffer : public ::System::Attribute {
public:
// Declarations
static inline ::UnityEngine::ImageEffectUsesCommandBuffer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageEffectUsesCommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageEffectUsesCommandBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageEffectUsesCommandBuffer(ImageEffectUsesCommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageEffectUsesCommandBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageEffectUsesCommandBuffer(ImageEffectUsesCommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10509};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ImageEffectUsesCommandBuffer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
