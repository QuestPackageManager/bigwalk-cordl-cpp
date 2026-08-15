#pragma once
// IWYU pragma private; include "UnityEngine/LODGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroup)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct LODFadeMode;
}
namespace UnityEngine {
struct LOD;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LODGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::LODGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LODGroup*, "UnityEngine", "LODGroup");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LODGroup
class CORDL_TYPE LODGroup : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_animateCrossFading, put=set_animateCrossFading)) bool  animateCrossFading;

 __declspec(property(get=get_fadeMode)) ::UnityEngine::LODFadeMode  fadeMode;

 __declspec(property(get=get_lastLODBillboard)) bool  lastLODBillboard;

 __declspec(property(get=get_localReferencePoint, put=set_localReferencePoint)) ::UnityEngine::Vector3  localReferencePoint;

 __declspec(property(get=get_lodCount)) int32_t  lodCount;

 __declspec(property(get=get_size)) float_t  size;

/// @brief Method GetLODs, addr 0x182250cf0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::LOD> GetLODs() ;

/// @brief Method GetLODs_Injected, addr 0x182250ce0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LOD> GetLODs_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::LODGroup* New_ctor() ;

/// @brief Method SetLODs, addr 0x182250d30, size 0x30, virtual false, abstract: false, final false
inline void SetLODs(::ArrayW<::UnityEngine::LOD>  lods) ;

/// @brief Method SetLODs_Injected, addr 0x182250d20, size 0x10, virtual false, abstract: false, final false
static inline void SetLODs_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::LOD>  lods) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_animateCrossFading, addr 0x182250d70, size 0x30, virtual false, abstract: false, final false
inline bool get_animateCrossFading() ;

/// @brief Method get_animateCrossFading_Injected, addr 0x182250d60, size 0x10, virtual false, abstract: false, final false
static inline bool get_animateCrossFading_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_crossFadeAnimationDuration, addr 0x182250da0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_crossFadeAnimationDuration() ;

/// @brief Method get_fadeMode, addr 0x182250dc0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::LODFadeMode get_fadeMode() ;

/// @brief Method get_fadeMode_Injected, addr 0x182250db0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::LODFadeMode get_fadeMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lastLODBillboard, addr 0x182250e00, size 0x30, virtual false, abstract: false, final false
inline bool get_lastLODBillboard() ;

/// @brief Method get_lastLODBillboard_Injected, addr 0x182250df0, size 0x10, virtual false, abstract: false, final false
static inline bool get_lastLODBillboard_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_localReferencePoint, addr 0x182250e40, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localReferencePoint() ;

/// @brief Method get_localReferencePoint_Injected, addr 0x182250e30, size 0x10, virtual false, abstract: false, final false
static inline void get_localReferencePoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_lodCount, addr 0x182250e90, size 0x30, virtual false, abstract: false, final false
inline int32_t get_lodCount() ;

/// @brief Method get_lodCount_Injected, addr 0x182250e80, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_lodCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_size, addr 0x182250ed0, size 0x30, virtual false, abstract: false, final false
inline float_t get_size() ;

/// @brief Method get_size_Injected, addr 0x182250ec0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_size_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_animateCrossFading, addr 0x182250f10, size 0x30, virtual false, abstract: false, final false
inline void set_animateCrossFading(bool  value) ;

/// @brief Method set_animateCrossFading_Injected, addr 0x182250f00, size 0x10, virtual false, abstract: false, final false
static inline void set_animateCrossFading_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_crossFadeAnimationDuration, addr 0x182250f40, size 0x10, virtual false, abstract: false, final false
static inline void set_crossFadeAnimationDuration(float_t  value) ;

/// @brief Method set_localReferencePoint, addr 0x182250f60, size 0x30, virtual false, abstract: false, final false
inline void set_localReferencePoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_localReferencePoint_Injected, addr 0x182250f50, size 0x10, virtual false, abstract: false, final false
static inline void set_localReferencePoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroup(LODGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroup(LODGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LODGroup) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
