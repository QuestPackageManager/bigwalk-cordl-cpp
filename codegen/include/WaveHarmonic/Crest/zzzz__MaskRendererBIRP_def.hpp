#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaskRendererBIRP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
CORDL_MODULE_EXPORT(MaskRendererBIRP)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class MaskRendererBIRP;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::MaskRendererBIRP*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRendererBIRP*, "WaveHarmonic.Crest", "MaskRendererBIRP");
// Dependencies WaveHarmonic.Crest.MaskRenderer
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRendererBIRP
class CORDL_TYPE MaskRendererBIRP : public ::WaveHarmonic::Crest::MaskRenderer {
public:
// Declarations
/// @brief Field _Commands, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Commands, put=__cordl_internal_set__Commands)) ::UnityEngine::Rendering::CommandBuffer*  _Commands;

/// @brief Method Destroy, addr 0x1825a1a40, size 0xa0, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Enable, addr 0x1825a1ae0, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

static inline ::WaveHarmonic::Crest::MaskRendererBIRP* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnBeginCameraRendering, addr 0x1825a1af0, size 0x1b0, virtual true, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x1825a1ca0, size 0x70, virtual true, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__Commands() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__Commands() ;

constexpr void __cordl_internal_set__Commands(::UnityEngine::Rendering::CommandBuffer*  value) ;

/// @brief Method .ctor, addr 0x1825a1d10, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRendererBIRP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRendererBIRP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRendererBIRP(MaskRendererBIRP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRendererBIRP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRendererBIRP(MaskRendererBIRP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16680};

/// @brief Field _Commands, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____Commands;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MaskRendererBIRP, ____Commands) == 0x90, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MaskRendererBIRP) == 0x98, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
