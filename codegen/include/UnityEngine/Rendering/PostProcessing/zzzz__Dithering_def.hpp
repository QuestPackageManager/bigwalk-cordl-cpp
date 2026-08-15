#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Dithering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dithering)
namespace System {
class Random;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Dithering;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Dithering*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Dithering*, "UnityEngine.Rendering.PostProcessing", "Dithering");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Dithering
class CORDL_TYPE Dithering : public ::System::Object {
public:
// Declarations
/// @brief Field m_NoiseTextureIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NoiseTextureIndex, put=__cordl_internal_set_m_NoiseTextureIndex)) int32_t  m_NoiseTextureIndex;

/// @brief Field m_Random, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Random, put=__cordl_internal_set_m_Random)) ::System::Random*  m_Random;

static inline ::UnityEngine::Rendering::PostProcessing::Dithering* New_ctor() ;

/// @brief Method Render, addr 0x181fb6ad0, size 0x190, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr int32_t const& __cordl_internal_get_m_NoiseTextureIndex() const;

constexpr int32_t& __cordl_internal_get_m_NoiseTextureIndex() ;

constexpr ::System::Random* const& __cordl_internal_get_m_Random() const;

constexpr ::System::Random*& __cordl_internal_get_m_Random() ;

constexpr void __cordl_internal_set_m_NoiseTextureIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Random(::System::Random*  value) ;

/// @brief Method .ctor, addr 0x181fb6c60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dithering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dithering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dithering(Dithering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dithering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dithering(Dithering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18567};

/// @brief Field m_NoiseTextureIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_NoiseTextureIndex;

/// @brief Field m_Random, offset: 0x18, size: 0x8, def value: None
 ::System::Random*  ___m_Random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Dithering, ___m_NoiseTextureIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Dithering, ___m_Random) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Dithering) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
