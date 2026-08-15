#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineInfo)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine::Splines {
class ISplineContainer;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInfo, "UnityEngine.Splines", "SplineInfo");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInfo
struct CORDL_TYPE SplineInfo {
public:
// Declarations
 __declspec(property(get=get_Container, put=set_Container)) ::UnityEngine::Splines::ISplineContainer*  Container;

 __declspec(property(get=get_Index, put=set_Index)) int32_t  Index;

 __declspec(property(get=get_LocalToWorld)) ::Unity::Mathematics::float4x4  LocalToWorld;

 __declspec(property(get=get_Object)) ::UnityW<::UnityEngine::Object>  Object;

 __declspec(property(get=get_Spline)) ::UnityEngine::Splines::Spline*  Spline;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>*() ;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method Equals, addr 0x1821704f0, size 0xf0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1821705e0, size 0xc0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Splines::SplineInfo  other) ;

/// @brief Method GetHashCode, addr 0x1821706a0, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method OnAfterDeserialize, addr 0x182170720, size 0x60, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x182170780, size 0x80, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0x182170800, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::ISplineContainer*  container, int32_t  index) ;

/// @brief Method get_Container, addr 0x1821708e0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::ISplineContainer* get_Container() ;

/// @brief Method get_Index, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// @brief Method get_LocalToWorld, addr 0x182170910, size 0x1a0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 get_LocalToWorld() ;

/// @brief Method get_Object, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_Object() ;

/// @brief Method get_Spline, addr 0x182170ab0, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_Spline() ;

/// @brief Method get_Transform, addr 0x182170b90, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>"
constexpr ::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>* i___System__IEquatable_1___UnityEngine__Splines__SplineInfo_() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method set_Container, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::ISplineContainer*  value) ;

/// @brief Method set_Index, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Index(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineInfo() ;

// Ctor Parameters [CppParam { name: "m_Object", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None }, CppParam { name: "m_Container", ty: "::UnityEngine::Splines::ISplineContainer*", modifiers: "", def_value: None }, CppParam { name: "m_SplineIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineInfo(::UnityW<::UnityEngine::Object>  m_Object, ::UnityEngine::Splines::ISplineContainer*  m_Container, int32_t  m_SplineIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18731};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Object, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  m_Object;

/// @brief Field m_Container, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Splines::ISplineContainer*  m_Container;

/// @brief Field m_SplineIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  m_SplineIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInfo, m_Object) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInfo, m_Container) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInfo, m_SplineIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInfo) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
