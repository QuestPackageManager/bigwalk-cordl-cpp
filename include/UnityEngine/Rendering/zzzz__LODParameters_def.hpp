#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODParameters)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODParameters);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
// Dependencies UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODParameters
struct CORDL_TYPE LODParameters {
public:
// Declarations
 __declspec(property(get=get_cameraPixelHeight, put=set_cameraPixelHeight)) int32_t  cameraPixelHeight;

 __declspec(property(get=get_cameraPosition, put=set_cameraPosition)) ::UnityEngine::Vector3  cameraPosition;

 __declspec(property(get=get_fieldOfView, put=set_fieldOfView)) float_t  fieldOfView;

 __declspec(property(get=get_isOrthographic, put=set_isOrthographic)) bool  isOrthographic;

 __declspec(property(get=get_orthoSize, put=set_orthoSize)) float_t  orthoSize;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*() ;

/// @brief Method Equals, addr 0x1822a9db0, size 0x110, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1822a9ce0, size 0xd0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::LODParameters  other) ;

/// @brief Method GetHashCode, addr 0x1822a9ec0, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_cameraPixelHeight, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_cameraPixelHeight() ;

/// @brief Method get_cameraPosition, addr 0x1805c3280, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_cameraPosition() ;

/// @brief Method get_fieldOfView, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_fieldOfView() ;

/// @brief Method get_isOrthographic, addr 0x18170da80, size 0x20, virtual false, abstract: false, final false
inline bool get_isOrthographic() ;

/// @brief Method get_orthoSize, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_orthoSize() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>* i___System__IEquatable_1___UnityEngine__Rendering__LODParameters_() ;

/// @brief Method set_cameraPixelHeight, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_cameraPixelHeight(int32_t  value) ;

/// @brief Method set_cameraPosition, addr 0x1822104b0, size 0x10, virtual false, abstract: false, final false
inline void set_cameraPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_fieldOfView, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void set_fieldOfView(float_t  value) ;

/// @brief Method set_isOrthographic, addr 0x1822a9f80, size 0x30, virtual false, abstract: false, final false
inline void set_isOrthographic(bool  value) ;

/// @brief Method set_orthoSize, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_orthoSize(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LODParameters() ;

// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LODParameters(int32_t  m_IsOrthographic, ::UnityEngine::Vector3  m_CameraPosition, float_t  m_FieldOfView, float_t  m_OrthoSize, int32_t  m_CameraPixelHeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field m_IsOrthographic, offset: 0x0, size: 0x4, def value: None
 int32_t  m_IsOrthographic;

/// @brief Field m_CameraPosition, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_CameraPosition;

/// @brief Field m_FieldOfView, offset: 0x10, size: 0x4, def value: None
 float_t  m_FieldOfView;

/// @brief Field m_OrthoSize, offset: 0x14, size: 0x4, def value: None
 float_t  m_OrthoSize;

/// @brief Field m_CameraPixelHeight, offset: 0x18, size: 0x4, def value: None
 int32_t  m_CameraPixelHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_IsOrthographic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_CameraPosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_FieldOfView) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_OrthoSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_CameraPixelHeight) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LODParameters) == 0x1c, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
