#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/RTHandles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RTHandles)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
class RTHandles;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Utility::RTHandles*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Utility::RTHandles*, "WaveHarmonic.Crest.Utility", "RTHandles");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.RTHandles
class CORDL_TYPE RTHandles : public ::System::Object {
public:
// Declarations
/// @brief Method Initialize, addr 0x18256c410, size 0x80, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method OnBeginCameraRendering, addr 0x18256c490, size 0x50, virtual false, abstract: false, final false
static inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RTHandles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RTHandles", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RTHandles(RTHandles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RTHandles", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RTHandles(RTHandles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20168};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Utility::RTHandles) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Utility
