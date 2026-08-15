#pragma once
// IWYU pragma private; include "UnityEngine/Splines/InterpolatorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InterpolatorUtility)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Splines {
template<typename T>
class IInterpolator_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Splines {
class InterpolatorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::InterpolatorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::InterpolatorUtility*, "UnityEngine.Splines", "InterpolatorUtility");
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.InterpolatorUtility
class CORDL_TYPE InterpolatorUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_LerpColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LerpColor, put=setStaticF_s_LerpColor)) ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>*  s_LerpColor;

/// @brief Field s_LerpFloat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LerpFloat, put=setStaticF_s_LerpFloat)) ::UnityEngine::Splines::IInterpolator_1<float_t>*  s_LerpFloat;

/// @brief Field s_LerpFloat2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LerpFloat2, put=setStaticF_s_LerpFloat2)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>*  s_LerpFloat2;

/// @brief Field s_LerpFloat3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LerpFloat3, put=setStaticF_s_LerpFloat3)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>*  s_LerpFloat3;

/// @brief Field s_LerpFloat4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LerpFloat4, put=setStaticF_s_LerpFloat4)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*  s_LerpFloat4;

/// @brief Field s_LerpQuaternion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LerpQuaternion, put=setStaticF_s_LerpQuaternion)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*  s_LerpQuaternion;

/// @brief Field s_SlerpFloat2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SlerpFloat2, put=setStaticF_s_SlerpFloat2)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>*  s_SlerpFloat2;

/// @brief Field s_SlerpFloat3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SlerpFloat3, put=setStaticF_s_SlerpFloat3)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>*  s_SlerpFloat3;

/// @brief Field s_SlerpQuaternion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SlerpQuaternion, put=setStaticF_s_SlerpQuaternion)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*  s_SlerpQuaternion;

/// @brief Field s_SmoothStepFloat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SmoothStepFloat, put=setStaticF_s_SmoothStepFloat)) ::UnityEngine::Splines::IInterpolator_1<float_t>*  s_SmoothStepFloat;

/// @brief Field s_SmoothStepFloat2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SmoothStepFloat2, put=setStaticF_s_SmoothStepFloat2)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>*  s_SmoothStepFloat2;

/// @brief Field s_SmoothStepFloat3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SmoothStepFloat3, put=setStaticF_s_SmoothStepFloat3)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>*  s_SmoothStepFloat3;

/// @brief Field s_SmoothStepFloat4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SmoothStepFloat4, put=setStaticF_s_SmoothStepFloat4)) ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*  s_SmoothStepFloat4;

static inline ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>* getStaticF_s_LerpColor() ;

static inline ::UnityEngine::Splines::IInterpolator_1<float_t>* getStaticF_s_LerpFloat() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>* getStaticF_s_LerpFloat2() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>* getStaticF_s_LerpFloat3() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>* getStaticF_s_LerpFloat4() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>* getStaticF_s_LerpQuaternion() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>* getStaticF_s_SlerpFloat2() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>* getStaticF_s_SlerpFloat3() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>* getStaticF_s_SlerpQuaternion() ;

static inline ::UnityEngine::Splines::IInterpolator_1<float_t>* getStaticF_s_SmoothStepFloat() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>* getStaticF_s_SmoothStepFloat2() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>* getStaticF_s_SmoothStepFloat3() ;

static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>* getStaticF_s_SmoothStepFloat4() ;

/// @brief Method get_LerpColor, addr 0x1821665f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>* get_LerpColor() ;

/// @brief Method get_LerpFloat, addr 0x182166670, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<float_t>* get_LerpFloat() ;

/// @brief Method get_LerpFloat2, addr 0x182166610, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>* get_LerpFloat2() ;

/// @brief Method get_LerpFloat3, addr 0x182166630, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>* get_LerpFloat3() ;

/// @brief Method get_LerpFloat4, addr 0x182166650, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>* get_LerpFloat4() ;

/// @brief Method get_LerpQuaternion, addr 0x182166690, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>* get_LerpQuaternion() ;

/// @brief Method get_SlerpFloat2, addr 0x1821666b0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>* get_SlerpFloat2() ;

/// @brief Method get_SlerpFloat3, addr 0x1821666d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>* get_SlerpFloat3() ;

/// @brief Method get_SlerpQuaternion, addr 0x1821666f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>* get_SlerpQuaternion() ;

/// @brief Method get_SmoothStepFloat, addr 0x182166770, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<float_t>* get_SmoothStepFloat() ;

/// @brief Method get_SmoothStepFloat2, addr 0x182166710, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>* get_SmoothStepFloat2() ;

/// @brief Method get_SmoothStepFloat3, addr 0x182166730, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>* get_SmoothStepFloat3() ;

/// @brief Method get_SmoothStepFloat4, addr 0x182166750, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>* get_SmoothStepFloat4() ;

static inline void setStaticF_s_LerpColor(::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>*  value) ;

static inline void setStaticF_s_LerpFloat(::UnityEngine::Splines::IInterpolator_1<float_t>*  value) ;

static inline void setStaticF_s_LerpFloat2(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>*  value) ;

static inline void setStaticF_s_LerpFloat3(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>*  value) ;

static inline void setStaticF_s_LerpFloat4(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*  value) ;

static inline void setStaticF_s_LerpQuaternion(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*  value) ;

static inline void setStaticF_s_SlerpFloat2(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>*  value) ;

static inline void setStaticF_s_SlerpFloat3(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>*  value) ;

static inline void setStaticF_s_SlerpQuaternion(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*  value) ;

static inline void setStaticF_s_SmoothStepFloat(::UnityEngine::Splines::IInterpolator_1<float_t>*  value) ;

static inline void setStaticF_s_SmoothStepFloat2(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float2>*  value) ;

static inline void setStaticF_s_SmoothStepFloat3(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float3>*  value) ;

static inline void setStaticF_s_SmoothStepFloat4(::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InterpolatorUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InterpolatorUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InterpolatorUtility(InterpolatorUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterpolatorUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterpolatorUtility(InterpolatorUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::InterpolatorUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
