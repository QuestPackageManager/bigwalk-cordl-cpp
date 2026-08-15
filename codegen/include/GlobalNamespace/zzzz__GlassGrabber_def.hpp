#pragma once
// IWYU pragma private; include "GlobalNamespace/GlassGrabber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GlassGrabber)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class GlassGrabber;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GlassGrabber*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlassGrabber*, "", "GlassGrabber");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlassGrabber
class CORDL_TYPE GlassGrabber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeCameras, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCameras, put=__cordl_internal_set_activeCameras)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>*  activeCameras;

/// @brief Field logVerbose, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method CreateCameraBuffer, addr 0x1803e7c40, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* CreateCameraBuffer() ;

static inline ::GlobalNamespace::GlassGrabber* New_ctor() ;

/// @brief Method OnAnyCameraPreRender, addr 0x1803e7d70, size 0x220, virtual false, abstract: false, final false
inline void OnAnyCameraPreRender(::UnityEngine::Camera*  activeCamera) ;

/// @brief Method OnDisable, addr 0x1803e7f90, size 0x1d0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803e8160, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>* const& __cordl_internal_get_activeCameras() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>*& __cordl_internal_get_activeCameras() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_activeCameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1803e8250, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlassGrabber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlassGrabber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlassGrabber(GlassGrabber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlassGrabber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlassGrabber(GlassGrabber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4942};

/// @brief Field logVerbose, offset: 0x20, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field activeCameras, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>*  ___activeCameras;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlassGrabber, ___logVerbose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlassGrabber, ___activeCameras) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlassGrabber) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
