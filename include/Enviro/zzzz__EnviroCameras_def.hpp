#pragma once
// IWYU pragma private; include "Enviro/EnviroCameras.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroCameras)
namespace Enviro {
class EnviroQuality;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Enviro {
class EnviroCameras;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroCameras*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroCameras*, "Enviro", "EnviroCameras");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroCameras
class CORDL_TYPE EnviroCameras : public ::System::Object {
public:
// Declarations
/// @brief Field camera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

/// @brief Field quality, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::UnityW<::Enviro::EnviroQuality>  quality;

/// @brief Field resetMatrix, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetMatrix, put=__cordl_internal_set_resetMatrix)) bool  resetMatrix;

static inline ::Enviro::EnviroCameras* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr ::UnityW<::Enviro::EnviroQuality> const& __cordl_internal_get_quality() const;

constexpr ::UnityW<::Enviro::EnviroQuality>& __cordl_internal_get_quality() ;

constexpr bool const& __cordl_internal_get_resetMatrix() const;

constexpr bool& __cordl_internal_get_resetMatrix() ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_quality(::UnityW<::Enviro::EnviroQuality>  value) ;

constexpr void __cordl_internal_set_resetMatrix(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroCameras() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroCameras", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroCameras(EnviroCameras && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroCameras", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroCameras(EnviroCameras const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18421};

/// @brief Field camera, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

/// @brief Field quality, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroQuality>  ___quality;

/// @brief Field resetMatrix, offset: 0x20, size: 0x1, def value: None
 bool  ___resetMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroCameras, ___camera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCameras, ___quality) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCameras, ___resetMatrix) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroCameras) == 0x28, "Size mismatch!");

} // namespace end def Enviro
